﻿using HotFix.Contexts;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Player
{
    public class UnitPlayer : Unit
    {
        private Vector2 _dir;
        private Vector2 _rotation;
        private bool _isRun = false;
        private bool _isRotate = false;
        private float _temp = 0;
        private Camera _camera;
        private float _atkMinDistance = 0.2f;

        private Camera MainCamera
        {
            get { return _camera ??= GameContext.GetContext<CameraContext>().MainCamera; }
        }

        private Vector3 TargetPosition
        {
            get
            {
                if (null != ThisT)
                {
                    _temp = _rotation.sqrMagnitude;
                    _temp = _temp < _atkMinDistance ? _atkMinDistance : _temp;
                    return ThisT.forward * ShotDistance * _temp + ThisT.position;
                }

                return Vector3.zero;
            }
        }
        
        public override void Spawner(SpawnHandle handle)
        {
            base.Spawner(handle);
            if (null != ThisT)
            {
                ThisT.SetParent(GameContext.GetContext<CameraContext>().RootPlayer);
                ThisT.localPosition = Vector3.zero;
                GameContext.GetContext<CameraContext>().SetFollowTarget(ThisT);
            }
        }

        //移动方向
        public void SetPosition(Vector2 direction)
        {
            _isRun = direction != Vector2.zero;
            this._dir = direction;
        }

        //转向
        public void SetRotation(Vector2 input)
        {
            var sqr = input.sqrMagnitude;
            _isRotate = sqr > 0;
            if (_isRotate)
            {
                _rotation = input;
            }
        }

        protected override void Move()
        {
            if (null != ThisT && _isRun)
            {
                ThisT.Translate(new Vector3(_dir.x, 0, _dir.y) * (MoveSpeed * Time.deltaTime), Space.World);
            }
        }

        protected override void Rotate()
        {
            if (null != ThisT && _isRotate)
            {
                var rotation = new Vector3(_rotation.x, 0, _rotation.y);
                ThisT.rotation = Quaternion.Lerp(ThisT.rotation, Quaternion.LookRotation(rotation),
                    RotateSpeed * Time.deltaTime);
                // GameObject.CreatePrimitive(PrimitiveType.Capsule).transform.position =
                //     ThisT.forward * 10 * _rotation.sqrMagnitude + ThisT.position;
            }
        }
        
        public Vector2 TargetWorldToScreenPoint()
        {
            return RectTransformUtility.WorldToScreenPoint(MainCamera, TargetPosition);
        }

        public override void Dispose()
        {
            base.Dispose();
            _isRotate = false;
            _isRun = false;
            GameContext.GetContext<CameraContext>().SetFollowTarget(null);
        }
    }
}