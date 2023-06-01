using HotFix.Contexts;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Entity
{
    public class BulletMissle : Bullet
    {
        public override void Move()
        {
            base.Move();
            if (IsRun)
            {
                if (null != ThisT)
                {
                    ThisT.Translate(Vector3.forward * Time.deltaTime * Speed);
                }
            }
        }

        public override void Rotate()
        {
            if (null != ThisT)
            {
                var forward = GameContext.GetContext<PlayerContext>().Player.TargetPosition - ThisT.position;
                ThisT.forward = Vector3.Lerp(ThisT.forward, forward, Time.deltaTime);
            }
        }

        public override void Dispose()
        {
            base.Dispose();
            UniObjectPool<BulletMissle>.Release(this);
        }
    }
}