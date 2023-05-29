using System.Collections.Generic;
using HotFix.Contexts;
using HotFix.Utility;
using UniFramework.Pooling;
using UnityEngine;

namespace HotFix.Entity
{
    public class UnitPlayer : Unit
    {
        private Vector2 _dir;
        private Vector2 _rotation;
        private bool _isRun = false;
        private bool _isRotate = false;
        private float _temp = 0;
        private Camera _camera;
        private float _atkMinDistance = 0.2f;
        private List<Weapon> _weapons;
        private List<Transform> _mounts = new List<Transform>(); //挂载点

        // public UnitPlayer(string name) : base(name)
        // {
        //    
        // }

        private Camera MainCamera => _camera ??= GameContext.GetContext<CameraContext>().MainCamera;
        public List<Weapon> Weapons => _weapons ??= new List<Weapon>();

        public Vector3 TargetPosition
        {
            get
            {
                if (null != ThisT)
                {
                    _temp = _rotation.sqrMagnitude;
                    _temp = _temp < _atkMinDistance ? _atkMinDistance : _temp;
                    return ThisT.forward * AtkDistance * _temp + ThisT.position;
                }

                return Vector3.zero;
            }
        }

        protected override void SpawnerFinished()
        {
            if (null != ThisT)
            {
                var ctx = GameContext.GetContext<CameraContext>();
                ThisT.SetParent(ctx.RootPlayer);
                ThisT.localPosition = Vector3.zero;
                ctx.SetFollowTarget(ThisT);
                GetMountPoints();
                //默认给个手枪
                SwitchWeapon(EWeapon.WeaponPistol);
            }
        }

        private void GetMountPoints()
        {
            if (this.IsLoadFinised)
            {
                _mounts.Clear();
                _mounts.Add(this.ThisT.Find("mount1"));
                _mounts.Add(this.ThisT.Find("mount2"));
            }
        }

        //移动方向
        public void UpdateMoveDir(Vector2 direction)
        {
            _isRun = direction != Vector2.zero;
            this._dir = direction;
        }

        //转向
        public void UpdateRotateDir(Vector2 input)
        {
            var sqr = input.sqrMagnitude;
            _isRotate = sqr > 0;
            if (_isRotate)
            {
                _rotation = input;
            }
        }

        protected override void Move()
        {
            if (null != ThisT && _isRun)
            {
                ThisT.Translate(new Vector3(_dir.x, 0, _dir.y) * (MoveSpeed * Time.deltaTime), Space.World);
            }
        }

        protected override void Rotate()
        {
            if (null != ThisT && _isRotate)
            {
                var rotation = new Vector3(_rotation.x, 0, _rotation.y);
                ThisT.rotation = Quaternion.Lerp(ThisT.rotation, Quaternion.LookRotation(rotation),
                    RotateSpeed * Time.deltaTime);
                // GameObject.CreatePrimitive(PrimitiveType.Capsule).transform.position =
                //     ThisT.forward * 10 * _rotation.sqrMagnitude + ThisT.position;
            }
        }

        public Vector2 TargetWorldToScreenPoint()
        {
            // GameObject.CreatePrimitive(PrimitiveType.Capsule).transform.position = TargetPosition;
            return RectTransformUtility.WorldToScreenPoint(MainCamera, TargetPosition);
        }

        public void SwitchWeapon(EWeapon weapon)
        {
            if (Weapons.Count > 0 && null != Weapons[0])
            {
                if (Weapons[0].WeaponType == weapon)
                {
                    return;
                }
            }

            UnloadAllWeapon();
            string wName = GameUtility.GetWeaponName(weapon);
            switch (weapon)
            {
                case EWeapon.WeaponPistol:
                    // new WeaponPistol(wName, this);
                    // new WeaponPistol(wName, this);
                    var sp1 = UniObjectPool<WeaponPistol>.Get();
                    sp1?.BindPlayer(this);
                    sp1?.Spawner("WeaponPistol");
                    var sp2 = UniObjectPool<WeaponPistol>.Get();
                    sp2?.BindPlayer(this);
                    sp2?.Spawner("WeaponPistol");
                    break;
            }
        }

        //绑定武器
        public void BindWeapon(Weapon weapon)
        {
            if (null != weapon)
            {
                if (weapon.IsLoadFinised)
                {
                    if (Weapons.Count < this._mounts.Count)
                    {
                        weapon.ThisT.SetParent(this._mounts[Weapons.Count], false);
                        Weapons.Add(weapon);
                    }
                }
            }
        }

        public void Fire(bool open)
        {
            foreach (var weapon in Weapons)
            {
                weapon?.Fire(open);
            }
        }

        public void UnloadWeapon(Weapon weapon)
        {
            if (null != weapon)
            {
                if (Weapons.Contains(weapon))
                {
                    Weapons.Remove(weapon);
                }
                weapon.Unload();
            }
        }

        private void UnloadAllWeapon()
        {
            while (Weapons.Count > 0)
            {
                UnloadWeapon(Weapons[0]);
                Weapons.RemoveAt(0);
            }
        }

        public override void OnUpdate()
        {
            base.OnUpdate();
            foreach (var weapon in Weapons)
            {
                weapon.OnUpdate();
            }
            
            if (Input.GetMouseButtonDown(0))
            {
                Fire(true);
            }

            if (Input.GetMouseButtonUp(0))
            {
                Fire(false);
            }
        }

        public override void Dispose()
        {
            UnloadAllWeapon();
            base.Dispose();
            _isRotate = false;
            _isRun = false;
            GameContext.GetContext<CameraContext>().SetFollowTarget(null);
        }
    }
}