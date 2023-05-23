using HotFix.Player;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Contexts
{
    public class PlayerContext: BaseContext
    {
        private readonly UnitPlayer _player = new UnitPlayer();

        public void InitPlayer(SpawnHandle playerHandle)
        {
            _player.Spawner(playerHandle);
        }

        public void UpdateRotate()
        {
            
        }

        public void UpdateDir(Vector2 dir)
        {
            _player.SetDir(dir);
        }

        public void Move()
        {
            _player.Move();
        }
    }
}