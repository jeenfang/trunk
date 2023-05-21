using System;
using UnityEngine;

namespace HotFix.Player
{
    public class Unit
    {
        private float _moveSpeed;
        private float _rotateSpeed;

        public Transform thisT { get; set; }

        public float moveSpeed
        {
            set => _moveSpeed = value;
            get => _moveSpeed;
        }

        public void Spawner(string prefabName)
        {
        }

        public void Move(Vector2 direction)
        {
            direction = direction.normalized;
            thisT.Translate(direction * 1 * Time.deltaTime, Space.World);
        }
    }
}