using System;
using System.Collections.Generic;
using UnityEditor.SceneTemplate;

namespace HotFix.Contexts
{
    public static class GameContext
    {
        private static readonly Dictionary<Type, BaseContext> _dicContext = new Dictionary<Type, BaseContext>();
        public static T GetContext<T>() where  T : BaseContext,new()
        {
            var type = typeof(T);
            if (!_dicContext.TryGetValue(type,out var result))
            {
                result = new T();
                _dicContext.Add(type, result);
            }
            return result as T;
        }
    }
}