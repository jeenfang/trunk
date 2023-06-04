using System;
using HotFix.Contexts;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Entity
{
    public abstract class Unit : Entity
    {
        protected float MoveSpeed { set; get; } = 2;
        protected float RotateSpeed { set; get; } = 30;
        protected float AtkDistance { set; get; } = 10;
        
        protected abstract void Move();//移动
        protected abstract void Rotate();//转向
        
        public override void OnUpdate()
        {
            base.OnUpdate();
            Move();
            Rotate();
        }
    }
}