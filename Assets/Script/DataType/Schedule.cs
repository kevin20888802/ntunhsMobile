using Newtonsoft.Json.Linq;
using System;
using System.Collections.Generic;
using UnityEngine;

public class Schedule
{

    public string[] Period; // [Day]
    public Course[,] Courses; // [Day,Period]


    public Schedule()
    {
    
    }

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
            int _endPeriod = Convert.ToInt32(_periods[1]);
            Course _thisCourse = new Course(allCourse[i]);
            for (int j = _startPeriod; j <= _endPeriod; j++)
            {
                Courses[_day, j] = _thisCourse;
            }
        }
    }
}

public class Course
{
    public string Name;
    public string FullCode;
    public string Place;
    public string Day;
    public string Period;
    public string Credit;
    public string Type;
    public string Teacher;
    public string Other;
    public string takeStatu;
    public string conflictStatu;
    public string Time;

    public Course(Dictionary<string, string> i_data)
    {
        Name = i_data["Name"];
        FullCode = i_data["FullCode"];
        Place = i_data["Place"];
        Day = i_data["Day"];
        Period = i_data["Period"];
        Credit = i_data["Credit"];
        Type = i_data["Type"];
        Teacher = i_data["Teacher"];
        Other = i_data["Other"];
        takeStatu = i_data["takeStatu"];
        conflictStatu = i_data["conflictStatu"];
        if (i_data.ContainsKey("Time"))
        {
            Time = i_data["Time"];
        }
    }
}