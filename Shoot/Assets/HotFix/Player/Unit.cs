using System;
using HotFix.Contexts;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Player
{
    public class Unit : IDisposable
    {
        private SpawnHandle _handle;
        private Transform _transform;
        private Vector3 _dir;
        private Vector3 _rotation;
        private bool _isRun = false;
        private bool _isRotate = false;

        public Transform thisT
        {
            get => _transform;
        }

        public float MoveSpeed { set; get; } = 2;
        public float RotateSpeed { set; get; } = 10;

        public void Spawner(SpawnHandle handle)
        {
            if (null != handle)
            {
                this._handle = handle;
                this._transform = handle.GameObj.transform;
                thisT.SetParent(GameContext.GetContext<CameraContext>().RootPlayer);
                thisT.localPosition = Vector3.zero;
                GameContext.GetContext<CameraContext>().SetFollowTarget(thisT);
            }
        }

        public void SetDir(Vector2 direction)
        {
            _isRun = direction != Vector2.zero;
            this._dir.x = direction.x;
            this._dir.z = direction.y;
            Debug.LogError("isRun:" + _isRun);
        }

        public void SetTarget(Vector2 rotation)
        {
            Debug.LogError(rotation + " " + rotation.sqrMagnitude);
            _isRotate = rotation.sqrMagnitude > 0;
            if (_isRotate)
            {
                _rotation = new Vector3(rotation.x, 0, rotation.y);
            }
        }

        public void Move()
        {
            if (null != thisT && _isRun)
            {
                thisT.Translate(_dir * MoveSpeed * Time.deltaTime, Space.World);
            }
        }

        public void Rotate()
        {
            if (null != thisT && _isRotate)
            {
                thisT.rotation = Quaternion.Slerp(thisT.rotation, Quaternion.LookRotation(_rotation),
                    RotateSpeed * Time.deltaTime);
                GameObject.CreatePrimitive(PrimitiveType.Capsule).transform.position = new Vector3(_rotation.x *10, thisT.position.y, _rotation.y*10) + thisT.position;
            }
        }

        public void Dispose()
        {
            GameContext.GetContext<CameraContext>().SetFollowTarget(null);
            _isRotate = false;
            _isRun = false;
            _transform = null;
            if (null != _handle)
            {
                _handle.Restore();
                _handle = null;
            }
        }
    }
}