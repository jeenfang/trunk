using System;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Entity
{
    public abstract class Entity: IDisposable
    {
        private SpawnHandle SpaHandle { get; set; }
        protected Transform ThisT { get; set; }
        protected abstract void SpawnerFinished(Transform t);

        protected Entity(string prefabName)
        {
            var spawnAsync = UniPooling.CreateSpawner("DefaultPackage").SpawnAsync(prefabName);
            spawnAsync.Completed += (data) =>
            {
                if (data is SpawnHandle spawnHandle)
                {
                    Spawner(spawnHandle);
                }
            };
        }
        
        protected virtual void Spawner(SpawnHandle handle)
        {
            if (null == handle) return;
            this.SpaHandle = handle;
            this.ThisT = handle.GameObj.transform;
            SpawnerFinished(ThisT);
        }
        
        public virtual void Dispose()
        {
            ThisT = null;
            if (null != SpaHandle)
            {
                SpaHandle.Restore();
                SpaHandle = null;
            }
        }
    }
}