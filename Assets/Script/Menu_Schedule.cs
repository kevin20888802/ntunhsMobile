using kevin20888802.MsgBox;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Menu_Schedule : UI_Menu
{
    public MainSystem MainSystem;
    public MenuManager MenuManager;
    public UI_Table_Text ui_table;
    public UI_Table_Text ui_detail_table;
    public GameObject ui_detail;
    public Schedule TheSchedule;
    public Course SelectedCourse;

    public override IEnumerator EnterMenu()
    {
        MainSystem = MainSystem.instance;
        MainSystem.Loading = true;
        MainSystem.LoginCheck();
        yield return new WaitForSeconds(0.25f);
        if (MainSystem.log_status == true)
        {
            ui_detail.SetActive(false);
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
        TheSchedule = MainSystem.GetSchedule();
        Schedule _theSchedule = TheSchedule;
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
                    ui_table.Cells[j, i].Button.onClick.AddListener(() => ShowDetail(_course));
                    ui_table.Cells[j, i].SetColor(new Color32(64, 64, 96, 255));
                    ui_table.Cells[j, i].SetTextColor(Color.white);
                }
            }
        }

        LayoutRebuilder.ForceRebuildLayoutImmediate(ui_table.transform.parent.GetComponent<RectTransform>());
    }

    public void ShowDetail(Course i_course)
    {
        ui_detail.SetActive(true);

        string[,] _tableData = new string[7, 2];
        _tableData[0, 0] = i_course.Name;

        _tableData[1, 0] = "教室";
        _tableData[1, 1] = i_course.Place;
        _tableData[2, 0] = "節次";
        _tableData[2, 1] = i_course.Period;
        _tableData[3, 0] = "學分";
        _tableData[3, 1] = i_course.Credit;
        _tableData[4, 0] = "課程性質";
        _tableData[4, 1] = i_course.Type;
        _tableData[5, 0] = "授課老師";
        _tableData[5, 1] = i_course.Teacher;
        _tableData[6, 0] = "備註";
        _tableData[6, 1] = i_course.Other;

        ui_detail_table.Setup(_tableData);


        ui_detail_table.SetColumnWidth(0, 150);
        ui_detail_table.SetColumnWidth(1, 600);

        for (int i = 0; i < ui_detail_table.Cells.GetLength(0); i++)
        {
            ui_detail_table.SetRowFontSize(i, 40);
            ui_detail_table.SetRowHeight(i, 150);
        }

        ui_detail_table.SetRowFontSize(0, 60);
        ui_detail_table.Cells[0, 0].Text.resizeTextForBestFit = true;
        ui_detail_table.Cells[0, 0].Text.resizeTextMaxSize = 100;
        ui_detail_table.SetRowHeight(0, 250);
        ui_detail_table.SetRowColor(0, new Color32(64, 64, 64, 255));
        ui_detail_table.SetRowFontColor(0, Color.white);
        for (int j = 1; j < ui_detail_table.Cells.GetLength(0); j += 2)
        {
            ui_detail_table.SetRowColor(j, new Color32(192, 192, 192, 255));
        }

        ui_detail_table.MergeCells(new Vector2(0, 0), new Vector2(0, 1));

        SelectedCourse = i_course;
    }

    public void SetNotify()
    {
        DateTime notifyTime = GetNextWeekday(DateTime.Now,(DayOfWeek)Convert.ToInt32(SelectedCourse.Day));
        string[] _tmp = TheSchedule.Period[Convert.ToInt32(SelectedCourse.Period.Split('~')[0])].Split('~')[0].Split(':');
        TimeSpan course_period = (new TimeSpan(Convert.ToInt32(_tmp[0]), Convert.ToInt32(_tmp[1]), 0)).Subtract(new TimeSpan(0,30,0));
        notifyTime = notifyTime.Date + course_period; 
        MainSystem.SetNotify("上課時間:" + SelectedCourse.Time, notifyTime);
        MsgBox.Msg("已設定提醒", "已設定提醒\n提醒時間:" + notifyTime.ToString());
    }
    public static DateTime GetNextWeekday(DateTime start, DayOfWeek day)
    {
        // The (... + 7) % 7 ensures we end up with a value in the range [0, 6]
        int daysToAdd = ((int)day - (int)start.DayOfWeek + 7) % 7;
        return start.AddDays(daysToAdd);
    }
}
