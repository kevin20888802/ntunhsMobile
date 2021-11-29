using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UI_ArticleBox : MonoBehaviour
{

    public Text T_Title;
    public string _url;
    public Text T_Time;

    public void SetContent(string i_t,string i_url,string i_time)
    {
        string _title = i_t.Substring(0,Mathf.Max(0,i_t.Length));
        if (_title.Length >= 18)
        {
            _title = _title.Substring(0, 18) + "...";
        }
        T_Title.text = _title;
        _url = i_url;
        T_Time.text = i_time;
    }

    public void Open()
    {
        if (_url != "")
        {
            Application.OpenURL(_url);
        }
    }
}
