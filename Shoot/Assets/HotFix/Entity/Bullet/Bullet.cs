using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Entity
{
    public abstract class Bullet : Entity
    {
        private Weapon _weapon;

        protected override void SpawnerFinished()
        {
            if (_weapon?.FirePoints.Count > 0)
            {
                var point = _weapon.FirePoints[0];
                if (point != null)
                {
                    this.ThisT.SetPositionAndRotation(point.position, point.rotation);
                }
            }
        }

        public abstract void Move();

        public abstract void Rotate();

        //绑定对应的武器
        public void BindWeapon(Weapon weapon)
        {
            this._weapon = weapon;
        }

        public override void OnUpdate()
        {
            base.OnUpdate();
            Move();
            Rotate();
        }

        public override void Dispose()
        {
            base.Dispose();
        }
    }
}