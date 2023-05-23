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
        private float _moveSpeed = 2;
        private float _rotateSpeed;
        private Vector3 _dir;
        private bool _isRun = false;

        public Transform thisT
        {
            get => _transform;
        }

        public float moveSpeed
        {
            set => _moveSpeed = value;
            get => _moveSpeed;
        }

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
            Debug.LogError("isRun:"+_isRun);
        }

        public void SetTarget(Vector2 rotation)
        {
            
        }

        public void Move()
        {
            if (null != thisT && _isRun)
            {
                thisT.Translate(_dir * moveSpeed * Time.deltaTime, Space.World);
            }
        }

        public void Dispose()
        {
            if (null != _handle)
            {
                _handle.Restore();
                _transform = null;
                GameContext.GetContext<CameraContext>().SetFollowTarget(null);
            }
        }
    }
}