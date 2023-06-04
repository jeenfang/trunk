using System;
using System.Collections.Generic;
using System.Transactions;
using UniFramework.Audio;
using UniFramework.Pooling;
using UnityEngine;
using Object = UnityEngine.Object;

namespace HotFix.Entity
{
    public abstract class Weapon : Entity
    {
        private float _timeSinceFire; //上次发射时间
        public byte _numberBarrels = 1; //枪管数量

        public EWeapon WeaponType { get; set; }
        public UnitPlayer UnitOwner { get; set; }

        //发射点(每次能发射的子弹数量，也可以是字典初始点)
        private List<Transform> _firePoints;
        protected float FireCd { get; set; } = 0.1f; //间隔


        //参数从配置表中获取
        public string WeaponName { get; set; } //武器
        public string FireEffectName { get; set; } //开火特效
        public float FireDistance { get; set; } //攻击距离
        public string AudioName { get; set; } //声音
        public bool FireOpen { get; set; } = false;
        public List<Transform> FirePoints => _firePoints ??= new List<Transform>();

        public abstract void Init();

        public void BindPlayer(UnitPlayer unit)
        {
            this.UnitOwner = unit;
        }

        protected override void SpawnerFinished()
        {
            BindBarrelPoint();
            this.UnitOwner?.BindWeapon(this);
        }

        private void BindBarrelPoint()
        {
            if (null != ThisT)
            {
                for (int i = 1; i <= _numberBarrels; i++)
                {
                    FirePoints.Add(this.ThisT.Find($"FirePoint_{i}"));
                }
            }
        }

        public void Unload()
        {
            this.Dispose();
            UnitOwner?.UnloadWeapon(this);
            UnitOwner = null;
        }

        public virtual void Fire(bool open)
        {
            FireOpen = open;
        }

        protected virtual void Shotting()
        {
            UniAudio.PlaySound2D("LaserShoot");
        }

        public override void OnUpdate()
        {
            base.OnUpdate();

            if (_timeSinceFire > 0)
            {
                _timeSinceFire -= UnityEngine.Time.deltaTime;
            }

            if (FireOpen)
            {
                if (_timeSinceFire <= 0)
                {
                    _timeSinceFire = FireCd;
                    Shotting();
                }
            }
        }

        public override void Dispose()
        {
            base.Dispose();
        }
    }
}