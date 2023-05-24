using Cinemachine;
using UnityEngine;

namespace HotFix.Contexts
{
    public class CameraContext : BaseContext
    {
        private const string RootAppNode = @"Application";
        private const string RootPlayNode = "RootPlayer";
        private const string VisualCamNode = @"VisualCam";
        private const string MainCameraTag = @"MainCamera";
        private const string CameraLookAt = @"look";

        private GameObject _rootApplication;
        private Camera _mainCamera;
        private CinemachineVirtualCamera _cameraFollow;
        private Transform _rootPlayer;

        public GameObject RootApplication
        {
            get
            {
                if (null == _rootApplication)
                {
                    _rootApplication = GameObject.Find(RootAppNode);
                }

                return _rootApplication;
            }
        }

        public Camera MainCamera
        {
            get
            {
                if (null == _mainCamera)
                {
                    _mainCamera = GameObject.FindWithTag(MainCameraTag).GetComponent<Camera>();
                }

                return _mainCamera;
            }
        }

        public CinemachineVirtualCamera CameraFollow
        {
            get
            {
                if (null == _cameraFollow)
                {
                    _cameraFollow = RootApplication.transform.Find(VisualCamNode)
                        .GetComponent<CinemachineVirtualCamera>();
                }

                return _cameraFollow;
            }
        }

        public Transform RootPlayer
        {
            get
            {
                if (null == _rootPlayer)
                {
                    _rootPlayer = RootApplication.transform.Find(RootPlayNode);
                }

                return _rootPlayer;
            }
        }

        public void SetFollowTarget(Transform target)
        {
            if (null == target)
            {
                CameraFollow.Follow = null;
                CameraFollow.LookAt = null;
                return;
            }
            CameraFollow.Follow = target;
            CameraFollow.LookAt = target.Find(CameraLookAt);
        }
    }
}