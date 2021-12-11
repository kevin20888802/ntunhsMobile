using System.Collections.Generic;
// 課程資訊
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

    public Course()
    {
    }
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

// 課程資訊詳細版
public class Course_Detail : Course
{
    public string Class_Name;
    public string Sem;
    public string Grad;
    public string Faculty_Name;
    public string Limit_People;
    public string Class_Plan;

    public Course_Detail(Dictionary<string, string> i_data) : base()
    {
        Name = i_data["Course_Name"];
        Class_Name = i_data["Class_Name"];
        FullCode = i_data["Course_Id"];
        Type = i_data["Course_Type"];
        Period = i_data["Period"];
        Day = i_data["Course_Day"];
        Time = i_data["Course_Time"];
        Credit = i_data["Credits"];
        FullCode = i_data["Course_Code"];
        Teacher = i_data["Open_Teacher"];
        Sem = i_data["Sem"];
        Grad = i_data["Grad"];
        Place = i_data["Course_Place"];
        Other = i_data["Course_Other"];
        Faculty_Name = i_data["Faculty_Name"];
        Limit_People = i_data["Limit_People"];
        Class_Plan = i_data["Class_Plan"];
    }

}