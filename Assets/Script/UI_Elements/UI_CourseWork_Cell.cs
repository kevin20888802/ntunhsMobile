using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UI_CourseWork_Cell : MonoBehaviour
{
    public Menu_Work Menu_Work;
    public CourseWork Data;
    public Text UI_Title;
    public Text UI_Description;
    public void UpdateShow()
    {
        if (Data != null)
        {
            UI_Title.text = Data.Title;
            UI_Description.text = "Ãº¥æ´Á­­:" + Data.Term;
        }
    }
    public void ShowDetail()
    {
        if (Menu_Work != null && Data != null)
        {
            Menu_Work.ShowDetail(Data);
        }
    }
}
