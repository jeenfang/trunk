using System;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Entity
{
    public abstract class Entity: IDisposable
    {
        private SpawnHandle SpaHandle { get; set; }
        public Transform ThisT { get;private set; }
        protected abstract void SpawnerFinished();
        public virtual void OnUpdate(){}
        
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
            if (handle.GameObj)
            {
                this.ThisT = handle.GameObj.transform;
                SpawnerFinished();
            }
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