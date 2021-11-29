using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using kevin20888802.MsgBox;
using UnityEngine.UI;

public class Menu_Login : UI_Menu
{
    public MainSystem MainSystem;
    public MenuManager MenuManager;
    public InputField i_id;
    public InputField i_pw;
    public Button btn;
    
    private void Start()
    {
        MainSystem = MainSystem.instance;
    }

    private void OnEnable()
    {
        i_id.text = "";
        i_pw.text = "";
    }

    public override IEnumerator EnterMenu()
    {
        if (PlayerPrefs.HasKey("userid"))
        {
            i_id.text = PlayerPrefs.GetString("userid");
        }
        if (PlayerPrefs.HasKey("userpw"))
        {
            i_pw.text = PlayerPrefs.GetString("userpw");
        }
        yield return new WaitForEndOfFrame();
    }

    public void Login()
    {
        StartCoroutine(LoginProcess());
    }

    public IEnumerator LoginProcess()
    {
        btn.interactable = false;
        yield return MainSystem.Login(i_id.text, i_pw.text);
        bool _success = MainSystem.log_status;
        yield return new WaitForFixedUpdate();
        if (_success) // 登入成功
        {
            //MsgBox.Msg("登入成功", "登入成功\n歡迎" + MainSystem.StudentInfo.stuNum + "\n" + MainSystem.StudentInfo.stuName +"");
            MenuManager.SwitchMenu("Schedule");
            PlayerPrefs.SetString("userid", i_id.text);
            PlayerPrefs.SetString("userpw", i_pw.text);
            PlayerPrefs.Save();
        }
        else // 登入失敗
        {
            MsgBox.Msg("登入失敗", "登入失敗");
            i_pw.text = "";
        }
        btn.interactable = true;
    }
}
