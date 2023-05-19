public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	// UniFramework.dll
	// UnityEngine.CoreModule.dll
	// YooAsset.dll
	// mscorlib.dll
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// System.Action<UnityEngine.Vector4>
	// System.Action<object>
	// System.Action<float>
	// System.Action<UnityEngine.Vector2>
	// System.Action<UnityEngine.Vector3>
	// System.Action<UnityEngine.Quaternion>
	// System.Action<UnityEngine.Color>
	// System.Action<System.Net.Sockets.SocketError>
	// System.Collections.Concurrent.ConcurrentQueue<object>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.List<UniFramework.Window.UniWindow.WindowInfo>
	// System.Collections.Generic.List<float>
	// System.Collections.Generic.List<double>
	// System.Collections.Generic.List<long>
	// System.Collections.Generic.List<int>
	// System.Collections.Generic.List.Enumerator<object>
	// System.Collections.Generic.Queue<object>
	// System.Collections.Generic.Queue.Enumerator<object>
	// System.EventHandler<object>
	// System.Func<byte>
	// System.Predicate<object>
	// UniFramework.Singleton.SingletonInstance<object>
	// }}

	public void RefMethods()
	{
		// object[] System.Array.Empty<object>()
		// System.Void UniFramework.Event.EventGroup.AddListener<object>(System.Action<UniFramework.Event.IEventMessage>)
		// System.Void UniFramework.Machine.StateMachine.AddNode<object>()
		// System.Void UniFramework.Machine.StateMachine.ChangeState<object>()
		// System.Void UniFramework.Machine.StateMachine.Run<object>()
		// object UniFramework.Singleton.UniSingleton.CreateSingleton<object>(int)
		// object UnityEngine.Component.GetComponent<object>()
		// object UnityEngine.GameObject.AddComponent<object>()
		// object UnityEngine.GameObject.GetComponent<object>()
		// object UnityEngine.GameObject.GetComponentInParent<object>()
		// object[] UnityEngine.GameObject.GetComponentsInChildren<object>(bool)
		// int UnityEngine.Playables.PlayableExtensions.GetInputCount<UnityEngine.Animations.AnimationMixerPlayable>(UnityEngine.Animations.AnimationMixerPlayable)
		// int UnityEngine.Playables.PlayableExtensions.GetInputCount<UnityEngine.Animations.AnimationLayerMixerPlayable>(UnityEngine.Animations.AnimationLayerMixerPlayable)
		// float UnityEngine.Playables.PlayableExtensions.GetInputWeight<UnityEngine.Playables.Playable>(UnityEngine.Playables.Playable,int)
		// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableExtensions.GetPlayState<UnityEngine.Playables.Playable>(UnityEngine.Playables.Playable)
		// double UnityEngine.Playables.PlayableExtensions.GetSpeed<UnityEngine.Playables.Playable>(UnityEngine.Playables.Playable)
		// double UnityEngine.Playables.PlayableExtensions.GetTime<UnityEngine.Playables.Playable>(UnityEngine.Playables.Playable)
		// bool UnityEngine.Playables.PlayableExtensions.IsDone<UnityEngine.Playables.Playable>(UnityEngine.Playables.Playable)
		// bool UnityEngine.Playables.PlayableExtensions.IsValid<UnityEngine.Playables.Playable>(UnityEngine.Playables.Playable)
		// System.Void UnityEngine.Playables.PlayableExtensions.Pause<UnityEngine.Playables.Playable>(UnityEngine.Playables.Playable)
		// System.Void UnityEngine.Playables.PlayableExtensions.Play<UnityEngine.Playables.Playable>(UnityEngine.Playables.Playable)
		// System.Void UnityEngine.Playables.PlayableExtensions.SetDone<UnityEngine.Playables.Playable>(UnityEngine.Playables.Playable,bool)
		// System.Void UnityEngine.Playables.PlayableExtensions.SetDuration<UnityEngine.Animations.AnimationClipPlayable>(UnityEngine.Animations.AnimationClipPlayable,double)
		// System.Void UnityEngine.Playables.PlayableExtensions.SetInputCount<UnityEngine.Animations.AnimationMixerPlayable>(UnityEngine.Animations.AnimationMixerPlayable,int)
		// System.Void UnityEngine.Playables.PlayableExtensions.SetInputCount<UnityEngine.Animations.AnimationLayerMixerPlayable>(UnityEngine.Animations.AnimationLayerMixerPlayable,int)
		// System.Void UnityEngine.Playables.PlayableExtensions.SetInputWeight<UnityEngine.Playables.Playable>(UnityEngine.Playables.Playable,int,float)
		// System.Void UnityEngine.Playables.PlayableExtensions.SetSpeed<UnityEngine.Playables.Playable>(UnityEngine.Playables.Playable,double)
		// System.Void UnityEngine.Playables.PlayableExtensions.SetTime<UnityEngine.Playables.Playable>(UnityEngine.Playables.Playable,double)
		// bool UnityEngine.Playables.PlayableGraph.Connect<UnityEngine.Playables.Playable,UnityEngine.Playables.Playable>(UnityEngine.Playables.Playable,int,UnityEngine.Playables.Playable,int)
		// System.Void UnityEngine.Playables.PlayableGraph.DestroySubgraph<UnityEngine.Playables.Playable>(UnityEngine.Playables.Playable)
		// System.Void UnityEngine.Playables.PlayableGraph.Disconnect<UnityEngine.Playables.Playable>(UnityEngine.Playables.Playable,int)
		// System.Void UnityEngine.Playables.PlayableOutputExtensions.SetSourcePlayable<UnityEngine.Animations.AnimationPlayableOutput,UnityEngine.Animations.AnimationLayerMixerPlayable>(UnityEngine.Animations.AnimationPlayableOutput,UnityEngine.Animations.AnimationLayerMixerPlayable)
		// YooAsset.AssetOperationHandle YooAsset.ResourcePackage.LoadAssetAsync<object>(string)
		// YooAsset.AssetOperationHandle YooAsset.YooAssets.LoadAssetAsync<object>(string)
	}
}