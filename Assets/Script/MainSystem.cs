using kevin20888802.MsgBox;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.Net.Http;
using UnityEngine;
using Unity.Notifications.Android;

public class MainSystem : MonoBehaviour
{
    public static MainSystem instance;
    public StudentInfo StudentInfo;
    public GameObject LoadingScreen;
    public bool Loading = false;
    public bool log_status = false;
    
    // 逾時自動登入的時間
    public float login_reset_duration = 300.0f;
    public float login_reset;
    private HttpClient client = new HttpClient();
    private string server_url = "https://mycosim.ntunhs.edu.tw/";
    public string notifyChannelID = "ntunhsMobile";
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }
    }
    private void Start()
    {
        login_reset = login_reset_duration;
        var c = new AndroidNotificationChannel()
        {
            Id = notifyChannelID,
            Name = "Default Channel",
            Importance = Importance.High,
            Description = "Generic notifications"
        };
        AndroidNotificationCenter.RegisterNotificationChannel(c);
    }
    private void FixedUpdate()
    {
        LoadingScreen.SetActive(Loading);

        if (log_status == true)
        {
            login_reset -= 0.025f;
            if (login_reset <= 0.0f)
            {
                if (PlayerPrefs.HasKey("userid") && PlayerPrefs.HasKey("userpw"))
                {
                    StartCoroutine(Login(PlayerPrefs.GetString("userid"), PlayerPrefs.GetString("userpw")));
                }
                login_reset = login_reset_duration;
            }
        }
    }
    #region NTUNHS Cosim
    /// <summary>
    /// 取得公告原始資料。
    /// </summary>
    /// <returns></returns>
    public string GetAnnouncementRaw()
    {
        try
        {
            var responseString = client.GetStringAsync(server_url + "api/announcement");
            return responseString.Result;
        }
        catch
        {
            MsgBox.Msg("連線失敗", "連線失敗");
            return "";
        }
    }
    /// <summary>
    /// 取得公告的DataSet。
    /// </summary>
    /// <returns></returns>
    public DataSet GetAnnouncement()
    {
        try
        {
            var responseString = client.GetStringAsync(server_url + "api/announcement");
            return JsonConvert.DeserializeObject<DataSet>(responseString.Result);
        }
        catch
        {
            MsgBox.Msg("連線失敗", "連線失敗");
            return null;
        }
    }
    /// <summary>
    /// 登入系統
    /// </summary>
    /// <param name="i_id">學號</param>
    /// <param name="i_pw">密碼</param>
    /// <returns></returns>
    public IEnumerator Login(string i_id,string i_pw)
    {
        Loading = true;
        yield return new WaitForFixedUpdate();
        yield return new WaitForSeconds(0.25f);
        var values = new Dictionary<string, string>
        {
            { "username", i_id },
            { "password", i_pw }
        };
        var content = new FormUrlEncodedContent(values);
        var response = client.PostAsync(server_url + "login", content);
        var log_response = response.Result;
        Debug.Log("登入回傳:" + log_response);
        var stu_info = client.GetStringAsync(server_url + "api/stuInfo").Result;
        yield return new WaitUntil(() => response.IsCompleted == true);
        Debug.Log("登入資料:" + stu_info);
        if (stu_info != "") // 有資料代表登入成功
        {
            StudentInfo = GetStudentInfo();
            log_status = true;
        }
        else // 如果嘗試登入後取得學生資訊為空值 代表登入失敗
        {
            log_status = false;
        }
        Debug.Log("登入狀態:" + log_status);
        Loading = false;
    }
    /// <summary>
    /// 更新登入狀態，查看是否過久無動作而逾時，或是網路失去連線。
    /// </summary>
    public void LoginCheck()
    {
        var stu_info = client.GetStringAsync(server_url + "api/stuInfo").Result;
        Debug.Log("登入資料:" + stu_info);
        if (stu_info != "") // 有資料代表登入成功
        {
            StudentInfo = GetStudentInfo();
            log_status = true;
        }
        else // 如果嘗試登入後取得學生資訊為空值 代表登入失敗
        {
            log_status = false;
        }
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            log_status = false;
        }
    }
    /// <summary>
    /// 登出(重置HttpClient和清空資料)。
    /// </summary>
    public void LogOut()
    {
        client = new HttpClient();
        StudentInfo = null;
    }
    /// <summary>
    /// 取得學生資訊。
    /// </summary>
    /// <returns></returns>
    public StudentInfo GetStudentInfo()
    {
        try
        {
            var responseString = client.GetStringAsync(server_url + "api/stuInfo");
            StudentInfo _info = new StudentInfo(JsonConvert.DeserializeObject<Dictionary<string, object>>(responseString.Result));
            return _info;
        }
        catch
        {
            MsgBox.Msg("連線失敗", "連線失敗");
            return null;
        }
    }
    /// <summary>
    /// 取得目前課表。
    /// </summary>
    /// <returns></returns>
    public Schedule GetSchedule()
    {
        try
        {
            var responseString = client.GetStringAsync(server_url + "api/Schedule");
            Schedule _info = new Schedule(JsonConvert.DeserializeObject<Dictionary<string, object>>(responseString.Result));
            return _info;
        }
        catch
        {
            MsgBox.Msg("連線失敗", "連線失敗");
            return null;
        }
    }
    /// <summary>
    /// 取得某年度的修課明細。
    /// </summary>
    /// <param name="i_year"></param>
    /// <returns></returns>
    public Course[] GetSemCourseList(string i_year)
    {
        try
        {
            List<Course> _data = new List<Course>();
            var response = client.GetStringAsync(server_url + "api/Course?semno=" + i_year);
            var _result = response.Result;
            Dictionary<string, string>[] _allCourse = JsonConvert.DeserializeObject<Dictionary<string, string>[]>(_result);
            for (int i = 0; i < _allCourse.Length; i++)
            {
                _data.Add(new Course(_allCourse[i]));
            }
            return _data.ToArray();
        }
        catch
        {
            MsgBox.Msg("連線失敗", "連線失敗");
            return null;
        }
    }
    /// <summary>
    /// 取得這學期的成績。
    /// </summary>
    /// <returns></returns>
    public Dictionary<string, object> GetScoresNow()
    {
        try
        {
            var responseString = client.GetStringAsync(server_url + "api/Scores");
            return JsonConvert.DeserializeObject<Dictionary<string, object>>(responseString.Result);
        }
        catch
        {
            MsgBox.Msg("連線失敗", "連線失敗");
            return null;
        }
    }
    /// <summary>
    /// 取得歷年成績。
    /// </summary>
    /// <returns></returns>
    public HistoryScore GetHistoryScore()
    {
        try
        {
            var responseString = client.GetStringAsync(server_url + "api/History_Scores");
            HistoryScore _data = new HistoryScore(JsonConvert.DeserializeObject<Dictionary<string, object>>(responseString.Result));
            return _data;
        }
        catch
        {
            MsgBox.Msg("連線失敗", "連線失敗");
            return null;
        }
    }
    /// <summary>
    /// 取得學習地圖。
    /// </summary>
    /// <returns></returns>
    public Dictionary<string, object> GetLearnMap()
    {
        try
        {
            var responseString = client.GetStringAsync(server_url + "api/learnMap");
            return JsonConvert.DeserializeObject<Dictionary<string, object>>(responseString.Result);
        }
        catch
        {
            MsgBox.Msg("連線失敗", "連線失敗");
            return null;
        }
    }
    /// <summary>
    /// 取得課程查詢可用的學期。
    /// </summary>
    /// <returns></returns>
    public string[] GetCourseSearchSems()
    {
        try
        {
            var responseString = client.GetStringAsync(server_url + "api/Course_Search/GetSem");
            return JsonConvert.DeserializeObject<string[]>(responseString.Result);
        }
        catch
        {
            MsgBox.Msg("連線失敗", "連線失敗");
            return null;
        }
    }
    /// <summary>
    /// 課程查詢。
    /// </summary>
    /// <param name="i_query">條件</param>
    /// <returns></returns>
    public Dictionary<string, string>[] CourseSearch(Dictionary<string , string> i_query)
    {
        try
        {
            /*
                $scope.EduType = [{ 'id': 'cblNewEduType_0', 'value': '二年', 'name': '二技', 'IsChecked': false }, { 'id': 'cblNewEduType_1', 'value': '進修', 'name': '二技(三年)', 'IsChecked': false }, { 'id': 'cblNewEduType_2', 'value': '四年', 'name': '四技', 'IsChecked': false }, { 'id': 'cblNewEduType_7', 'value': '學士後', 'name': '學士後系', 'IsChecked': false }, { 'id': 'cblNewEduType_4', 'value': '碩士', 'name': '碩士班', 'IsChecked': false }, { 'id': 'cblNewEduType_5', 'value': '博士', 'name': '博士班', 'IsChecked': false }];
                $scope.Faculty = [{ 'name': '護理系', 'edutype': '二年,進修,四年,碩士,博士,學士後', 'IsChecked': false, 'IsShow': true }, { 'name': '高齡健康照護系', 'edutype': '四年', 'IsChecked': false, 'IsShow': true }, { 'name': '護理助產及婦女健康系', 'edutype': '二年,碩士', 'IsChecked': false, 'IsShow': true }, { 'name': '醫護教育暨數位學習系', 'edutype': '二年,碩士', 'IsChecked': false, 'IsShow': true }, { 'name': '中西醫結合護理研究所', 'edutype': '碩士', 'IsChecked': false, 'IsShow': true }, { 'name': '健康事業管理系', 'edutype': '二年,進修,四年,碩士', 'IsChecked': false, 'IsShow': true }, { 'name': '資訊管理系', 'edutype': '四年,碩士', 'IsChecked': false, 'IsShow': true }, { 'name': '休閒產業與健康促進系', 'edutype': '四年,碩士', 'IsChecked': false, 'IsShow': true }, { 'name': '長期照護系', 'edutype': '二年,碩士', 'IsChecked': false, 'IsShow': true }, { 'name': '語言治療與聽力學系', 'edutype': '四年,碩士', 'IsChecked': false, 'IsShow': true }, { 'name': '嬰幼兒保育系', 'edutype': '二年,四年,碩士', 'IsChecked': false, 'IsShow': true }, { 'name': '運動保健系', 'edutype': '四年,碩士', 'IsChecked': false, 'IsShow': true }, { 'name': '生死與健康心理諮商系', 'edutype': '四年,碩士', 'IsChecked': false, 'IsShow': true }];
                $scope.Grades = [{ 'name': '1年級', 'value': 1, 'IsChecked': false }, { 'name': '2年級', 'value': 2, 'IsChecked': false }, { 'name': '3年級', 'value': 3, 'IsChecked': false }, { 'name': '4年級', 'value': 4, 'IsChecked': false }];
                $scope.CourseTypes = [{ 'name': '通識必修(通識)', 'value': '通識必修', 'IsChecked': false }, { 'name': '通識選修(通識)', 'value': '通識選修', 'IsChecked': false }, { 'name': '專業必修(系所)', 'value': '專業必修', 'IsChecked': false }, { 'name': '專業選修(系所)', 'value': '專業選修', 'IsChecked': false }];
                $scope.Days = [{ 'name': '星期一', 'value': 1, 'IsChecked': false }, { 'name': '星期二', 'value': 2, 'IsChecked': false }, { 'name': '星期三', 'value': 3, 'IsChecked': false }, { 'name': '星期四', 'value': 4, 'IsChecked': false }, { 'name': '星期五', 'value': 5, 'IsChecked': false }, { 'name': '星期六', 'value': 6, 'IsChecked': false }, { 'name': '星期日', 'value': 7, 'IsChecked': false }];
                $scope.Times = [{ 'name': '節次1(08:10~09:00)', 'value': 1, 'IsChecked': false }, { 'name': '節次2(09:10~10:00)', 'value': 2, 'IsChecked': false }, { 'name': '節次3(10:10~11:00)', 'value': 3, 'IsChecked': false }, { 'name': '節次4(11:10~12:00)', 'value': 4, 'IsChecked': false }, { 'name': '節次5(12:40~13:30)', 'value': 5, 'IsChecked': false }, { 'name': '節次6(13:40~14:30)', 'value': 6, 'IsChecked': false }, { 'name': '節次7(14:40~15:30)', 'value': 7, 'IsChecked': false }, { 'name': '節次8(15:40~16:30)', 'value': 8, 'IsChecked': false }, { 'name': '節次9(16:40~17:30)', 'value': 9, 'IsChecked': false }, { 'name': '節次10(17:40~18:30)', 'value': 10, 'IsChecked': false }, { 'name': '節次11(18:35~19:25)', 'value': 11, 'IsChecked': false }, { 'name': '節次12(19:30~20:20)', 'value': 12, 'IsChecked': false }, { 'name': '節次13(20:25~21:15)', 'value': 13, 'IsChecked': false }, { 'name': '節次14(21:20~22:10)', 'value': 14, 'IsChecked': false }];
                $scope.Category = [{ 'name': '跨校', 'value': 1, 'IsChecked': false }, { 'name': '跨域課程', 'value': 2, 'IsChecked': false }, { 'name': '全英語授課', 'value': 3, 'IsChecked': false }, { 'name': '同步遠距教學', 'value': 4, 'IsChecked': false }, { 'name': '非同步遠距教學', 'value': 5, 'IsChecked': false }];
                $scope.Columns = [{ 'name': "學期", 'IsChecked': true, 'value': 'Sem' }, { 'name': "系所名稱", 'IsChecked': true, 'value': 'Faculty_Name' }, { 'name': "年級", 'IsChecked': true, 'value': 'Grad' }, { 'name': "課程代碼(14碼)", 'IsChecked': true, 'value': 'Course_Id' } ,{ 'name': "上課班組", 'IsChecked': true, 'value': 'Course_Class' }, { 'name': "課程名稱", 'IsChecked': true, 'value': 'Course_Name' }, { 'name': "授課老師", 'IsChecked': true, 'value': 'Teacher' }, { 'name': "上課人數/限制人數", 'IsChecked': true, 'value': 'Course_People,Limit_People' }, { 'name': "學分數", 'IsChecked': true, 'value': 'Credits' }, { 'name': "課別", 'IsChecked': true, 'value': 'Course_Type' }, { 'name': "地點", 'IsChecked': true, 'value': 'Course_Place' }, { 'name': "星期", 'IsChecked': true, 'value': 'Course_Day' }, { 'name': "節次", 'IsChecked': true, 'value': 'Course_Time' }, { 'name': "備註", 'IsChecked': true, 'value': 'Course_Other' }, { 'name': "教學計劃", 'IsChecked': true, 'value': 'Class_Plan' }];
                $scope.Sem = [];
             */
            string _queryStr = "";
            foreach (KeyValuePair<string,string> item in i_query)
            {
                if (item.Value != "")
                {
                    if (_queryStr != "")
                    {
                        _queryStr += "&";
                    }
                    _queryStr += item.Key + "=" + item.Value;
                }
            }
            Debug.Log(server_url + "api/Course_Search?" + _queryStr + "&IsCityPart=true&IsRootPart=true&IsOnly=true");
            //IsOnly = 是否只顯示該系
            var responseString = client.GetStringAsync(server_url + "api/Course_Search?" + _queryStr + "&IsCityPart=true&IsRootPart=true");
            Debug.Log(responseString.Result);
            try
            {
                object[] _tmp = JsonConvert.DeserializeObject<object[]>(responseString.Result);
                //Debug.Log(_tmp[0].GetType());
                //return null;
                return ((JArray)_tmp[0]).ToObject<Dictionary<string, string>[]>();
            }
            catch (Exception ex)
            {
                Debug.LogWarning("搜尋失敗" + ex.StackTrace);
                return null;
            }
            //return null;
        }
        catch
        {
            MsgBox.Msg("連線失敗", "連線失敗");
            return null;
        }
    }
    #endregion

    #region Unity輔助相關功能
    public void SetNotify(string i_text, DateTime i_time)
    {
        var notification = new AndroidNotification()
        {
            Title = "NTUNHS Mobile",
            Text = i_text,
            FireTime = i_time
        };
        AndroidNotificationCenter.SendNotification(notification, "channel_id");
    }
    public void SetLayer(Transform i_obj, int i_layerId)
    {
        i_obj.gameObject.layer = i_layerId;
        for (int i = 0; i < i_obj.childCount; i++)
        {
            SetLayer(i_obj.GetChild(i), i_layerId);
        }
    }
    public void DeActiveAllChild(Transform i_tran)
    {
        for (int i = 0; i < i_tran.childCount; i++)
        {
            i_tran.GetChild(i).gameObject.SetActive(false);
        }
    }
    public void DestroyAllChild(Transform i_tran)
    {
        if (i_tran != null)
        {
            for (int i = 0; i < i_tran.childCount; i++)
            {
                DestroyObj(i_tran.GetChild(i).gameObject);
            }
        }
    }
    public void DestroyObj(GameObject i_obj)
    {
        if (i_obj != null)
        {
            Destroy(i_obj);
        }
    }
    public GameObject CopyObj(GameObject i_obj)
    {
        if (i_obj != null)
        {
            return Instantiate(i_obj);
        }
        else
        {
            return null;
        }
    }
    #endregion
}
