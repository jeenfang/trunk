using HotFix.Contexts;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Entity
{
    public class WeaponPistol : Weapon
    {
        public override void Init()
        {
            this.WeaponType = EWeapon.WeaponPistol;
            this.WeaponName = "WeaponPistol";
        }

        public override void OnUpdate()
        {
            base.OnUpdate();
        }
        
        public override void Fire(bool open)
        {
            base.Fire(open);
        }

        protected override void Shotting()
        {
            base.Shotting();
            for (int i = 0; i < this.FirePoints.Count; i++)
            {
                if(null == this.FirePoints[i])
                    continue;
                var temp = UniObjectPool<BulletPistol>.Get();
                if (null != temp)
                {
                    temp.BindWeapon(this);
                    temp.SetOrigin(this.FirePoints[i].position,this.FirePoints[i].rotation);
                    temp.SetTarget(GameContext.GetContext<PlayerContext>().Player.TargetPosition);
                    temp.Spawner("BulletPistol");
                    GameContext.GetContext<PlayerContext>().AddBullet(temp);
                } 
            }
        }


    }
}