

// 轨迹类型
public enum ETrailType
{
    TrailType_Line = 1, //直线
    TrailType_Curve = 2, //曲线
};

// 技能类型
public enum ESkillType
{
    SkillType_Bullet = 1, //子弹
    SkillType_Bomb = 2, //炮弹
    SkillType_Missile = 3, //导弹
    SkillType_Spread = 4, //散弹
};

// 品质
public enum EQulity
{
    EQulity_White = 1, //白
    EQulity_Green = 2, //绿
    EQulity_Blue = 3, //蓝
    EQulity_Purple = 4, //紫
    EQulity_Orange = 5, //橙
    EQulity_Red = 6, //红
};

// 部位
public enum EEquipment
{
    EEquipment_Weapon = 1, //武器
    EEquipment_Armor = 2, //衣服
    EEquipment_Helmet = 3, //头盔
    EEquipment_Bracers = 4, //手套
    EEquipment_Vest = 5, //腰带
    EEquipment_Leggings = 6, //鞋子
};

// 部位
public enum EEquipPos
{
    EEquipPos_LWeapon = 1, //左武器
    EEquipPos_RWeapon = 2, //右武器
    EEquipPos_Armor = 3, //衣服
    EEquipPos_Helmet = 4, //头盔
    EEquipPos_Bracers = 5, //手套
    EEquipPos_Vest = 6, //腰带
    EEquipPos_Leggings = 7, //鞋子
};

// 商品类型
public enum EMallType
{
    EMallType_None = 0, //None
    EMallType_Gem = 1, //钻石
    EMallType_Gold = 2, //金币
    EMallType_Chest = 3, //宝箱
    EMallType_Item = 4, //道具
    EMallType_Equip = 5, //装备
};

// 属性类型
public enum EAttrbuteType
{
    EAttrbuteType_Attack = 1, //攻击
    EAttrbuteType_Defender = 2, //防御
    EAttrbuteType_Health = 3, //生命
    EAttrbuteType_AtkSpeed = 4, //攻速
    EAttrbuteType_MoveSpeed = 5, //移动速度
    EAttrbuteType_HpRecover = 6, //回血
    EAttrbuteType_MinHurt = 7, //减伤
    EAttrbuteType_PlusHurt = 8, //增伤
};

// 骨骼节点
public enum EBonesPoint
{
    EBonesPoint_Armor = 1, //装备
    EBonesPoint_Helmet = 2, //头盔
    EBonesPoint_LeftArmor = 3, //左臂
    EBonesPoint_LeftHand = 4, //左手
    EBonesPoint_LeftSlave = 5, //左手套
    EBonesPoint_LeftWeapon = 6, //左手武器
    EBonesPoint_RightArmor = 7, //右臂
    EBonesPoint_RightSleeve = 8, //手环
    EBonesPoint_RightSlave = 9, //右手套
    EBonesPoint_RightWeapon = 10, //右手武器
    EBonesPoint_LeftLeg = 11, //左腿
    EBonesPoint_RightLeg = 12, //右腿
};

// 道具类型
public enum EItemType
{
    EItemType_Coin = 1, //金币
    EItemType_Diamand = 2, //钻石
    EItemType_Physical = 3, //体力
    EItemType_Material = 4, //材料
};

// 颜色类型
public enum EFontColorType
{
    EFontColorType_Red = 1, //红色
    EFontColorType_Green = 2, //绿色
};

// 装备道具显示类型
public enum EDisplayType
{
    EDisplayType_Equip = 1, //装备
    EDisplayType_Item = 2, //道具
    EDisplayType_Combine = 3, //合成
};


