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

        public void UpdateTarget(Vector2 input)
        {
            _player.SetTarget(input);
        }

        public void UpdateDir(Vector2 dir)
        {
            _player.SetDir(dir);
        }

        public void OnUpdate()
        {
            _player.Move();
            _player.Rotate();
        }
    }
}