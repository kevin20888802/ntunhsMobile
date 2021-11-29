using kevin20888802.MsgBox;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Menu_Course : UI_Menu
{
    public MainSystem MainSystem;
    public MenuManager MenuManager;
    public Dropdown ui_year_select;
    public UI_Table_Text ui_table;

    public override IEnumerator EnterMenu()
    {
        MainSystem = MainSystem.instance;
        MainSystem.Loading = true;
        MainSystem.LoginCheck();
        yield return new WaitForSeconds(0.25f);
        if (MainSystem.log_status == true)
        {
            RefreshYear();
            RefreshData();
        }
        else
        {
            //MsgBox.Msg("連線逾時", "因長時間沒有動作\n學校已將您登出\n請重新登入");
            MenuManager.LogOut();
        }
        MainSystem.Loading = false;
    }

    public void RefreshYear()
    {
        string[] _years = MainSystem.StudentInfo.allSemno;
        ui_year_select.options.Clear();
        for (int i = 0; i < _years.Length; i++)
        {
            ui_year_select.options.Add(new Dropdown.OptionData(_years[i]));
        }

        ui_year_select.value = ui_year_select.options.Count - 1;

    }

    public void RefreshData()
    {
        StartCoroutine(RefreshDataProcess());
    }

    public IEnumerator RefreshDataProcess()
    {
        MainSystem.Loading = true;
        yield return new WaitForSeconds(0.25f);
        Course[] _courseData = MainSystem.GetSemCourseList(ui_year_select.options[ui_year_select.value].text);
        string[,] _tableData = new string[_courseData.Length + 1, 7];
        _tableData[0, 0] = "課程\n名稱";
        _tableData[0, 1] = "教室";
        _tableData[0, 2] = "星期";
        _tableData[0, 3] = "節次";
        _tableData[0, 4] = "學分";
        _tableData[0, 5] = "課程\n性質";
        _tableData[0, 6] = "任課\n教師";
        for (int i = 1; i < _courseData.Length + 1; i++)
        {
            _tableData[i, 0] = _courseData[i - 1].Name;
            _tableData[i, 1] = _courseData[i - 1].Place;
            _tableData[i, 2] = _courseData[i - 1].Day;
            _tableData[i, 3] = _courseData[i - 1].Period;
            _tableData[i, 4] = _courseData[i - 1].Credit;
            _tableData[i, 5] = _courseData[i - 1].Type;
            _tableData[i, 6] = _courseData[i - 1].Teacher.Replace(",","\n");
        }
        ui_table.Setup(_tableData);

        ui_table.SetRowColor(0, new Color32(64, 64, 64, 255));
        ui_table.SetRowFontColor(0, Color.white);
        ui_table.SetRowFontSize(0, 40);

        for (int i = 1; i < ui_table.Cells.GetLength(0); i++)
        {
            ui_table.SetRowFontSize(i, 35);
        }

        ui_table.SetColumnWidth(0, 200);
        ui_table.SetColumnWidth(2, 50);
        ui_table.SetColumnWidth(4, 50);
        ui_table.SetColumnWidth(6, 150);
        ui_table.SetColumnTextBestFit(6, true);
        LayoutRebuilder.ForceRebuildLayoutImmediate(ui_table.transform.parent.GetComponent<RectTransform>());
        MainSystem.Loading = false;
    }
}
