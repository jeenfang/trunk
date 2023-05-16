using UnityEngine;
using UniFramework.Singleton;

public static class Main
{
    public static void Run()
    {
        Debug.Log("Hello, HybridCLR~~~");
        // // 创建游戏管理器
         UniSingleton.CreateSingleton<GameManager>();
        //
        // // 开启游戏流程
         GameManager.Instance.Run();
    }
}