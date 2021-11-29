using kevin20888802.MsgBox;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Menu_Schedule : UI_Menu
{
    public MainSystem MainSystem;
    public MenuManager MenuManager;
    public UI_Table_Text ui_table;
    
    public override IEnumerator EnterMenu()
    {
        MainSystem = MainSystem.instance;
        MainSystem.Loading = true;
        MainSystem.LoginCheck();
        yield return new WaitForSeconds(0.25f);
        if (MainSystem.log_status == true)
        {
            Refresh();
        }
        else
        {
            MenuManager.LogOut();
        }
        MainSystem.Loading = false;
    }
    public void Refresh()
    {
        Schedule _theSchedule = MainSystem.GetSchedule();
        string[,] _scheduleTable = new string[_theSchedule.Period.Length, 7 + 1];
        _scheduleTable[0, 0] = "-";
        _scheduleTable[0, 1] = "星期\n一";
        _scheduleTable[0, 2] = "星期\n二";
        _scheduleTable[0, 3] = "星期\n三";
        _scheduleTable[0, 4] = "星期\n四";
        _scheduleTable[0, 5] = "星期\n五";
        _scheduleTable[0, 6] = "星期\n六";
        _scheduleTable[0, 7] = "星期\n日";
        for (int i = 0; i < _theSchedule.Period.Length; i++)
        {
            if (!string.IsNullOrEmpty(_theSchedule.Period[i]))
            {
                string[] _p = _theSchedule.Period[i].Split('~');
                _scheduleTable[i, 0] = "[" + (i) + "]" + "\n" + _p[0] + "\n" + _p[1];
            }
        }
        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j < _theSchedule.Courses.GetLength(1); j++)
            {
                if (_theSchedule.Courses[i,j] != null)
                {
                    Course _course = _theSchedule.Courses[i, j];
                    _scheduleTable[j,i] = _course.Name + "\n" + _course.Place + "";
                }
            }
        }
        ui_table.Setup(_scheduleTable);

        // 時段cells外觀設定
        ui_table.SetRowFontSize(0, 30);
        ui_table.SetRowColor(0, new Color32(64, 64, 64, 255));
        ui_table.SetRowFontColor(0, Color.white);

        for (int i = 1; i < ui_table.Cells.GetLength(0); i += 2)
        {
            ui_table.SetRowColor(i, new Color32(192, 192, 192, 255));
        }

        for (int i = 1; i <= 7; i++)
        {
            for (int j = 1; j < _theSchedule.Courses.GetLength(1); j++)
            {
                if (_theSchedule.Courses[i, j] != null)
                {
                    Course _course = _theSchedule.Courses[i, j];
                    string _courseInfo = "\n";
                    _courseInfo += "教室:" + _course.Place + "\n";
                    _courseInfo += "節次:" + _course.Period + "\n";
                    _courseInfo += "學分:" + _course.Credit + "\n";
                    _courseInfo += "課程性質:" + _course.Type + "\n";
                    _courseInfo += "授課老師:" + _course.Teacher + "\n";
                    _courseInfo += "備註:" + _course.Other + "\n";
                    ui_table.Cells[j, i].Button.onClick.AddListener(() => MsgBox.ScrollMsg(_course.Name,_courseInfo));
                    ui_table.Cells[j, i].SetColor(new Color32(64, 64, 96, 255));
                    ui_table.Cells[j, i].SetTextColor(Color.white);
                }
            }
        }

        LayoutRebuilder.ForceRebuildLayoutImmediate(ui_table.transform.parent.GetComponent<RectTransform>());
    }
}
