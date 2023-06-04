using System;
using UnityEngine;
using Object = UnityEngine.Object;
using System.Collections;
using System.Threading.Tasks;
using YooAsset;

namespace UniFramework.Audio
{
    public static class UniAudio
    {
        private static bool _isInitialize = false;
        private static GameObject _driver = null;
        private static UniAudioDriver _behaviour = null;

        /// <summary>
        /// 初始化事件系统
        /// </summary>
        public static void Initalize()
        {
            if (_isInitialize)
                throw new Exception($"{nameof(UniAudio)} is initialized !");

            if (_isInitialize == false)
            {
                // 创建驱动器
                _isInitialize = true;
                _driver = new GameObject($"[{nameof(UniAudio)}]");
                _behaviour = _driver.AddComponent<UniAudioDriver>();
                Object.DontDestroyOnLoad(_driver);
                UniLogger.Log($"{nameof(UniAudio)} initalize !");
                Awake();
            }
        }

        public static void Update()
        {
        }

        public static void Destroy()
        {
            if (_isInitialize)
            {
                Clear();

                _isInitialize = false;
                if (_driver != null)
                    Object.Destroy(_driver);
                _behaviour = null;
                UniLogger.Log($"{nameof(UniAudio)} destroy all !");
            }
        }

        private static void Clear()
        {
            musicSource = null;
            ambientSource = null;
            fxSource = null;
        }

        public enum AudioChannel
        {
            Master,
            Music,
            Ambient,
            fx
        };

        public static float masterVolume = 1; // Overall volume
        public static float musicVolume = 1; // Music volume
        public static float ambientVolume = 1; // Ambient volume
        public static float fxVolume = 1; // FX volume

        public static bool MusicIsLooping = true;
        public static bool AmbientIsLooping = true;


        private static AudioSource musicSource;
        private static AudioSource ambientSource;
        private static AudioSource fxSource;


        //==============================================================
        private static void Awake()
        {
            GameObject newfxSource = new GameObject("FxSource");
            fxSource = newfxSource.AddComponent<AudioSource>();
            newfxSource.transform.parent = _driver.transform;
            fxSource.playOnAwake = false;

            GameObject newMusicSource = new GameObject("MusicSource");
            musicSource = newMusicSource.AddComponent<AudioSource>();
            newMusicSource.transform.parent = _driver.transform;
            musicSource.loop = MusicIsLooping; // Music is looping
            musicSource.playOnAwake = false;

            GameObject newAmbientsource = new GameObject("AmbientSource");
            ambientSource = newAmbientsource.AddComponent<AudioSource>();
            newAmbientsource.transform.parent = _driver.transform;
            ambientSource.loop = AmbientIsLooping; // Ambient sound is looping
            ambientSource.playOnAwake = false;

            //==============================================================
            // Set volume on all the channels
            //==============================================================
            SetVolume(masterVolume, AudioChannel.Master);
            SetVolume(fxVolume, AudioChannel.fx);
            SetVolume(musicVolume, AudioChannel.Music);
            SetVolume(ambientVolume, AudioChannel.Ambient);
        }

        public static void GetVolume(float master, float fx, float music, float ambient)
        {
            masterVolume = master;
            fxVolume = fx;
            musicVolume = music;
            ambientVolume = ambient;
        }

        public static void SetVolume(float volumePercent, AudioChannel channel)
        {
            switch (channel)
            {
                case AudioChannel.Master:
                    masterVolume = volumePercent;
                    break;
                case AudioChannel.fx:
                    fxVolume = volumePercent;
                    break;
                case AudioChannel.Music:
                    musicVolume = volumePercent;
                    break;
                case AudioChannel.Ambient:
                    ambientVolume = volumePercent;
                    break;
            }

            fxSource.volume = fxVolume * masterVolume;
            musicSource.volume = musicVolume * masterVolume;
            ambientSource.volume = ambientVolume * masterVolume;
        }

        public static void PlayMusic(string musicName, float delay)
        {
            _behaviour.StartCoroutine(
                LoadAudioClipAsync(musicName, (clip) =>
                {
                    musicSource.clip = clip;
                    musicSource.PlayDelayed(delay);
                })
            );
        }

        public static void PlayMusicFade(string musicName, float duration)
        {
            _behaviour.StartCoroutine(
                _PlayMusicFade(musicName, duration)
            );
        }

        private static IEnumerator _PlayMusicFade(string musicName, float duration)
        {
            float startVolume = 0;
            float targetVolume = musicSource.volume;
            float currentTime = 0;
            yield return LoadAudioClipAsync(musicName, (clip) =>
                {
                    musicSource.clip = clip;
                    musicSource.Play();
                }
            );

            while (currentTime < duration)
            {
                currentTime += Time.deltaTime;
                musicSource.volume = Mathf.Lerp(startVolume, targetVolume, currentTime / duration);
                yield return null;
            }

            yield break;
        }

        public static void StopMusic()
        {
            musicSource.Stop();
        }

        public static void StopMusicFade(float duration)
        {
            _behaviour.StartCoroutine(
                _StopMusicFade(duration)
            );
        }

        private static IEnumerator _StopMusicFade(float duration)
        {
            var volume = musicSource.volume;
            float currentVolume = volume;
            float startVolume = volume;
            float targetVolume = 0;
            float currentTime = 0;

            while (currentTime < duration)
            {
                currentTime += Time.deltaTime;
                musicSource.volume = Mathf.Lerp(startVolume, targetVolume, currentTime / duration);
                yield return null;
            }

            musicSource.Stop();
            musicSource.volume = currentVolume;

            yield break;
        }

        public static void PlayAmbient(string ambientName, float delay)
        {
            _behaviour.StartCoroutine(LoadAudioClipAsync(ambientName, (clip) =>
                {
                    ambientSource.clip = clip;
                    ambientSource.PlayDelayed(delay);
                })
            );
        }

        public static void StopAmbient()
        {
            ambientSource.Stop();
        }

        public static void PlaySound2D(string soundName)
        {
            _behaviour.StartCoroutine(
                LoadAudioClipAsync(soundName, (clip) => { fxSource.PlayOneShot(clip, fxVolume * masterVolume); })
            );
        }

        public static void PlaySound3D(string soundName, Vector3 soundPosition)
        {
            _behaviour.StartCoroutine(LoadAudioClipAsync(soundName, (clip) =>
                {
                    AudioSource.PlayClipAtPoint(clip, soundPosition,
                        fxVolume * masterVolume);
                })
            );
        }

        private static IEnumerator LoadAudioClipAsync(string clipName, Action<AudioClip> action)
        {
            var handle = YooAssets.LoadAssetAsync<AudioClip>(clipName);
            yield return handle;
            if (handle?.AssetObject is AudioClip clip)
            {
                action(clip);
            }
            
            //释放引用
            handle?.Release();
        }
    }
}