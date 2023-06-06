using System;
using System.IO;
using System.Collections.Generic;
using System.Text;


namespace Configs 
{

   [Serializable]
   public partial class Product : IInfo
   {
       public int id; // 道具Id
       public EItemType itemType; // 类型
       public long nameid; // 名字Id
       public string icon; // icon
       public EQulity qulity; // 品质
       public string desc; // 道具描述
       public int[] arrayoi; // 数组测试1
       public string[] arrayos; // 数组测试2
       public int[][] arrayti; // 数组2测试1
       public string[][] arrayts; // 数组2测试2
       public bool isOnly; // 是否唯一

       public void Load(BinaryReader reader)
       {
           id = reader.ReadInt32();
           /***********************int***********************/
 
           itemType = (EItemType)reader.ReadInt32();
           /***********************enum***********************/
 
           nameid = reader.ReadInt64();
           /***********************long***********************/
 
           int iconLen = reader.ReadInt32();
           icon = System.Text.Encoding.UTF8.GetString(reader.ReadBytes(iconLen));
           /***********************string***********************/
 
           qulity = (EQulity)reader.ReadInt32();
           /***********************enum***********************/
 
           int descLen = reader.ReadInt32();
           desc = System.Text.Encoding.UTF8.GetString(reader.ReadBytes(descLen));
           /***********************string***********************/
 
           int arrayoiLen = reader.ReadInt32();
           var arrayoiTemp = System.Text.Encoding.UTF8.GetString(reader.ReadBytes(arrayoiLen));
           var arrayoiTemps = arrayoiTemp.Split(',');
           arrayoi = new int[arrayoiTemps.Length];
           for(int i = 0; i < arrayoiTemps.Length;i++)
           {
               arrayoi[i] = int.Parse(arrayoiTemps[i]);
           }
           /***********************int[]***********************/
 
           int arrayosLen = reader.ReadInt32();
           var arrayosTemp = System.Text.Encoding.UTF8.GetString(reader.ReadBytes(arrayosLen));
           arrayos = arrayosTemp.Split(',');
           /***********************string[]***********************/
 
           int arraytiLen = reader.ReadInt32();
           var arraytiTemp = System.Text.Encoding.UTF8.GetString(reader.ReadBytes(arraytiLen));
           var arraytiTemps = arraytiTemp.Split('|');
           arrayti = new int[arraytiTemps.Length][];
           for(int i = 0; i < arraytiTemps.Length;i++)
           {
               var temps = arraytiTemps[i].Split(',');
               arrayti[i] = new int[temps.Length];
               for(int j = 0; j < temps.Length;i++)
               {
                   arrayti[i][j] = int.Parse(temps[j]);
               }
           }
           /***********************int[][]***********************/
 
           int arraytsLen = reader.ReadInt32();
           var arraytsTemp = System.Text.Encoding.UTF8.GetString(reader.ReadBytes(arraytsLen));
           var arraytsTemps = arraytsTemp.Split('|');
           arrayts = new string[arraytsTemps.Length][];
           for(int i = 0; i < arraytsTemps.Length;i++)
           {
               arrayts[i] = arraytsTemps[i].Split(',');
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
