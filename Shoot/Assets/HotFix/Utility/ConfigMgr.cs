using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;
using UnityEngine;


// 管理对象接口定义
public interface IInfo
{
    // 加载数据
    void Load(BinaryReader reader);

    // 获取Key
    int GetKey();

    string ToString();
}

// 数据对象管理器
public class ConfigMgr<T> where T : IInfo, new()
{
    private static ConfigMgr<T> _instance;
    private Dictionary<int, T> _dic;
    
    public static ConfigMgr<T> Instance
    {
        get
        {
            if (null == _instance)
            {
                _instance = new ConfigMgr<T>();
            }

            return _instance;
        }

        private set { _instance = value; }
    }

    public Dictionary<int, T> InfoDic
    {
        get
        {
            if (null == _dic)
            {
                string location = $"{typeof(T).Name.ToLower()}";
                Init(location);
            }

            return _dic;
        }
        private set { _dic = value; }
    }

    public T GetInfo(int key)
    {
        if (null == _dic)
        {
            string location = $"{typeof(T).Name.ToLower()}";
            Init(location);
        }

        if (_dic != null && _dic.ContainsKey(key))
            return _dic[key];

        GameLog.Log($"{typeof(T).Name} id not found '{key}'");
        return default(T);
    }

    public bool Init(string file)
    {
        GameLog.Log($"===========开始加载配置文件:{file}");
        Clear();

        if (_dic == null)
        {
            _dic = new Dictionary<int, T>();
        }

        BinaryReader reader = LoadFile(file);
        if (reader == null)
        {
            Console.WriteLine("ReadFile Failed.");
            return false;
        }

        // 读取对象数量
        int count = reader.ReadInt32();
        if (count == 0)
        {
            // 空
            reader.Close();
            return true;
        }

        for (uint i = 0; i < count; ++i)
        {
            T t = new T();
            t.Load(reader);
            int key = t.GetKey();
            if (_dic.ContainsKey(key))
            {
                GameLog.Error($"{file}: Key({key}) Conflicted.");
                reader.Close();
                return false;
            }

            _dic[key] = t;
        }

        reader.Close();

        return true;
    }


    private BinaryReader LoadFile(string file)
    {
        try
        {
            //资源同步加载text文件，调用第三方库
            var assetOperation = YooAsset.YooAssets.LoadAssetSync<TextAsset>(file);
            var txt = assetOperation.AssetObject as TextAsset;
            if (txt != null)
            {
                MemoryStream memoryStream = new MemoryStream(txt.bytes);
                BinaryReader reader = new BinaryReader(memoryStream, System.Text.Encoding.UTF8);
                return reader;
            }

            GameLog.Error($"file文件加载失败！{file}～");
            return null;
        }
        catch (System.Exception ex)
        {
            GameLog.Error($"文件加载失败{file}:{ex.Message}");
            return null;
        }
    }

    private void Clear()
    {
        if (_dic != null)
        {
            _dic.Clear();
        }
    }
}