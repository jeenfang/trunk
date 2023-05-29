using HotFix.Contexts;
using UniFramework.Pooling;
using UnityEngine;
using Time = Codice.Client.Common.Time;

namespace HotFix.Entity
{
    public class WeaponPistol : Weapon
    {
        // public WeaponPistol(string mWeaponName, UnitPlayer owner) : base(mWeaponName, owner)
        // {
        // }

        public override void OnUpdate()
        {
            base.OnUpdate();
        }

        private void Shotting()
        {
            var temp = UniObjectPool<BulletPistol>.Get();
            if (null != temp)
            {
                temp.BindWeapon(this);
                temp.SetOrigin(this.FirePoints[0].position,this.FirePoints[0].rotation);
                temp.SetTarget(GameContext.GetContext<PlayerContext>().Player.TargetPosition);
                temp.Spawner("BulletPistol");
                GameContext.GetContext<PlayerContext>().AddBullet(temp);
            }
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
    }
}