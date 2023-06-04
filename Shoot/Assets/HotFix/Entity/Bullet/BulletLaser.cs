using System;
using HotFix.Contexts;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Entity
{
    public class BulletLaser : Bullet
    {
        protected override void SpawnerFinished()
        {
            base.SpawnerFinished();
            if (null != ThisT)
            {
                var line = ThisT.GetComponentInChildren<LineRenderer>();
                if (line != null)
                {
                    line.SetPosition(0, ThisT.position);
                    line.SetPosition(1, GameContext.GetContext<PlayerContext>().Player.TargetPosition);
                }
            }
        }

        // public override void Move()
        // {
        //     base.Move();
        //     if (IsRun)
        //     {
        //         if (null != ThisT)
        //         {
        //             ThisT.Translate(Vector3.forward * Time.deltaTime * Speed);
        //         }
        //     }
        // }

        public override void Rotate()
        {
        }

        public override void Dispose()
        {
            base.Dispose();
            UniObjectPool<BulletLaser>.Release(this);
        }
    }
}