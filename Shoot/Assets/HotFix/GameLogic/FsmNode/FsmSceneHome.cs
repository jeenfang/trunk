using System.Collections;
using System.Collections.Generic;
using HotFix.Utility;
using UnityEngine;
using UniFramework.Machine;
using UniFramework.Window;
using UniFramework.Singleton;
using UnityEngine.SceneManagement;
using YooAsset;

internal class FsmSceneHome : IStateNode
{
	private StateMachine _machine;

	void IStateNode.OnCreate(StateMachine machine)
	{
		_machine = machine;
	}
	void IStateNode.OnEnter()
	{
		UniSingleton.StartCoroutine(Prepare());
	}
	void IStateNode.OnUpdate()
	{
	}
	void IStateNode.OnExit()
	{
		UniWindow.CloseWindow<UIHomeWindow>();
	}

	private IEnumerator Prepare()
	{
		yield return YooAssets.LoadSceneAsync(GameUtility.SceneNameHome);	
		yield return UniWindow.OpenWindowAsync<UIHomeWindow>(GameUtility.UINameHome);

		// 释放资源
		var package = YooAssets.GetPackage("DefaultPackage");
		package.UnloadUnusedAssets();
	}
}