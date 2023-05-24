using System;
using HotFix.Contexts;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Player
{
    public abstract class Unit : IDisposable
    {
        protected SpawnHandle SpaHandle;
        protected Transform ThisT { get; set; }
        protected float MoveSpeed { set; get; } = 2;
        protected float RotateSpeed { set; get; } = 10;
        protected float ShotDistance { set; get; } = 10;

        protected abstract void Move();
        protected abstract void Rotate();
        public virtual void OnUpdate()
        {
            Move();
            Rotate();
        }

        public virtual void Spawner(SpawnHandle handle)
        {
            if (null == handle) return;
            this.SpaHandle = handle;
            this.ThisT = handle.GameObj.transform;
        }

        public virtual void Dispose()
        {
            ThisT = null;
            if (null != SpaHandle)
            {
                SpaHandle.Restore();
                SpaHandle = null;
            }
        }
    }
}