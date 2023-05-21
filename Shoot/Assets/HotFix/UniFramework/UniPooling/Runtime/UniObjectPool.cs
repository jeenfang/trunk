using System;
using System.Collections.Generic;
using System.Runtime.Remoting.Messaging;
using UnityEngine.Pool;
using UnityEngine.UI;

namespace UniFramework.Pooling
{
    public static class UniObjectPool<T> where T : class, new()
    {
        private static readonly Dictionary<Type, ObjectPool<T>> _dictionary = new Dictionary<Type, ObjectPool<T>>();

        private static ObjectPool<T> GetTPool()
        {
            var typo = typeof(T);
            return _dictionary.TryGetValue(typo, out var objectPool) ? objectPool : null;
        }

        public static ObjectPool<T> CreateObjectPool(Func<T> createFunc,
            Action<T> actionOnGet = null,
            Action<T> actionOnRelease = null,
            Action<T> actionOnDestroy = null)
        {
            var objectPool = new ObjectPool<T>(createFunc, actionOnGet, actionOnRelease, actionOnDestroy);
            var typo = typeof(T);
            _dictionary.Add(typo, objectPool);
            return objectPool;
        }

        public static T Get()
        {
            var objectPool = GetTPool() ?? CreateObjectPool(() => new T());
            return objectPool.Get();
        }

        public static void Release(T element)
        {
            if (null == element) return;
            var objPool = GetTPool();
            objPool?.Release(element);
        }
    }
}