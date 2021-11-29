using Newtonsoft.Json.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Menu_LearnMap : UI_Menu
{
    public MainSystem MainSystem;
    public MenuManager MenuManager;
    public UI_Table_Text ui_table;

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
        Dictionary<string, object> _data = MainSystem.GetLearnMap();
        Dictionary<string, string> _creditObj = ((JObject)_data["creditHisSummaryObject"]).ToObject<Dictionary<string, string>>();
        Dictionary<string, string>[] _creditDataList = ((JArray) _data["creditHisObjectList"]).ToObject<Dictionary<string, string>[]>();
        Dictionary<string, object>[] _proList = ((JArray)_data["program"]).ToObject<Dictionary<string, object>[]>();

        string[,] _tableData = new string[1 + 4 + 1 + _creditDataList.Length + _proList.Length * 2 + 1, 4];
        _tableData[1, 0] = "畢業學分";
        _tableData[1, 1] = _creditObj["totalCreditsTook"];
        _tableData[1, 2] = "/";
        _tableData[1, 3] = _creditObj["totalCreditsShouldTake"];
        _tableData[2, 0] = "通識必修";
        _tableData[2, 1] = _creditObj["commonRequiredTook"];
        _tableData[2, 2] = "/";
        _tableData[2, 3] = _creditObj["commonRequiredShouldTake"];
        _tableData[3, 0] = "專業必修";
        _tableData[3, 1] = _creditObj["professionalRequiredTook"];
        _tableData[3, 2] = "/";
        _tableData[3, 3] = _creditObj["professionalRequiredShouldTake"];
        _tableData[4, 0] = "選修學分";
        _tableData[4, 1] = _creditObj["electiveTook"];
        _tableData[4, 2] = "/";
        _tableData[4, 3] = _creditObj["electiveShouldTake"];

        for (int i = 6; i < _creditDataList.Length + 6; i++)
        {
            _tableData[i, 0] = _creditDataList[i - 6]["semNo"] + "學分";
            _tableData[i, 1] = _creditDataList[i - 6]["totalCreditsTook"];
            _tableData[i, 2] = "/";
            _tableData[i, 3] = _creditDataList[i - 6]["totalCreditsShouldTake"];
        }

        for (int i = 0,j = 0; i < _proList.Length * 2; j++ ,i += 2)
        {
            Dictionary<string, object>[] _proCourses = ((JArray)_proList[j]["course"]).ToObject<Dictionary<string, object>[]>();
            _tableData[i + _creditDataList.Length + 7, 0] = (string)_proList[j]["key"];
            _tableData[i + _creditDataList.Length + 7, 1] = ((long)_proList[j]["credit"]).ToString();
            for (int k = 0; k < _proCourses.Length; k++)
            {
                _tableData[i + _creditDataList.Length + 7 + 1, 0] += (string)_proCourses[k]["name"] + "(" + (long)_proCourses[k]["credit"] + ")\n";
            }
        }

        ui_table.Setup(_tableData);

        for (int j = 1; j < ui_table.Cells.GetLength(0); j += 2)
        {
            ui_table.SetRowColor(j, new Color32(192, 192, 192, 255));
        }
        ui_table.SetRowColor(0, new Color32(64, 64, 64, 255));
        ui_table.SetRowColor(_creditDataList.Length + 6, new Color32(64, 64, 64, 255));

        ui_table.SetColumnTextBestFit(0, true);
        ui_table.SetColumnTextBestFit(1, true);
        ui_table.SetColumnTextBestFit(2, true);
        ui_table.SetColumnTextBestFit(3, true);

        ui_table.SetColumnWidth(0, 300);
        ui_table.SetColumnWidth(1, 175);
        ui_table.SetColumnWidth(2, 50);
        ui_table.SetColumnWidth(3, 175);

        LayoutRebuilder.ForceRebuildLayoutImmediate(ui_table.transform.parent.GetComponent<RectTransform>());

        for (int i = 0; i < _proList.Length * 2; i += 2)
        {
            ui_table.MergeCells(new Vector2(i + _creditDataList.Length + 7, 1), new Vector2(i + _creditDataList.Length + 7, 3));
            ui_table.SetRowHeight(i + _creditDataList.Length + 7 + 1, 300);
            ui_table.MergeCells(new Vector2(i + _creditDataList.Length + 7 + 1, 0), new Vector2(i + _creditDataList.Length + 7 + 1, 3));
        }

        ui_table.SetRowHeight(0, 50);
        ui_table.SetRowHeight(_creditDataList.Length + 6, 25);

        LayoutRebuilder.ForceRebuildLayoutImmediate(ui_table.transform.parent.GetComponent<RectTransform>());
    }
}
