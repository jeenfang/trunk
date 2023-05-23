using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using UnityEditor;
using UnityEngine;

public class UINodeTemplate
{
    public static string UIClass =
        @"/**** This is an automatically generated class. Please do not modify it. ******/

    using UnityEngine;
    using UnityEngine.UI;
    using UnityEngine.EventSystems;
    using System;
    #using#
    public partial class #类名#Generator
    {
        #成员#
        //auto
        public void OnInit(Transform transform)
	    {
		    #查找#
	    }

        public void OnDestroy()
        {
            #删除#
        }
    }
    ";
}


public class AutoBuild
{
    [MenuItem("Assets/UI/GenerateCode")]
    [MenuItem("Tools/UI/GenerateCode")]
    public static void BuildUIScript()
    {
        var dicUIType = new Dictionary<string, string>();
        
        dicUIType.Add("Img", "Image");
        dicUIType.Add("Btn", "Button");
        dicUIType.Add("Txt", "Text");
        dicUIType.Add("Tran", "Transform");
        dicUIType.Add("Input", "InputField");
        dicUIType.Add("Raw", "RawImage");
        dicUIType.Add("Drop", "Dropdown");
        dicUIType.Add("Slider", "Slider");
        dicUIType.Add("Scr", "Scrollbar");
        dicUIType.Add("Rect", "RectTransform");
        dicUIType.Add("TMPInput", "TMP_InputField");
        dicUIType.Add("TMPDrop", "TMP_Dropdown");
        

        GameObject[] selectobjs = Selection.gameObjects;

        foreach (GameObject go in selectobjs)
        {
            //选择的物体
            GameObject selectobj = go.transform.root.gameObject;

            //物体的子物体
            Transform[] _transforms = selectobj.GetComponentsInChildren<Transform>(true);

            List<Transform> childList = new List<Transform>(_transforms);

            //UI需要查询的物体
            var mainNode = from trans in childList where trans.name.Contains('_') && dicUIType.Keys.Contains(trans.name.Split('_')[0]) select trans;

            var nodePathList = new Dictionary<string, string>();

            //循环得到物体路径
            foreach (Transform node in mainNode)
            {
                Transform tempNode = node;

                string nodePath = tempNode.name;

                if (tempNode.parent != selectobj.transform)
                {
                    nodePath = "/" +  tempNode.name;
                }

                while (tempNode != tempNode.root && (tempNode.parent != selectobj.transform))
                {
                    tempNode = tempNode.parent;

                    int index = nodePath.IndexOf('/');

                    string nodeName =  tempNode.name;

                    if (tempNode.parent != selectobj.transform)
                    {
                        nodeName = "/" +  tempNode.name;
                    }
                    nodePath = nodePath.Insert(index, nodeName);
                }

                nodePathList.Add(node.name, nodePath);
            }

            string usingcontent = "";
            //成员变量字符串
            string memberstring = "";
            //查询代码字符串
            string loadedcontant = "";
            //删除卸载
            string destroystring = "";

            foreach (Transform itemtran in mainNode)
            {
                string typeStr = dicUIType[itemtran.name.Split('_')[0]];

                memberstring += "private " + typeStr + " " + itemtran.name + " = null;\r\n\t\t";
                
                loadedcontant += itemtran.name + " = " + "transform.Find(\"" + nodePathList[itemtran.name] + "\").GetComponent<" + typeStr + ">();\r\n\t\t\t";

                destroystring += itemtran.name + " = null;\r\n\t\t\t";
                
                if (string.IsNullOrEmpty(usingcontent) && typeStr.StartsWith("TMP"))
                {
                    usingcontent = "using TMPro;\r\n\t";
                }
            }


            // string path= AssetDatabase.GetAssetPath(selectobj);
            // Debug.Log("path1:"+path);
            // path = path.Replace("/", "\\");
            // path = path.Substring(path.LastIndexOf('\\'));
            // Debug.Log("path2:"+path);

            string scriptPath = Application.dataPath + "/HotFix/GUI/Generate/" + selectobj.name + "Generator.cs";


            string classStr = "";

            //如果已经存在了脚本，则只替换//auto下方的字符串
            if (File.Exists(scriptPath))
            {
                // FileStream classfile = new FileStream(scriptPath, FileMode.Open);
                // StreamReader read = new StreamReader(classfile);
                // classStr = read.ReadToEnd();
                // read.Close();
                // classfile.Close();
                File.Delete(scriptPath);
                //
                // string splitStr = "//auto";
                // string unchangeStr = Regex.Split(classStr, splitStr, RegexOptions.IgnoreCase)[0];
                // string changeStr = Regex.Split(UINodeTemplate.UIClass, splitStr, RegexOptions.IgnoreCase)[1];
                //
                // StringBuilder build = new StringBuilder();
                // build.Append(unchangeStr);
                // build.Append(splitStr);
                // build.Append(changeStr);
                // classStr = build.ToString();
            }
            // else
            // {
            //     classStr = UINodeTemplate.UIClass;
            // }
            
            classStr = UINodeTemplate.UIClass;
            classStr = classStr.Replace("#using#", usingcontent);
            classStr = classStr.Replace("#类名#", selectobj.name);
            classStr = classStr.Replace("#查找#", loadedcontant);
            classStr = classStr.Replace("#成员#", memberstring);
            classStr = classStr.Replace("#删除#", destroystring);

            var fullPath = Path.GetDirectoryName(scriptPath);
            if (!Directory.Exists(fullPath))
            {
                Directory.CreateDirectory(fullPath);
            }
            FileStream file = new FileStream(scriptPath, FileMode.CreateNew);
            StreamWriter fileW = new StreamWriter(file, System.Text.Encoding.UTF8);
            fileW.Write(classStr);
            fileW.Flush();
            fileW.Close();
            file.Close();


            Debug.Log("创建脚本 " + Application.dataPath + "/HotFix/GUI/Generate/" + selectobj.name + "Generator.cs 成功!");
            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();
        }
    }

}
