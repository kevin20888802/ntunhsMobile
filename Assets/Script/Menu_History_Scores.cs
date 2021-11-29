using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Menu_History_Scores : UI_Menu
{
    public MainSystem MainSystem;
    public MenuManager MenuManager;

    public Button ui_btn_template;
    public GameObject ui_split_template;
    public UI_Table_Text ui_table_template;

    public Transform ui_content;
    public UI_Table_Text[] ui_table_score;
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
        MainSystem.DestroyAllChild(ui_content);

        HistoryScore _data = MainSystem.GetHistoryScore();

        ui_table_score = new UI_Table_Text[_data.SemScores.Length];
        for (int i = 0; i < _data.SemScores.Length; i++)
        {
            SemScores _allScoreData = _data.SemScores[i];
            UI_Table_Text _table = Instantiate(ui_table_template.gameObject,ui_content).GetComponent<UI_Table_Text>();
            _table.gameObject.name = "UI_Table_Score_" + _data.SemScores[i].Sem;
            _table.gameObject.SetActive(false);

            string[,] _tableData_Score = new string[_allScoreData.CourseScores.Length + 1 + 7, 5];
            _tableData_Score[0, 0] = "課程名稱/代碼";
            _tableData_Score[0, 1] = "類型";
            _tableData_Score[0, 2] = "學分";
            _tableData_Score[0, 3] = "成績";
            _tableData_Score[0, 4] = "教授";

            for (int j = 1; j < _allScoreData.CourseScores.Length + 1; j++)
            {
                HistoryCourseScore _scoreData = _allScoreData.CourseScores[j - 1];
                if (_scoreData != null)
                {
                    _tableData_Score[j, 0] = _scoreData.Name.Insert(8, "\n");
                    _tableData_Score[j, 1] = _scoreData.Type;
                    _tableData_Score[j, 2] = _scoreData.Credit;
                    _tableData_Score[j, 3] = _scoreData.Score;
                    _tableData_Score[j, 4] = _scoreData.Teacher;
                }
            }
            _tableData_Score[_allScoreData.CourseScores.Length + 1 + 1, 0] = "上學期成績";
            _tableData_Score[_allScoreData.CourseScores.Length + 1 + 1, 1] = _allScoreData.Score[0];
            _tableData_Score[_allScoreData.CourseScores.Length + 1 + 2, 0] = "下學期成績";
            _tableData_Score[_allScoreData.CourseScores.Length + 1 + 2, 2] = _allScoreData.Score[1];
            _tableData_Score[_allScoreData.CourseScores.Length + 1 + 3, 0] = "學期成績平均";
            _tableData_Score[_allScoreData.CourseScores.Length + 1 + 3, 4] = ((Convert.ToDouble(_allScoreData.Score[1]) + Convert.ToDouble(_allScoreData.Score[1])) / 2).ToString();
            _tableData_Score[_allScoreData.CourseScores.Length + 1 + 4, 0] = "上學期學分";
            _tableData_Score[_allScoreData.CourseScores.Length + 1 + 4, 1] = _allScoreData.Credit[0];
            _tableData_Score[_allScoreData.CourseScores.Length + 1 + 5, 0] = "下學期學分";
            _tableData_Score[_allScoreData.CourseScores.Length + 1 + 5, 2] = _allScoreData.Credit[1];
            _tableData_Score[_allScoreData.CourseScores.Length + 1 + 6, 0] = "學年總學分";
            _tableData_Score[_allScoreData.CourseScores.Length + 1 + 6, 4] = (Convert.ToInt32(_allScoreData.Credit[0]) + Convert.ToInt32(_allScoreData.Credit[1])).ToString();

            ui_table_score[i] = _table;
            ui_table_score[i].Setup(_tableData_Score);
            ui_table_score[i].transform.SetAsFirstSibling();

            ui_table_score[i].SetRowFontSize(0, 35);
            ui_table_score[i].SetRowColor(0, new Color32(64, 64, 64, 255));
            ui_table_score[i].SetRowFontColor(0, Color.white);

            ui_table_score[i].SetColumnTextBestFit(0, true);
            ui_table_score[i].SetColumnTextBestFit(1, true);
            ui_table_score[i].SetColumnTextBestFit(2, true);
            ui_table_score[i].SetColumnTextBestFit(3, true);

            ui_table_score[i].SetColumnWidth(0, 275);
            ui_table_score[i].SetColumnWidth(1, 75);
            ui_table_score[i].SetColumnWidth(2, 75);
            ui_table_score[i].SetColumnWidth(3, 150);
            ui_table_score[i].SetColumnWidth(4, 150);

            for (int j = 1; j < ui_table_score[i].Cells.GetLength(0); j++)
            {
                ui_table_score[i].SetRowFontSize(j, 30);
            }

            for (int j = 1; j < ui_table_score[i].Cells.GetLength(0); j += 2)
            {
                ui_table_score[i].SetRowColor(j, new Color32(192, 192, 192, 255));
            }

            Button _showBtn = Instantiate(ui_btn_template.gameObject, ui_content).GetComponent<Button>();
            Text _btnText = _showBtn.transform.GetChild(0).GetComponent<Text>();
            _btnText.text = "[+]    " + _data.SemScores[i].Sem + "學年度成績";
            _showBtn.onClick.AddListener(() => BtnHideShowFunc(_showBtn, _table.gameObject));
            _showBtn.transform.SetAsFirstSibling();
        }

        Instantiate(ui_split_template.gameObject, ui_content);

        ui_table_rank = Instantiate(ui_table_template.gameObject, ui_content).GetComponent<UI_Table_Text>();
        ui_table_rank.gameObject.name = "UI_Table_Rank";

        string[,] _tableData_rank = new string[5, 2];
        _tableData_rank[0, 0] = "累計學分";
        _tableData_rank[0, 1] = _data.TotalCredit;
        _tableData_rank[1, 0] = "總平均";
        _tableData_rank[1, 1] = _data.Average;
        _tableData_rank[2, 0] = "班級排名";
        _tableData_rank[2, 1] = _data.Rank;
        _tableData_rank[3, 0] = "班級排名\n前百分比";
        _tableData_rank[3, 1] = _data.RankPercent;
        _tableData_rank[4, 0] = "GPA";
        _tableData_rank[4, 1] = _data.GPA;

        ui_table_rank.Setup(_tableData_rank);

        for (int j = 1; j < ui_table_rank.Cells.GetLength(0); j += 2)
        {
            ui_table_rank.SetRowColor(j, new Color32(192, 192, 192, 255));
        }
        ui_table_rank.SetColumnTextBestFit(0, true);
        ui_table_rank.SetColumnTextBestFit(1, true);

        ui_table_rank.SetColumnWidth(0, 300);
        ui_table_rank.SetColumnWidth(1, 450);

        LayoutRebuilder.ForceRebuildLayoutImmediate(ui_table_rank.transform.parent.GetComponent<RectTransform>());
    }

    public void BtnHideShowFunc(Button i_btn,GameObject i_obj)
    {
        Text _btnText = i_btn.transform.GetChild(0).GetComponent<Text>();
        if (i_obj.activeSelf == true)
        {
            _btnText.text = _btnText.text.Replace("[-]", "[+]");
            i_obj.SetActive(false);
        }
        else
        {
            _btnText.text = _btnText.text.Replace("[+]", "[-]");
            i_obj.SetActive(true);
        }
    }
}
