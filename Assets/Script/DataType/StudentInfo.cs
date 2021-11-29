using Newtonsoft.Json.Linq;
using System.Collections.Generic;
using System.Data;
using UnityEngine;
public class StudentInfo
{
    public string system;
    public string faculty;
    public string stuName;
    public string stuNum;
    public string[] allSemno;

    public StudentInfo(Dictionary<string, object> i_jsonDataSet)
    {
        system = (string)i_jsonDataSet["system"];
        faculty = (string)i_jsonDataSet["faculty"];
        stuName = (string)i_jsonDataSet["stuName"];
        stuNum = (string)i_jsonDataSet["stuNum"];
        allSemno = ((JArray)i_jsonDataSet["allSemno"]).ToObject<string[]>();
    }
}
