using HotFix.Contexts;
using UniFramework.Pooling;
using UnityEngine;
using Time = Codice.Client.Common.Time;

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
        
        protected override void Run()
        {
            Debug.LogError("发射子弹。。。。。。。。。。");
            Shotting();
        }

        public override void Fire(bool open)
        {
            base.Fire(open);
        }

        private void Shotting()
        {
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