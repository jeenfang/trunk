using System.Collections.Generic;
using UnityEngine;

public static class LocalizationUtility
{
    // private static bool _init = false;
    // private static readonly Dictionary<string, LocalizationInfo> _dictionary = new Dictionary<string, LocalizationInfo>();
    //
    // private static void Init()
    // {
    //     if (_init)
    //         return;
    //     _dictionary.Clear();
    //     Dictionary<int, LocalizationInfo> dic = InfoMgr<LocalizationInfo>.Instance.InfoDic;
    //     foreach (var kv in dic)
    //     {
    //         if (!_dictionary.ContainsKey(kv.Value.key))
    //         {
    //             _dictionary.Add(kv.Value.key, kv.Value);
    //         }
    //         else
    //         {
    //             GameLog.Error($"重复的语言id:{kv.Key}, key：{kv.Value.key}");
    //         }
    //     }
    //     _init = true;
    // }
    //
    // public static string GetText(string key, params string[] parameters)
    // {
    //     Init();
    //     if (_dictionary.ContainsKey(key))
    //     {
    //         if (null != parameters && parameters.Length > 0)
    //         {
    //             return string.Format(_dictionary[key].cn, parameters);
    //         }
    //         return _dictionary[key].cn;
    //     }
    //     
    //     GameLog.Error($"语言表key未找到：{key}");
    //     return key;
    // }
    //
    // public static string GetText(int key, params string[] parameters)
    // {
    //    var info = InfoMgr<LocalizationInfo>.Instance.GetInfo(key);
    //    if (null != info)
    //    {
    //        return GetText(info.key, parameters);
    //    }
    //    return string.Empty;
    // }
}