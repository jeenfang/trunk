/**** This is an automatically generated class. Please do not modify it. ******/

    using UnityEngine;
    using UnityEngine.UI;
    using UnityEngine.EventSystems;
    using System;
    using TMPro;
	
    public partial class UIHomeGenerator
    {
        private Text Txt_name = null;
		private Button Btn_TMPBtn = null;
		private TMP_Dropdown TMPDrop_down = null;
		private TMP_InputField TMPInput_FieldN = null;
		
        //auto
        public void OnInit(Transform transform)
	    {
		    Txt_name = transform.Find("Txt_name").GetComponent<Text>();
			Btn_TMPBtn = transform.Find("Btn_TMPBtn").GetComponent<Button>();
			TMPDrop_down = transform.Find("TMPDrop_down").GetComponent<TMP_Dropdown>();
			TMPInput_FieldN = transform.Find("TMPInput_FieldN").GetComponent<TMP_InputField>();
			
	    }

        public void OnDestroy()
        {
            Txt_name = null;
			Btn_TMPBtn = null;
			TMPDrop_down = null;
			TMPInput_FieldN = null;
			
        }
    }
    