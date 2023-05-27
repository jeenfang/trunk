using System;
using System.Collections.Generic;
using System.Transactions;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Entity
{
    public abstract class Weapon : Entity
    {
        public EWeapon WeaponType { get; set; }
        public UnitPlayer UnitOwner { get; set; }

        //发射点(每次能发射的子弹数量，也可以是字典初始点)
        private List<Transform> _firePoints;
        public List<Transform> FirePoints => _firePoints ??= new List<Transform>();
        //参数从配置表中获取
        public string WeaponName { get; set; } //武器
        public string FireEffectName{ get; set; } //开火特效
        public float FireDistance{ get; set; } //攻击距离
        public float FireCd { get; set; } = 0.1f; //间隔
        public string AudioName{ get; set; } //声音
        public float FireTime { get; set; }
        public bool FireOpen { get; set; } = false;

        //武器绑定的角色
        protected Weapon(string mWeaponName,UnitPlayer mUnit):base(mWeaponName)
        {
            this.UnitOwner = mUnit;
        }
        
        protected override void SpawnerFinished()
        {
            BindFirePoint();
            this.UnitOwner?.BindWeapon(this);
        }

        //根据配置去找firepoint,不同武器同时发射子弹数量不一定
        private void BindFirePoint()
        {
            FirePoints.Add(this.ThisT.Find("firePoint"));
        }

        public void Unload()
        {
            this.Dispose();
            UnitOwner?.UnloadWeapon(this);
            UnitOwner = null;
        }

        public abstract void Fire(bool open);
        public abstract void OnUpdate();
    }
}