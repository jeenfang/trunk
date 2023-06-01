using HotFix.Contexts;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Entity
{
    public abstract class Bullet : Entity
    {
        private Weapon _weapon;
        private Vector3 _origin;
        private Quaternion _quaternion;
        private Vector3 _target;
        private float _lifeTime = 1f; //子弹生命周期

        private float _bornTime = 0;
        public float LifeTime => _lifeTime;
        public float Speed { get; set; } = 20;
        public bool IsRun { get; set; }

        public abstract void Rotate();

        protected override void SpawnerFinished()
        {
            IsRun = true;
            _bornTime = 0;
            this.ThisT.SetPositionAndRotation(this._origin, this._quaternion);
        }

        public virtual void Move()
        {
            if (IsRun)
            {
                _bornTime += Time.deltaTime;
                IsRun = _bornTime < LifeTime;
                if (!IsRun)
                {
                    //Debug.LogError("到达目标，可以杀敌爆炸效果了");
                    GameContext.GetContext<PlayerContext>().RemoveBullet(this);
                }
            }
        }

        //绑定对应的武器
        public void BindWeapon(Weapon weapon)
        {
            this._weapon = weapon;
        }

        public void SetOrigin(Vector3 origin, Quaternion quaternion)
        {
            this._origin = origin;
            this._quaternion = quaternion;
        }

        public void SetTarget(Vector3 target)
        {
            this._target = target;
            this._lifeTime = Vector3.Distance(this._target, this._origin) / Speed;
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
            this._weapon = null;
        }
    }
}