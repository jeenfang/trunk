using HotFix.Contexts;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Entity
{
    public class WeaponLaser : Weapon
    {
        public override void Init()
        {
            this.WeaponType = EWeapon.WeaponLaser;
            this.WeaponName = "WeaponLaser";
            this.FireCd = 0.5f;
        }

        public override void OnUpdate()
        {
            base.OnUpdate();
        }
        
        public override void Fire(bool open)
        {
            base.Fire(open);
        }

        protected  override void Shotting()
        {
            base.Shotting();
            for (int i = 0; i < this.FirePoints.Count; i++)
            {
                if(null == this.FirePoints[i])
                    continue;
                var temp = UniObjectPool<BulletLaser>.Get();
                if (null != temp)
                {
                    temp.BindWeapon(this);
                    temp.SetOrigin(this.FirePoints[i].position,this.FirePoints[i].rotation);
                    temp.SetTarget(GameContext.GetContext<PlayerContext>().Player.TargetPosition);
                    temp.Spawner("BulletLaser");
                    temp.Speed = 300;
                    GameContext.GetContext<PlayerContext>().AddBullet(temp);
                } 
            }
        }


    }
}