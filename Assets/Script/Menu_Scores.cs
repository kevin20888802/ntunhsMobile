using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Menu_Scores : UI_Menu
{
    public MainSystem MainSystem;
    public MenuManager MenuManager;
    public UI_Table_Text ui_table_score;
    public UI_Table_Text ui_table_rank;

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
        Dictionary<string, object> _data = MainSystem.GetScoresNow();
        Dictionary<string, object>[] _scoreData = ((JArray)_data["scores"]).ToObject<Dictionary<string, object>[]>();
        Dictionary<string, string>[] _rankData = ((JArray)_data["ranks"]).ToObject<Dictionary<string, string>[]>();
        Debug.Log(_scoreData.Length);
        string[,] _tableData_score = new string[_scoreData.Length + 1,6];

        _tableData_score[0, 0] = "課程名稱/代碼";
        _tableData_score[0, 1] = "類型";
        _tableData_score[0, 2] = "班級";
        _tableData_score[0, 3] = "學分";
        _tableData_score[0, 4] = "成績";
        _tableData_score[0, 5] = "教授";

        for (int i = 1; i < _scoreData.Length + 1; i++)
        {
            string _scoreName = _scoreData[i - 1]["Name"].ToString().Insert(8, "\n");
            _tableData_score[i, 0] = _scoreName;
            _tableData_score[i, 1] = (string)_scoreData[i - 1]["Type"];
            _tableData_score[i, 2] = (string)_scoreData[i - 1]["Class"];
            _tableData_score[i, 3] = (string)_scoreData[i - 1]["Credit"];
            if ((string)_scoreData[i - 1]["Score"] == "")
            {
                _tableData_score[i, 4] = "無";
            }
            else
            {
                _tableData_score[i, 4] = (string)_scoreData[i - 1]["Score"];
            }
            _tableData_score[i, 5] = (string)_scoreData[i - 1]["Teacher"];
        }

        ui_table_score.Setup(_tableData_score);

        for (int i = 1; i < ui_table_score.Cells.GetLength(0); i += 2)
        {
            ui_table_score.SetRowColor(i, new Color32(192, 192, 192, 255));
        }

        for (int i = 1; i < ui_table_score.Cells.GetLength(0); i++)
        {
            ui_table_score.SetRowFontSize(i, 35);
        }
        ui_table_score.SetColumnTextBestFit(0, true);
        ui_table_score.SetRowColor(0, new Color32(64, 64, 64, 255));
        ui_table_score.SetRowFontColor(0, Color.white);
        ui_table_score.SetRowFontSize(0, 40);

        ui_table_score.SetColumnWidth(0, 225);
        ui_table_score.SetColumnWidth(2, 150);
        ui_table_score.SetColumnWidth(3, 50);
        ui_table_score.SetColumnWidth(5, 125);


        string[,] _tableData_rank = new string[_rankData.Length, 2];
        for (int i = 0; i < _rankData.Length; i++)
        {
            _tableData_rank[i, 0] = _rankData[i]["id"];
            _tableData_rank[i, 1] = _rankData[i]["name"];
        }

        ui_table_rank.Setup(_tableData_rank);

        ui_table_rank.SetColumnWidth(0, 250);
        ui_table_rank.SetColumnWidth(1, 500);
        for (int i = 0; i < ui_table_rank.Cells.GetLength(0); i++)
        {
            ui_table_rank.SetRowFontSize(i, 40);
        }
        for (int i = 1; i < ui_table_rank.Cells.GetLength(0); i += 2)
        {
            ui_table_rank.SetRowColor(i, new Color32(192, 192, 192, 255));
        }

        LayoutRebuilder.ForceRebuildLayoutImmediate(ui_table_rank.transform.parent.GetComponent<RectTransform>());
    }
}
