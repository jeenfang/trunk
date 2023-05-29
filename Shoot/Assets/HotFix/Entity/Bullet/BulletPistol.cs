using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Entity
{
    public class BulletPistol : Bullet
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
            //throw new System.NotImplementedException();
        }

        public override void Dispose()
        {
            base.Dispose();
            UniObjectPool<BulletPistol>.Release(this);
        }
    }
}