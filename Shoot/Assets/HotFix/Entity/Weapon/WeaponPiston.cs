using UnityEngine;
using Time = Codice.Client.Common.Time;

namespace HotFix.Entity
{
    public class WeaponPiston : Weapon
    {
        public WeaponPiston(string mWeaponName, UnitPlayer owner) : base(mWeaponName, owner)
        {
        }

        public override void OnUpdate()
        {
            if (FireTime > 0)
            {
                FireTime -= UnityEngine.Time.deltaTime;
            }
            
            if (FireOpen)
            {
                if (FireTime <= 0)
                {
                    FireTime = FireCd;
                    Shot();
                }
            }
        }

        public void Shot()
        {
            Debug.LogError("发射子弹。。。。。。。。。。");
        }

        public override void Fire(bool open)
        {
            FireOpen = open;
        }
    }
}