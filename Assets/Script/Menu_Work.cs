using kevin20888802.MsgBox;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Net.Http;
using UnityEngine;
using UnityEngine.UI;

public class Menu_Work : UI_Menu
{
    public MainSystem MainSystem;
    public MenuManager MenuManager;

    public CourseWork SelectedWork;
    public Transform UIWorkScrollContent;
    public GameObject DetailWindow;
    public UI_Table_Text ui_table;
    public Dropdown courseSelect;

    private HttpClient client = new HttpClient();
    public string server_url;

    public List<string> CourseList = new List<string>();

    public override IEnumerator EnterMenu()
    {
        MainSystem = MainSystem.instance;
        MainSystem.Loading = true;
        MainSystem.LoginCheck();
        yield return new WaitForSeconds(0.25f);
        if (MainSystem.log_status == true)
        {
            string _savedAddress = PlayerPrefs.HasKey("iLMS_IP") ? PlayerPrefs.GetString("iLMS_IP") : "";
            CoroutineWithData i_ip_msgbox = new CoroutineWithData(this, MsgBox.MsgInputProcess("伺服器位址/網址","請輸入iLMS api伺服器的網址/位址。", _savedAddress));
            yield return i_ip_msgbox.coroutine;
            server_url = "http://" + (string)i_ip_msgbox.result + "/";
            string LoginStatus = Login();
            if (LoginStatus != "")
            {
                Debug.Log("登入狀態=" + LoginStatus);
                PlayerPrefs.SetString("iLMS_IP", (string)i_ip_msgbox.result);
                CourseList = GetCourseList();
                if (CourseList == null)
                {
                    MsgBox.Msg("資料取得失敗", "無法取得課程列表。");
                    MenuManager.SwitchMenu("LearnInfo");
                }
                else
                {
                    courseSelect.options.Clear();
                    for (int i = 0; i < CourseList.Count; i++)
                    {
                        courseSelect.options.Add(new Dropdown.OptionData(CourseList[i]));
                    }
                    courseSelect.RefreshShownValue();
                    UpdateWorkList();
                }
            }
            else
            {
                MsgBox.Msg("連線失敗", "無法連線到iLMS的Api。");
                MenuManager.SwitchMenu("LearnInfo");
            }
        }
        else
        {
            //MsgBox.Msg("連線逾時", "因長時間沒有動作\n學校已將您登出\n請重新登入");
            MenuManager.LogOut();
        }
        MainSystem.Loading = false;
    }

    public string Login()
    {
        try
        {
            var values = new Dictionary<string, string>
            {
                { "username", PlayerPrefs.GetString("userid") },
                { "password", PlayerPrefs.GetString("userpw") }
            };
            var content = new FormUrlEncodedContent(values);
            var response = client.PostAsync(server_url + "login", content);
            var log_response = response.Result;
            Debug.Log("登入回傳:" + log_response);
            return log_response.StatusCode.ToString();
        }
        catch(Exception ex)
        {
            MsgBox.ScrollMsg("連線失敗", "連線失敗:" + ex.Message);
            return "";
        }
    }
    public void ShowDetail(CourseWork i_data)
    {
        SelectedWork = i_data;
        DetailWindow.SetActive(true);

        string[,] _tableData = new string[5, 2];
        _tableData[0, 0] = i_data.Title;

        _tableData[1, 0] = "類型";
        _tableData[1, 1] = i_data.Type;
        _tableData[2, 0] = "趴數";
        _tableData[2, 1] = i_data.Percent;
        _tableData[3, 0] = "期限";
        _tableData[3, 1] = i_data.Term;
        _tableData[4, 0] = "內容";
        _tableData[4, 1] = i_data.Description;

        ui_table.Setup(_tableData);

        ui_table.SetColumnWidth(0, 150);
        ui_table.SetColumnWidth(1, 600);

        for (int i = 0; i < ui_table.Cells.GetLength(0); i++)
        {
            ui_table.SetRowFontSize(i, 40);
            ui_table.SetRowHeight(i, 150);
        }
        ui_table.SetRowHeight(4, Math.Max(((int)(i_data.Description.Length / 20)) + 1,1) * 150);

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

        ui_table.MergeCells(new Vector2(0, 0), new Vector2(0, 1));
    }
    public void OpenSelectedWorkSource()
    {
        if (SelectedWork != null)
        {
            Application.OpenURL(SelectedWork.Link);
        }
    }
    public void UpdateWorkList()
    {
        StartCoroutine(WorkListUpdateProcess());
    }
    public IEnumerator WorkListUpdateProcess()
    {
        MainSystem.Loading = true;
        yield return new WaitForSeconds(0.15f);
        string i_courseName = courseSelect.options[courseSelect.value].text;
        try
        {
            MainSystem.DestroyAllChild(UIWorkScrollContent);
            var responseString = client.GetStringAsync(server_url + "api/getworklist?course_name=" + i_courseName);
            Dictionary<string, object> rawData = JsonConvert.DeserializeObject<Dictionary<string, object>>(responseString.Result);
            foreach (var workData in rawData)
            {
                CourseWork _data = new CourseWork(((JObject)workData.Value).ToObject<Dictionary<string, string>>());
                UI_CourseWork_Cell _cell = Instantiate(Resources.Load<GameObject>("Prefab/UI/CourseWorkCell"), UIWorkScrollContent).GetComponent<UI_CourseWork_Cell>();
                _cell.Data = _data;
                _cell.Menu_Work = this;
                _cell.UpdateShow();
            }
        }
        catch (Exception ex)
        {
            MsgBox.Msg("資料取得失敗", "作業資訊取得失敗。" + ex.Message);
        }
        MainSystem.Loading = false;
    }
    public List<string> GetCourseList()
    {
        try
        {
            var responseString = client.GetStringAsync(server_url + "api/courselist");
            Dictionary<string , string> rawData = JsonConvert.DeserializeObject<Dictionary<string, string>>(responseString.Result);
            List<string> o_data = new List<string>();
            foreach (var courseName in rawData)
            {
                o_data.Add(courseName.Value);
            }
            return o_data;
        }
        catch
        {
            MsgBox.Msg("連線失敗","連線失敗");
            return null;
        }
    }
}
