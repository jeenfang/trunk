using System;
using System.Collections.Generic;
using HotFix.Entity;
using Palmmedia.ReportGenerator.Core.Parser.Analysis;
using UniFramework.Pooling;
using UnityEngine.Pool;

namespace HotFix.Utility
{
    public static class GameUtility
    {
        #region 武器类型和武器工程关了

        private static Dictionary<EWeapon, Func<Weapon>> _dicWeaponFactoryMapping =
            new Dictionary<EWeapon, Func<Weapon>>()
            {
                { EWeapon.WeaponPistol, UniObjectPool<WeaponPistol>.Get },
                { EWeapon.WeaponMissle, UniObjectPool<WeaponMissle>.Get },
                { EWeapon.WeaponLaser, UniObjectPool<WeaponLaser>.Get }
            };

        #endregion


        #region 场景名字

        public static readonly string SceneNameHome = "scene_home";
        public static readonly string SceneNameBattle = "scene_battle";

        #endregion

        #region UI名字

        public static readonly string UINameHome = "UIHome";
        public static readonly string UINameBattle = "UIBattle";
        public static readonly string UINameLoading = "UILoading";
        public static readonly string UINameAbout = "UIAbout";

        #endregion

        public static string GetWeaponName(EWeapon weapon)
        {
            return weapon.ToString();
        }


        public static void SwitchWeapon(EWeapon weapon, UnitPlayer owner)
        {
            if (_dicWeaponFactoryMapping.TryGetValue(weapon, out Func<Weapon> func))
            {
                int num = (weapon == EWeapon.WeaponPistol) ? 2 : 1;
                for (int i = 0; i < num; i++)
                {
                    var wp = func();
                    wp?.Init();
                    wp?.BindPlayer(owner);
                    wp?.Spawner(wp.WeaponName);
                }
            }
        }
    }
}