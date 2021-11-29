using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UI_CourseSearchCell : MonoBehaviour
{
    public Menu_CourseSearch_Result Menu_CourseSearch_Result;
    public Dictionary<string, string> Data;
    public Text UI_Title;
    public Text UI_Description;
    public void UpdateShow()
    {
        if (Data != null)
        {
            UI_Title.text = Data["Course_Name"] + "(" + Data["Period"] + "節/" + Data["Credits"] + "學分)";
            UI_Description.text = Data["Faculty_Name"] + "\n" + Data["Open_Teacher"];
        }
    }
    public void ShowDetail()
    {
        if (Menu_CourseSearch_Result != null && Data != null)
        {
            Menu_CourseSearch_Result.ShowDetail(Data);
        }
    }
}
