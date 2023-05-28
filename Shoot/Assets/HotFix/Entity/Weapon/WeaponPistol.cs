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
                temp.Spawner("BulletPistol");
                temp.BindWeapon(this);
                Bullets.Add(temp);
            }
        }

        public override void Run()
        {
            base.Run();
            Debug.LogError("发射子弹。。。。。。。。。。");
            Shotting();
        }

        public override void Fire(bool open)
        {
            base.Fire(open);
        }
    }
}