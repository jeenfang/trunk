using System;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Entity
{
    public abstract class Entity: IDisposable
    {
        private SpawnHandle SpaHandle { get; set; }
        public Transform ThisT { get; set; }
        public bool IsLoadFinised => null != ThisT;
        protected abstract void SpawnerFinished();

        protected Entity(string prefabName)
        {
            Spawner(prefabName);
        }

        public virtual void Spawner(string prefabName)
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
        
        private void Spawner(SpawnHandle handle)
        {
            if (null == handle) return;
            this.SpaHandle = handle;
            this.ThisT = handle.GameObj.transform;
            SpawnerFinished();
        }
        
        public virtual void Dispose()
        {
            if (null != ThisT)
            {
                ThisT.SetParent(null);
                ThisT = null;
            }
            
            if (null != SpaHandle)
            {
                SpaHandle.Restore();
                SpaHandle = null;
            }
        }
    }
}