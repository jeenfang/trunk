using System;
using System.Collections.Generic;
using System.Transactions;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Entity
{
    public abstract class Weapon : Entity
    {
        //发射点(每次能发射的子弹数量，也可以是字典初始点)
        public List<Transform> m_FirePoint;
        public string m_WeaponName; //武器
        public string m_FireEffectName; //开火特效

        public float m_FireDistance;
        public float m_FireCD;
        public string m_SoundName;

        protected Weapon(string mWeaponName):base(mWeaponName)
        {
        }

        public abstract void Fire();
    }
}