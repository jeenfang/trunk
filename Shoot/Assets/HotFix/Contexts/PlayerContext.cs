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

        public void UpdateRotation(Vector2 input)
        {
            _player.SetRotation(input);
        }

        public void UpdatePosition(Vector2 dir)
        {
            _player.SetPosition(dir);
        }

        public void OnUpdate()
        {
            _player.OnUpdate();
        }

        public Vector2 GetPlayerTargetScreenPoint()
        {
            return _player.TargetWorldToScreenPoint();
        }
    }
}