using System;
using System.IO;
using System.Collections.Generic;
using System.Text;


namespace Configs 
{

   [Serializable]
   public partial class Item : IInfo
   {
       public int id; // 道具Id
       public EItemType itemType; // 类型
       public long nameid; // 名字Id
       public EQulity qulity; // 品质
       public int descId; // 道具描述
       public int[] arrayo1; // 数组测试
       public string[] arrayo2; // 一维数组测试
       public long[][] arrayt1; // 二维数组测试
       public string[][] arrayt2; // 二维数组2测试
       public bool isOnly; // 是否唯一

       public void Load(BinaryReader reader)
       {
           id = reader.ReadInt32();
           /***********************int***********************/
 
           itemType = (EItemType)reader.ReadInt32();
           /***********************enum***********************/
 
           nameid = reader.ReadInt64();
           /***********************long***********************/
 
           qulity = (EQulity)reader.ReadInt32();
           /***********************enum***********************/
 
           descId = reader.ReadInt32();
           /***********************int***********************/
 
           int arrayo1Len = reader.ReadInt32();
           var arrayo1Temp = System.Text.Encoding.UTF8.GetString(reader.ReadBytes(arrayo1Len));
           var arrayo1Temps = arrayo1Temp.Split(',');
           arrayo1 = new int[arrayo1Temps.Length];
           for(int i = 0; i < arrayo1Temps.Length;i++)
           {
               arrayo1[i] = int.Parse(arrayo1Temps[i]);
           }
           /***********************int[]***********************/
 
           int arrayo2Len = reader.ReadInt32();
           var arrayo2Temp = System.Text.Encoding.UTF8.GetString(reader.ReadBytes(arrayo2Len));
           arrayo2 = arrayo2Temp.Split(',');
           /***********************string[]***********************/
 
           int arrayt1Len = reader.ReadInt32();
           var arrayt1Temp = System.Text.Encoding.UTF8.GetString(reader.ReadBytes(arrayt1Len));
           var arrayt1Temps = arrayt1Temp.Split('|');
           arrayt1 = new long[arrayt1Temps.Length][];
           for(int i = 0; i < arrayt1Temps.Length;i++)
           {
               var temps = arrayt1Temps[i].Split(',');
               arrayt1[i] = new long[temps.Length];
               for(int j = 0; j < temps.Length;j++)
               {
                   arrayt1[i][j] = long.Parse(temps[j]);
               }
           }
           /***********************long[][]***********************/
 
           int arrayt2Len = reader.ReadInt32();
           var arrayt2Temp = System.Text.Encoding.UTF8.GetString(reader.ReadBytes(arrayt2Len));
           var arrayt2Temps = arrayt2Temp.Split('|');
           arrayt2 = new string[arrayt2Temps.Length][];
           for(int i = 0; i < arrayt2Temps.Length;i++)
           {
               arrayt2[i] = arrayt2Temps[i].Split(',');
           }
           /***********************string[][]***********************/
 
           isOnly = reader.ReadInt32() > 0;
           /***********************bool***********************/
 
       }

       public int GetKey()
       {
           return id;
       }

   }
}
