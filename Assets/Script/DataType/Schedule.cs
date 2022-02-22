using Newtonsoft.Json.Linq;
using System;
using System.Collections.Generic;
using UnityEngine;

public class Schedule
{

    public string[] Period; // [Day]
    public Course[,] Courses; // [Day,Period]


    /// <summary>
    /// Simulation Init.
    /// </summary>
    public Schedule()
    {
        Period = new string[15];
        Period[1] = "08:10~09:00";
        Period[2] = "09:10~10:00";
        Period[3] = "10:10~11:00";
        Period[4] = "11:10~12:00";
        Period[5] = "12:40~13:30";
        Period[6] = "13:40~14:30";
        Period[7] = "14:40~15:30";
        Period[8] = "15:40~16:30";
        Period[9] = "16:40~17:30";
        Period[10] = "17:40~18:30";
        Period[11] = "18:35~19:25";
        Period[12] = "19:30~20:20";
        Period[13] = "20:25~21:15";
        Period[14] = "21:20~22:10";
        Courses = new Course[8, Period.Length];
    }

    /// <summary>
    /// Init From JSON.
    /// </summary>
    public Schedule(Dictionary<string, object> i_jsonDataSet)
    {
        Dictionary<string, object>[] allPeriod = ((JArray)i_jsonDataSet["schedule"]).ToObject<Dictionary<string, object>[]>();
        Period = new string[allPeriod.Length + 1];
        for (int i = 0; i < allPeriod.Length; i++)
        {
            Period[i + 1] = (string)allPeriod[i]["Time"];
            //Debug.Log(Period[i]);
        }

        Courses = new Course[8, Period.Length];
        Dictionary<string, string>[] allCourse = ((JArray)i_jsonDataSet["courses"]).ToObject<Dictionary<string, string>[]>();
        for (int i = 0; i < allCourse.Length; i++)
        {
            int _day = Convert.ToInt32(allCourse[i]["Day"]);
            string[] _periods = allCourse[i]["Period"].Split('~');
            int _startPeriod = Convert.ToInt32(_periods[0]);
            int _endPeriod = _startPeriod;
            if (_periods.Length > 1)
            {
                _endPeriod = Convert.ToInt32(_periods[1]);
            }
            Course _thisCourse = new Course(allCourse[i]);
            for (int j = _startPeriod; j <= _endPeriod; j++)
            {
                Courses[_day, j] = _thisCourse;
            }
        }
    }
    public void AddCourse(Course i_course)
    {
        string[] _periods = i_course.Period.Split('~');
        int _startPeriod = Convert.ToInt32(_periods[0]);
        int _endPeriod = Convert.ToInt32(_periods[1]);
        for (int i = _startPeriod; i <= _endPeriod; i++)
        {
            Courses[Convert.ToInt32(i_course.Day), i] = i_course;
        }
    }
    public void RemoveCourse(Course i_course)
    {
        for (int i = 0; i < Courses.GetLength(0); i++)
        {
            for (int j = 0; j < Courses.GetLength(1); j++)
            {
                if (Courses[i, j] != null)
                {
                    if (Courses[i, j].FullCode == i_course.FullCode & Courses[i, j].Name == i_course.Name)
                    {
                        Courses[i, j] = null;
                    }
                }
            }
        }
    }
    public bool PeriodHasCourse(Course i_course)
    {
        int _day = Convert.ToInt32(i_course.Day);
        string[] _periods = i_course.Period.Split('~');
        int _startPeriod = Convert.ToInt32(_periods[0]);
        int _endPeriod = Convert.ToInt32(_periods[1]);
        for (int i = _startPeriod; i <= _endPeriod; i++)
        {
            if (Courses[_day, i] != null)
            {
                return true;
            }
        }
        return false;
    }
}