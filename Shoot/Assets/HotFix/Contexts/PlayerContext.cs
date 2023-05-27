using HotFix.Entity;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Contexts
{
    public class PlayerContext: BaseContext
    {
        private UnitPlayer _player;
        public UnitPlayer Player => _player ??= new UnitPlayer("player");

        public void OnUpdate()
        {
            Player.OnUpdate();
        }
    }
}