using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Menu_CourseSearch_Result : UI_Menu
{
    public MainSystem MainSystem;
    public MenuManager MenuManager;
    public Dictionary<string, string> QueryParameters;
    private Dictionary<string, string>[] _data;
    public Transform ResultCells;
    public GameObject DetailWindow;
    public UI_Table_Text ui_table;
    public Text ui_page;
    public string course_plan_url;

    public int TotalPage()
    {
        if (_data != null)
        {
            return (int)(_data.Length / 5);
        }
        else
        {
            return 0;
        }
    }
    public int Page = 0;
    public override IEnumerator EnterMenu()
    {
        MainSystem = MainSystem.instance;
        MainSystem.Loading = true;
        //MainSystem.LoginCheck();
        yield return new WaitForSeconds(0.015f);
        _data = MainSystem.CourseSearch(QueryParameters);
        Refresh();
        MainSystem.Loading = false;
    }

    public void Refresh()
    {
        DetailWindow.SetActive(false);
        MainSystem.DestroyAllChild(ResultCells);
        if (_data != null)
        {
            GameObject _cellObj = Resources.Load<GameObject>("Prefab/UI/CourseSearchCell");
            _cellObj.SetActive(false);
            for (int i = 0; i < _data.Length; i++)
            {
                if (i >= Page * 5 && i <= (Page + 1) * 5)
                {
                    UI_CourseSearchCell _cell = Instantiate(_cellObj, ResultCells).GetComponent<UI_CourseSearchCell>();
                    _cell.Menu_CourseSearch_Result = this;
                    _cell.Data = _data[i];
                    _cell.UpdateShow();
                    _cell.gameObject.SetActive(true);
                }
            }
        }
        ui_page.text = (Page + 1) + "/" + TotalPage();
    }

    public void ShowDetail(Dictionary<string, string> i_course)
    {
        DetailWindow.SetActive(true);
        course_plan_url = i_course["Class_Plan"];

        string[,] _tableData = new string[14, 2];
        _tableData[0, 0] = i_course["Course_Name"];

        _tableData[1, 0] = "學期"; 
        _tableData[1, 1] = i_course["Sem"];
        _tableData[2, 0] = "系所名稱";
        _tableData[2, 1] = i_course["Faculty_Name"];
        _tableData[3, 0] = "年級";
        _tableData[3, 1] = i_course["Grad"];
        _tableData[4, 0] = "課程代碼";
        _tableData[4, 1] = i_course["Course_Id"];
        _tableData[5, 0] = "上課班組";
        _tableData[5, 1] = i_course["Class_Name"];
        _tableData[6, 0] = "授課老師";
        _tableData[6, 1] = i_course["Teacher"];
        _tableData[7, 0] = "課別";
        _tableData[7, 1] = i_course["Course_Type"];
        _tableData[8, 0] = "學分";
        _tableData[8, 1] = i_course["Credits"];
        _tableData[9, 0] = "星期";
        _tableData[9, 1] = i_course["Course_Day"];
        _tableData[10, 0] = "節次";
        _tableData[10, 1] = i_course["Course_Time"];
        _tableData[11, 0] = "限制人數";
        _tableData[11, 1] = i_course["Limit_People"];
        _tableData[12, 0] = "地點";
        _tableData[12, 1] = i_course["Course_Place"];
        _tableData[13, 0] = "備註";
        _tableData[13, 1] = i_course["Course_Other"];

        ui_table.Setup(_tableData);

        ui_table.SetColumnWidth(0, 250);
        ui_table.SetColumnWidth(1, 500);

        for (int i = 0; i < ui_table.Cells.GetLength(0); i++)
        {
            ui_table.SetRowFontSize(i, 40);
            ui_table.SetRowHeight(i, 150);
        }
        ui_table.SetRowHeight(13, 400);

        ui_table.SetRowFontSize(0, 60);
        ui_table.Cells[0, 0].Text.resizeTextForBestFit = true;
        ui_table.Cells[0, 0].Text.resizeTextMaxSize = 100;
        ui_table.SetRowHeight(0, 250);
        ui_table.SetRowColor(0, new Color32(64, 64, 64, 255));
        ui_table.SetRowFontColor(0, Color.white);
        for (int j = 1; j < ui_table.Cells.GetLength(0); j += 2)
        {
            ui_table.SetRowColor(j, new Color32(192, 192, 192, 255));
        }

        ui_table.MergeCells(new Vector2(0, 0), new Vector2(0,1));
    }

    public void NextPage()
    {
        if (Page + 1 < TotalPage())
        {
            Page += 1;
            Refresh();
        }
    }
    public void BackPage()
    {
        if (Page - 1 >= 0)
        {
            Page -= 1;
            Refresh();
        }
    }

    public void OpenCoursePlan()
    {
        Application.OpenURL(course_plan_url);
    }
}
