using HotFix.Entity;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Contexts
{
    public class PlayerContext: BaseContext
    {
        private UnitPlayer _player;

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

        public void OnUpdate()
        {
            Player.OnUpdate();
        }
    }
}