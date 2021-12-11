using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UI_CourseSearchCell : MonoBehaviour
{
    public Menu_CourseSearch_Result Menu_CourseSearch_Result;
    public Course_Detail Data;
    public Button AddBtn;
    public Text UI_Title;
    public Text UI_Description;
    public void UpdateShow()
    {
        if (Data != null)
        {
            UI_Title.text = Data.Name + "(" + Data.Period + "節/" + Data.Credit + "學分)";
            UI_Description.text = Data.Faculty_Name + "\n" + Data.Teacher;
        }
    }
    public void ShowDetail()
    {
        if (Menu_CourseSearch_Result != null && Data != null)
        {
            Menu_CourseSearch_Result.ShowDetail(Data);
        }
    }

    public void AddToSchedule()
    {
        Menu_CourseSearch_Result.AddScheduleCourse(Data);
    }
}
