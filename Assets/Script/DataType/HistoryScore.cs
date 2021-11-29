using Newtonsoft.Json.Linq;
using System.Collections.Generic;

public class HistoryScore
{
    public SemScores[] SemScores;
    public string TotalCredit;
    public string Average;
    public string Rank;
    public string RankPercent;
    public string GPA;
    public HistoryScore(Dictionary<string, object> i_data)
    {
        Dictionary<string, object>[] _allScores = ((JArray)i_data["historyScores"]).ToObject<Dictionary<string, object>[]>();
        Dictionary<string, string>[] _Sems = ((JArray)i_data["sems"]).ToObject<Dictionary<string, string>[]>();
        Dictionary<string, string>[] _hisRank = ((JArray)i_data["historyScoresRanks"]).ToObject<Dictionary<string, string>[]>();
        SemScores = new SemScores[_Sems.Length];
        for (int i = 0; i < _Sems.Length; i++)
        {
            SemScores[i] = new SemScores(_Sems[i]["Sem"], _allScores, i, _hisRank);
        }
        
        TotalCredit = _hisRank[_Sems.Length]["Up_Credit"];
        Average = _hisRank[_Sems.Length + 1]["Up_Credit"];
        Rank = _hisRank[_Sems.Length + 2]["Up_Credit"];
        RankPercent = _hisRank[_Sems.Length + 3]["Up_Credit"];
        GPA = (string)i_data["GPA"];
    }
}

public class SemScores
{
    public string Sem;
    public HistoryCourseScore[] CourseScores;
    public string[] Credit;
    public string[] Score;
    public SemScores(string i_sem, Dictionary<string, object>[] i_data, int i_index, Dictionary<string, string>[] i_hisRankData)
    {
        Sem = i_sem;
        List<HistoryCourseScore> CourseScoreList = new List<HistoryCourseScore>();
        for (int i = 0; i < i_data.Length; i++)
        {
            if (Sem == (string)i_data[i]["Sem"])
            {
                CourseScoreList.Add(new HistoryCourseScore(i_data[i]));
            }
        }
        CourseScores = CourseScoreList.ToArray();
        Credit = new string[2];
        Score = new string[2];
        Credit[0] = i_hisRankData[i_index]["Up_Credit"];
        Credit[1] = i_hisRankData[i_index]["Down_Credit"];
        Score[0] = i_hisRankData[i_index]["Up_Score"];
        Score[1] = i_hisRankData[i_index]["Down_Score"];
    }
}

public class HistoryCourseScore
{
    public string Name;
    public string UpDown;
    public string Sem;
    public string Type;
    public string Credit;
    public string Score;
    public string Teacher;

    public HistoryCourseScore(Dictionary<string, object> i_data)
    {
        Sem = (string)i_data["Sem"];
        Name = (string)i_data["Course"];
        Type = (string)i_data["Type"];
        Teacher = i_data.ContainsKey("courseTeacher") ? (string)i_data["courseTeacher"] : "無";
        if ((string)i_data["Up_Score"] != "" & (string)i_data["Down_Score"] != "")
        {
            UpDown = "全年";
            Credit = (string)i_data["Up_Credit"] + "/" + (string)i_data["Down_Credit"];
            Score = (string)i_data["Up_Score"] + "/" + (string)i_data["Down_Score"];
        }
        else if ((string)i_data["Up_Score"] != "")
        {
            UpDown = "上";
            Credit = (string)i_data["Up_Credit"];
            Score = (string)i_data["Up_Score"];
        }
        else
        {
            UpDown = "下";
            Credit = (string)i_data["Down_Credit"];
            Score = (string)i_data["Down_Score"];
        }
    }
}

