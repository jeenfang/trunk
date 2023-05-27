using UnityEngine;

namespace HotFix.Entity
{
    public class UnitAI : Unit
    {
        public UnitAI(string prefabName) : base(prefabName)
        {
        }

        protected override void Move()
        {
            throw new System.NotImplementedException();
        }

        protected override void Rotate()
        {
            throw new System.NotImplementedException();
        }
    }
}