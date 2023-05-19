using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Reflection;
using HybridCLR;
using UnityEngine;

// 运行菜单 HybridCLR/Generate/All 一键执行必要的生成操作
// 将HybridCLRData/HotUpdateDlls下的热更新dll添加到项目的热更新资源管理系统
// 将HybridCLRData/AssembliesPostIl2CppStrip下的初始元数据 dll添加到项目的热更新资源管理系统
// 根据你项目原来的打包流程打包
public static partial class AppEntry
{
    private static Assembly _hotUpdateAss;
    public static byte[] ReadBytesFromStreamingAssets(string file)
    {
        //BetterStreamingAssets 在android平台可以直接读取
        string path = $"{Application.streamingAssetsPath}/{file}";
        if (BetterStreamingAssets.FileExists(path))
        {
            return BetterStreamingAssets.ReadAllBytes(path);
        }
        return null;
    }

    public static void StartGame()
    {
        LoadMetadataForAOTAssemblies();
#if UNITY_EDITOR
        _hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "HotFix");
#else
        _hotUpdateAss = Assembly.Load(ReadBytesFromStreamingAssets("HotFix.dll.bytes"));
#endif
        Type entryType = _hotUpdateAss.GetType("HotFixEntry");
        entryType.GetMethod("Run")?.Invoke(null, null);
    }
    

    /// <summary>
    /// 为aot assembly加载原始metadata， 这个代码放aot或者热更新都行。
    /// 一旦加载后，如果AOT泛型函数对应native实现不存在，则自动替换为解释模式执行
    /// </summary>
    private static void LoadMetadataForAOTAssemblies()
    {
        List<string> aotMetaAssemblyFiles = new List<string>()
        {
            // UniFramework.dll
            // UnityEngine.CoreModule.dll
            // YooAsset.dll
            // mscorlib.dll
            "UniFramework.dll",
            "UnityEngine.CoreModule.dll",
            "YooAsset.dll",
            "mscorlib.dll",
        };
        
        // 注意，补充元数据是给AOT dll补充元数据，而不是给热更新dll补充元数据。
        // 热更新dll不缺元数据，不需要补充，如果调用LoadMetadataForAOTAssembly会返回错误
        HomologousImageMode mode = HomologousImageMode.SuperSet;
        foreach (var aotDllName in aotMetaAssemblyFiles)
        {
            byte[] dllBytes = ReadBytesFromStreamingAssets(aotDllName + ".bytes");
            // 加载assembly对应的dll，会自动为它hook。一旦aot泛型函数的native函数不存在，用解释器版本代码
            LoadImageErrorCode err = RuntimeApi.LoadMetadataForAOTAssembly(dllBytes, mode);
            Debug.Log($"LoadMetadataForAOTAssembly:{aotDllName}. mode:{mode} ret:{err}");
        }
    }
}

