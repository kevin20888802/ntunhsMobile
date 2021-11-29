using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuManager : MonoBehaviour
{
    public MainSystem MainSystem;
    public Transform Menus;
    public Transform BtnMenu;
    private void Start()
    {
        MainSystem = MainSystem.instance;
        SwitchMenu("Login");
    }

    public void SwitchMenu(string i_name)
    {

        for (int i = 0; i < Menus.childCount; i++)
        {
            if (Menus.GetChild(i).gameObject.name == i_name)
            {
                Menus.GetChild(i).gameObject.SetActive(true);

                // 獲取所有該物件類型是MenuObj的目錄Class，然後執行他們的進入目錄。
                Component[] menuScripts = Menus.GetChild(i).GetComponents(typeof(UI_Menu));
                foreach (UI_Menu currMenu in menuScripts)
                {
                    StartCoroutine(currMenu.EnterMenu());
                    break;
                }
            }
            else
            {
                Menus.GetChild(i).gameObject.SetActive(false);
            }
        }
        switch (i_name)
        {
            case "Login":
                SetBtnMenuActive(false);
                break;
            default:
                SetBtnMenuActive(true);
                break;
        }
    }

    public void SetBtnMenuActive(bool i_stat)
    {
        BtnMenu.gameObject.SetActive(i_stat);
    }

    public void LogOut()
    {
        SwitchMenu("Login");
        MainSystem.LogOut();
    }
}
