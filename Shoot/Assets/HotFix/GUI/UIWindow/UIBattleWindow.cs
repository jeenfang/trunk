using System.Collections;
using System.Collections.Generic;
using HotFix.Contexts;
using TouchController;
using UnityEngine;
using UnityEngine.UI;
using UniFramework.Window;
using UniFramework.Event;

[WindowAttribute(100, false)]
public class UIBattleWindow : UIWindow
{
    private EventGroup _eventGroup = new EventGroup();
    private Text _scoreLabel;
    private GameObject _overView;
    private Joystick _joystickCtrlMove;
    private Joystick _joystickCtrlTarget;
    private Transform _target;

    public override void OnCreate()
    {
        _scoreLabel = this.transform.Find("ScoreView/Score").GetComponent<Text>();
        _scoreLabel.text = "Score : 0";

        var restartBtn = this.transform.Find("OverView/Restart").GetComponent<Button>();
        restartBtn.onClick.AddListener(OnClickRestartBtn);

        var homeBtn = this.transform.Find("OverView/Home").GetComponent<Button>();
        homeBtn.onClick.AddListener(OnClickHomeBtn);

        _overView = this.transform.Find("OverView").gameObject;
        _target = this.transform.Find("Target");

        _joystickCtrlMove = this.transform.Find("MoveController/DragArea/JoystickBase").GetComponent<Joystick>();
        _joystickCtrlMove.relativeTransform = GameContext.GetContext<CameraContext>().MainCamera.transform;
        _joystickCtrlMove.beginDragEvent.RemoveAllListeners();
        _joystickCtrlMove.beginDragEvent.AddListener(BeginDragMoveJoystick);
        _joystickCtrlMove.dragEvent.RemoveAllListeners();
        _joystickCtrlMove.dragEvent.AddListener(DragMoveJoystick);

        _joystickCtrlTarget = this.transform.Find("TargetController/DragArea/JoystickBase").GetComponent<Joystick>();
        _joystickCtrlTarget.relativeTransform = GameContext.GetContext<CameraContext>().MainCamera.transform;
        _joystickCtrlTarget.beginDragEvent.RemoveAllListeners();
        _joystickCtrlTarget.beginDragEvent.AddListener(BeginDragRotateJoystick);
        _joystickCtrlTarget.dragEvent.RemoveAllListeners();
        _joystickCtrlTarget.dragEvent.AddListener(DragRotateJoystick);

        _eventGroup.AddListener<BattleEventDefine.ScoreChange>(OnHandleEventMessage);
        _eventGroup.AddListener<BattleEventDefine.GameOver>(OnHandleEventMessage);
    }

    public override void OnDestroy()
    {
        _eventGroup.RemoveAllListener();
    }

    public override void OnRefresh()
    {
        _overView.SetActive(false);
    }

    public override void OnUpdate()
    {
        UpdateTargetPointPos();
    }

    private void UpdateTargetPointPos()
    {
        if (null != _target)
        {
            _target.position = Vector3.Lerp(_target.position,
                GameContext.GetContext<PlayerContext>().GetPlayerTargetScreenPoint(), Time.deltaTime * 15);
        }
    }

    private void BeginDragMoveJoystick(string name)
    {
        //UniLogger.Log("begin name:" + name);
    }

    private void DragMoveJoystick(string name, Vector2 input)
    {
        GameContext.GetContext<PlayerContext>().UpdatePosition(input);
    }


    private void BeginDragRotateJoystick(string name)
    {
        //UniLogger.Log("begin name:" + name);
    }

    private void DragRotateJoystick(string name, Vector2 input)
    {
        GameContext.GetContext<PlayerContext>().UpdateRotation(input);
    }

    private void OnClickRestartBtn()
    {
        SceneEventDefine.ChangeToBattleScene.SendEventMessage();
    }

    private void OnClickHomeBtn()
    {
        SceneEventDefine.ChangeToHomeScene.SendEventMessage();
    }

    private void OnHandleEventMessage(IEventMessage message)
    {
        if (message is BattleEventDefine.ScoreChange)
        {
            var msg = message as BattleEventDefine.ScoreChange;
            _scoreLabel.text = $"Score : {msg.CurrentScores}";
        }
        else if (message is BattleEventDefine.GameOver)
        {
            _overView.SetActive(true);
        }
    }
}