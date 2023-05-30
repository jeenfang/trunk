using System.Collections.Generic;
using HotFix.Entity;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Contexts
{
    public class PlayerContext : BaseContext
    {
        private UnitPlayer _player;
        private List<Bullet> _bullets;

        public UnitPlayer Player
        {
            get
            {
                if (null == _player)
                {
                    // => _player ??= new UnitPlayer("player");
                    _player = UniObjectPool<UnitPlayer>.Get();
                    //先放着创建player模型
                    _player.Spawner("player");
                }

                return _player;
            }
        }

        public List<Bullet> Bullets => _bullets ??= new List<Bullet>();

        public void AddBullet(Bullet bullet)
        {
            Bullets.Add(bullet);
        }

        public void RemoveBullet(Bullet bullet)
        {
            if (null != bullet)
            {
                Bullets.Remove(bullet);
                bullet.Dispose();
            }
        }

        public void OnUpdate()
        {
            Player.OnUpdate();
            for (int i = 0; i < Bullets.Count; i++)
            {
                Bullets[i].OnUpdate();
            }
        }
    }
}