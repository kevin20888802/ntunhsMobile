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
    public Schedule schedule = new Schedule();
    public List<UI_CourseSearchCell> resultCells = new List<UI_CourseSearchCell>();

    public GameObject ResultView;
    public GameObject ScheduleView;
    public Transform ResultCells;
    public GameObject DetailWindow;
    public UI_Table_Text ui_table;
    public UI_Table_Text schedule_table;
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
        ScheduleView.SetActive(false);
        ResultView.SetActive(true);
        Page = 0;
        RefreshResult();
        MainSystem.Loading = false;
    }

    public void RefreshResult()
    {
        DetailWindow.SetActive(false);
        resultCells.Clear();
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
                    resultCells.Add(_cell);
                    _cell.Menu_CourseSearch_Result = this;
                    _cell.Data = new Course_Detail(_data[i]);
                    _cell.UpdateShow();
                    _cell.gameObject.SetActive(true);
                }
            }
        }
        ui_page.text = (Page + 1) + "/" + TotalPage();
        ResultCellBtnUpdate();
    }
    public void ExportSchedule()
    {
#if UNITY_ANDROID 
        ScreenCapture.CaptureScreenshot("模擬課表.png");
        Application.OpenURL("file:///" +  Application.persistentDataPath + "模擬課表.png");
#endif
#if UNITY_IPHONE
        ScreenCapture.CaptureScreenshot("模擬課表.png");
        Application.OpenURL("file:///" + Application.persistentDataPath + "模擬課表.png");
#endif
#if UNITY_EDITOR 
        ScreenCapture.CaptureScreenshot("C:/Users/Public/Pictures/模擬課表.png");
        Application.OpenURL("file:///" + "C:/Users/Public/Pictures/" + "模擬課表.png");
#endif
    }

    public void ResultCellBtnUpdate()
    {
        for (int i = 0; i < resultCells.Count; i++)
        {
            resultCells[i].AddBtn.interactable = !schedule.PeriodHasCourse(resultCells[i].Data);
        }
    }

    public void RefreshSchedule()
    {
        Schedule _theSchedule = schedule;
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
                if (_theSchedule.Courses[i, j] != null)
                {
                    Course _course = _theSchedule.Courses[i, j];
                    _scheduleTable[j, i] = _course.Name + "\n" + _course.Place + "";
                }
            }
        }
        schedule_table.Setup(_scheduleTable);

        // 時段cells外觀設定
        schedule_table.SetRowFontSize(0, 30);
        schedule_table.SetRowColor(0, new Color32(64, 64, 64, 255));
        schedule_table.SetRowFontColor(0, Color.white);

        for (int i = 1; i < schedule_table.Cells.GetLength(0); i += 2)
        {
            schedule_table.SetRowColor(i, new Color32(192, 192, 192, 255));
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
                    schedule_table.Cells[j, i].Button.onClick.AddListener(() => RemoveScheduleCourse(_course));
                    schedule_table.Cells[j, i].SetColor(new Color32(64, 64, 96, 255));
                    schedule_table.Cells[j, i].SetTextColor(Color.white);
                }
            }
        }

        LayoutRebuilder.ForceRebuildLayoutImmediate(schedule_table.transform.parent.GetComponent<RectTransform>());
    }

    public void AddScheduleCourse(Course i_course)
    {
        schedule.AddCourse(i_course);
        ResultCellBtnUpdate();
    }

    public void RemoveScheduleCourse(Course i_course)
    {
        schedule.RemoveCourse(i_course);
        RefreshSchedule();
        ResultCellBtnUpdate();
    }

    public void ShowDetail(Course_Detail i_course)
    {
        DetailWindow.SetActive(true);
        course_plan_url = i_course.Class_Plan;

        string[,] _tableData = new string[14, 2];
        _tableData[0, 0] = i_course.Name;

        _tableData[1, 0] = "學期"; 
        _tableData[1, 1] = i_course.Sem;
        _tableData[2, 0] = "系所名稱";
        _tableData[2, 1] = i_course.Faculty_Name;
        _tableData[3, 0] = "年級";
        _tableData[3, 1] = i_course.Grad;
        _tableData[4, 0] = "課程代碼";
        _tableData[4, 1] = i_course.FullCode;
        _tableData[5, 0] = "上課班組";
        _tableData[5, 1] = i_course.Class_Name;
        _tableData[6, 0] = "授課老師";
        _tableData[6, 1] = i_course.Teacher;
        _tableData[7, 0] = "課別";
        _tableData[7, 1] = i_course.Type;
        _tableData[8, 0] = "學分";
        _tableData[8, 1] = i_course.Credit;
        _tableData[9, 0] = "星期";
        _tableData[9, 1] = i_course.Day;
        _tableData[10, 0] = "節次";
        _tableData[10, 1] = i_course.Time;
        _tableData[11, 0] = "限制人數";
        _tableData[11, 1] = i_course.Limit_People;
        _tableData[12, 0] = "地點";
        _tableData[12, 1] = i_course.Place;
        _tableData[13, 0] = "備註";
        _tableData[13, 1] = i_course.Other;

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
            RefreshResult();
        }
    }
    public void BackPage()
    {
        if (Page - 1 >= 0)
        {
            Page -= 1;
            RefreshResult();
        }
    }

    public void OpenCoursePlan()
    {
        Application.OpenURL(course_plan_url);
    }
}
