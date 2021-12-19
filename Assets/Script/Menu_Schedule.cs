using kevin20888802.MsgBox;
using System;
using System.Collections;
using System.Collections.Generic;
#if UNITY_ANDROID
using Unity.Notifications.Android;
#endif
#if UNITY_IPHONE
using Unity.Notifications.iOS;
#endif
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
    public Button NotifyBtn;
    public Dropdown NotifyTimeDropdown;
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
            ResetAllScheduleNotifys();
        }
        else
        {
            MenuManager.LogOut();
        }
        MainSystem.Loading = false;
    }
    private void Update()
    {
        
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
        SelectedCourse = i_course;
        NotifyDetailUpdate();
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
    }

    public void SetNotify()
    {
        DateTime notifyTime = GetNotifyTime(SelectedCourse);
        string _notifyName = SelectedCourse.FullCode + SelectedCourse.Name + "_notify";
        int _notifyEnabled = 0;
        if (!PlayerPrefs.HasKey(_notifyName))
        {
            PlayerPrefs.SetInt(_notifyName, 0);
        }
        _notifyEnabled = PlayerPrefs.GetInt(_notifyName);
        if (_notifyEnabled == 0)
        {
            MsgBox.Msg("已設定提醒", "已設定提醒\n提醒時間:" + notifyTime.ToString());
            PlayerPrefs.SetInt(_notifyName, 1);
            PlayerPrefs.SetInt(_notifyName + "_Time", Convert.ToInt32(NotifyTimeDropdown.options[NotifyTimeDropdown.value].text));
        }
        else
        {
            MsgBox.Msg("已取消提醒", "已取消提醒");
            PlayerPrefs.SetInt(_notifyName, 0);
        }
        NotifyDetailUpdate();
        ResetAllScheduleNotifys();
    }
    public void TimeDropdownUpdated()
    {
        if (ui_detail.activeSelf == true)
        {
            string _notifyName = SelectedCourse.FullCode + SelectedCourse.Name + "_notify";
            PlayerPrefs.SetInt(_notifyName + "_Time", Convert.ToInt32(NotifyTimeDropdown.options[NotifyTimeDropdown.value].text));
            TurnOffNotify();
        }
    }

    public void TurnOffNotify()
    {
        string _notifyName = SelectedCourse.FullCode + SelectedCourse.Name + "_notify";
        int _notifyEnabled = PlayerPrefs.GetInt(SelectedCourse.FullCode + SelectedCourse.Name + "_notify");
        if (_notifyEnabled == 1)
        {
            PlayerPrefs.SetInt(_notifyName, 0);
            MsgBox.Msg("已取消提醒", "已取消提醒，請重新設定。");
            NotifyDetailUpdate();
        }
    }
    public void NotifyDetailUpdate()
    {
        string _notifyName = SelectedCourse.FullCode + SelectedCourse.Name + "_notify";
        int _notifyEnabled = PlayerPrefs.GetInt(SelectedCourse.FullCode + SelectedCourse.Name + "_notify");
        if (_notifyEnabled == 0)
        {
            NotifyBtn.image.color = new Color32(164, 255, 164, 255);
            NotifyBtn.transform.Find("Text").GetComponent<Text>().text = "下次上課前提醒";
        }
        else
        {
            NotifyBtn.image.color = new Color32(255, 164, 164, 255);
            NotifyBtn.transform.Find("Text").GetComponent<Text>().text = "取消提醒";
        }
        int _notifyAddTime = PlayerPrefs.GetInt(_notifyName + "_Time", Convert.ToInt32(NotifyTimeDropdown.options[NotifyTimeDropdown.value].text));
        for (int i = 0; i < NotifyTimeDropdown.options.Count; i++)
        {
            if (NotifyTimeDropdown.options[i].text == _notifyAddTime.ToString())
            {
                NotifyTimeDropdown.value = i;
                break;
            }
        }
    }

    public void ResetAllScheduleNotifys()
    {
#if UNITY_ANDROID
        AndroidNotificationCenter.CancelAllScheduledNotifications();
#endif
#if UNITY_IPHONE
        iOSNotificationCenter.RemoveAllScheduledNotifications();
#endif
        string _d_timeList = "";
        List<string> _notifyList = new List<string>();
        for (int i = 0; i < TheSchedule.Courses.GetLength(0); i++)
        {
            for (int j = 0; j < TheSchedule.Courses.GetLength(1); j++)
            {
                if (TheSchedule.Courses[i, j] != null)
                {
                    Course _theCourse = TheSchedule.Courses[i, j];
                    string _notifyName = _theCourse.FullCode + _theCourse.Name + "_notify";
                    DateTime notifyTime = GetNotifyTime(_theCourse);
                    if (DateTime.Now >= notifyTime)
                    {
                        notifyTime = notifyTime.AddDays(7);
                    }
                    if (PlayerPrefs.HasKey(_theCourse.FullCode + _theCourse.Name + "_notify") & PlayerPrefs.HasKey(_notifyName + "_Time"))
                    {
                        int _notifyEnabled = PlayerPrefs.GetInt(_theCourse.FullCode + _theCourse.Name + "_notify");
                        if (_notifyEnabled == 1)
                        {
                            if (DateTime.Now <= notifyTime & !_notifyList.Contains(_notifyName))
                            {
                                Debug.Log("設定提醒時間:" + _notifyName + notifyTime);
                                MainSystem.SetNotify(_theCourse.Name + "\n上課時間:" + _theCourse.Time, notifyTime);
                                _notifyList.Add(_notifyName);
                            }
                        }
                    }
                    else
                    {
                        PlayerPrefs.SetInt(_notifyName, 1);
                        Debug.Log("設定提醒時間:" + _notifyName + notifyTime);
                        MainSystem.SetNotify(_theCourse.Name + "\n上課時間:" + _theCourse.Time, notifyTime);
                        PlayerPrefs.SetInt(_notifyName + "_Time", 30);
                    }
                    _d_timeList += _theCourse.FullCode + _theCourse.Name + " - 提醒時間:前" + GetNotifyAddTime(_theCourse) + "分鐘\n"; 
                }
            }
        }
        //Debug.Log(_d_timeList);
    }
    public int GetNotifyAddTime(Course i_course)
    {
        return PlayerPrefs.GetInt(i_course + "_Time", Convert.ToInt32(NotifyTimeDropdown.options[NotifyTimeDropdown.value].text));
    }
    public DateTime GetNotifyTime(Course i_course)
    {
        DateTime _tmpTime = GetNextWeekday(DateTime.Now, (DayOfWeek)Convert.ToInt32(i_course.Day));
        string[] _tmp = TheSchedule.Period[Convert.ToInt32(i_course.Period.Split('~')[0])].Split('~')[0].Split(':');
        int _notifyAddTime = GetNotifyAddTime(i_course);
        TimeSpan course_period = (new TimeSpan(Convert.ToInt32(_tmp[0]), Convert.ToInt32(_tmp[1]), 0)).Subtract(new TimeSpan(0, _notifyAddTime, 0));
        _tmpTime = _tmpTime.Date + course_period;
        if (DateTime.Now >= _tmpTime)
        {
            _tmpTime = _tmpTime.AddDays(7);
        }
        return _tmpTime;
    }

    public static DateTime GetNextWeekday(DateTime start, DayOfWeek day)
    {
        // The (... + 7) % 7 ensures we end up with a value in the range [0, 6]
        int daysToAdd = ((int)day - (int)start.DayOfWeek + 7) % 7;
        return start.AddDays(daysToAdd);
    }
}
