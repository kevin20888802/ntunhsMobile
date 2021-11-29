using System.Collections;
using System.Collections.Generic;
using System.Data;
using UnityEngine;

public class Menu_Announce : MonoBehaviour
{
    public MainSystem MainSystem;
    public Transform Content;
    public UI_ArticleBox UI_ArticleBox;

    private void OnEnable()
    {
        MainSystem = MainSystem.instance;
        UI_ArticleBox = Resources.Load<UI_ArticleBox>("Prefab/UI/ArticleBox");
        Refresh();
    }

    public void Refresh()
    {
        MainSystem.DestroyAllChild(Content);
        DataSet i_data = MainSystem.GetAnnouncement();
        DataTable i_news = i_data.Tables["news"];
        DataTable i_info = i_data.Tables["info"];
        foreach (DataRow row in i_news.Rows)
        {
            UI_ArticleBox _tmp = MainSystem.CopyObj(UI_ArticleBox.gameObject).GetComponent<UI_ArticleBox>();
            _tmp.SetContent(row["text"].ToString(),row["url"].ToString(), row["time"].ToString());
            _tmp.transform.SetParent(Content);
            _tmp.transform.localScale = new Vector3(1, 1, 1);
        }
        foreach (DataRow row in i_info.Rows)
        {
            UI_ArticleBox _tmp = MainSystem.CopyObj(UI_ArticleBox.gameObject).GetComponent<UI_ArticleBox>();
            _tmp.SetContent(row["text"].ToString(), row["url"].ToString(), row["time"].ToString());
            _tmp.transform.SetParent(Content);
            _tmp.transform.localScale = new Vector3(1, 1, 1);
        }
    }
}
