using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class Menu_CourseSearch : UI_Menu
{
    public MainSystem MainSystem;
    public MenuManager MenuManager;
    public Menu_CourseSearch_Result Menu_CourseSearch_Result;

    public Dropdown i_Sem;
    public Dropdown i_EduType;
    public Transform i_Options_Faculty;
    public Transform i_Options_Grade;
    public Transform i_Options_Course_Type;
    public Transform i_Options_Day;
    public Transform i_Options_Time;
    public Transform i_Options_Other;
    public InputField i_Course_Name;
    public InputField i_Course_Place;
    public InputField i_Teacher;

    public override IEnumerator EnterMenu()
    {
        MainSystem = MainSystem.instance;
        //MainSystem.Loading = true;
        //MainSystem.LoginCheck();
        yield return null;
        Refresh();
        //MainSystem.Loading = false;
    }

    public void Refresh()
    {
        string[] _allSems = MainSystem.GetCourseSearchSems();
        i_Sem.options.Clear();
        for (int i = _allSems.Length - 1; i >= 0; i--)
        {
            i_Sem.options.Add(new Dropdown.OptionData(_allSems[i]));
        }
        i_Sem.value = 0;
        i_Sem.RefreshShownValue();
    }

    public void Search()
    {
        Dictionary<string,string> _queryPara = new Dictionary<string, string>();
        _queryPara.Add("Sem",i_Sem.options[i_Sem.value].text);
        _queryPara.Add("EduType", i_EduType.options[i_EduType.value].text);
        _queryPara.Add("Faculty_Name", GetToggleListValue(i_Options_Faculty));
        _queryPara.Add("Grad", GetToggleListValue(i_Options_Grade));
        _queryPara.Add("Course_Type", GetToggleListValue(i_Options_Course_Type));
        _queryPara.Add("Course_Day", GetToggleListValue(i_Options_Day));
        _queryPara.Add("Course_Time", GetToggleListValue(i_Options_Time));
        _queryPara.Add("Course_Other", GetToggleListValue(i_Options_Other));
        if (_queryPara["Course_Other"] == "")
        {
            _queryPara["Course_Other"] = "本系";
        }
        _queryPara.Add("Course_Name", i_Course_Name.text);
        _queryPara.Add("Course_Place", i_Course_Place.text);
        _queryPara.Add("Teacher", i_Teacher.text);

        Menu_CourseSearch_Result.QueryParameters = _queryPara;
        //MainSystem.CourseSearch(_queryPara);
        MenuManager.SwitchMenu(Menu_CourseSearch_Result.transform.name);
    }

    public string GetToggleListValue(Transform i_t)
    {
        List<string> _tmp = new List<string>();
        for (int i = 0; i < i_t.childCount; i++)
        {
            Transform _thisToggle = i_t.GetChild(i);
            if (_thisToggle.GetComponent<Toggle>())
            {
                if (_thisToggle.GetComponent<Toggle>().isOn)
                {
                    _tmp.Add(_thisToggle.name);
                }
            }
        }
        if (_tmp.Count > 0)
        {
            return "[" + string.Join(",", _tmp.ToArray()) + "]";
        }
        else
        {
            return "";
        }
    }
}
