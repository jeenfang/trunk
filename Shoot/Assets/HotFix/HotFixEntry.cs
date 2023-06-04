using UniFramework.Audio;
using UnityEngine;
using UniFramework.Singleton;

public static class HotFixEntry
{
    public static void Run()
    {
        Debug.Log("Hello, HybridCLR");
        // 初始化音效
        UniAudio.Initalize();
        // 创建游戏管理器
        UniSingleton.CreateSingleton<GameManager>();
        // 开启游戏流程
        GameManager.Instance.Run();
    }
}