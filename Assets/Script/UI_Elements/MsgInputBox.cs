using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MsgInputBox : MonoBehaviour
{
    public Text Title;
    public Text Description;
    public InputField inputField;
    public bool Done = false;
    public void SetText(string i_title, string i_description)
    {
        Title.text = i_title;
        Description.text = i_description;
    }

    public void Confirm()
    {
        Done = true;
    }
}
