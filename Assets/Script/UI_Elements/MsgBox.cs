using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Reflection;

namespace kevin20888802.MsgBox
{

    public class MsgBox : MonoBehaviour
    {

        public static void YesNo(string i_title, string Description, Action YesAct, Action NoAct)
        {
            MsgBoxBase _msgBox = ((GameObject)Instantiate(Resources.Load("Prefab/UI/MsgBox"))).GetComponent<MsgBoxBase>(); // MsgBox Place.

            _msgBox._Text.text = Description;
            _msgBox.TitleText.text = i_title;

            if (YesAct != null | NoAct != null) // If Is Not A Confirm Msg , Disable Confirm Button.
            {
                _msgBox.ConfirmButton.gameObject.SetActive(false);
                _msgBox.YesButton.gameObject.SetActive(true);
                _msgBox.NoButton.gameObject.SetActive(true);
            }
            else // Else Enable Confirm Button And Disable YesNo Button.
            {
                _msgBox.ConfirmButton.gameObject.SetActive(true);
                _msgBox.YesButton.gameObject.SetActive(false);
                _msgBox.NoButton.gameObject.SetActive(false);
            }

            if (YesAct != null)
            {
                _msgBox.YesAction = YesAct;
                Debug.Log(YesAct.GetMethodInfo().Name);
            }
            else
            {
                _msgBox.YesAction = NullAct;
            }

            if (NoAct != null)
            {
                _msgBox.NoAction = NoAct;
            }
            else
            {
                _msgBox.NoAction = NullAct;
            }


            _msgBox.gameObject.SetActive(true);
        }
        public static IEnumerator YesNo(string i_title, string Description, Action YesAct, Action NoAct, float i_a)
        {
            MsgBoxBase _msgBox = ((GameObject)Instantiate(Resources.Load("Prefab/UI/MsgBox"))).GetComponent<MsgBoxBase>(); // MsgBox Place.

            _msgBox._Text.text = Description;
            _msgBox.TitleText.text = i_title;

            if (YesAct != null | NoAct != null) // If Is Not A Confirm Msg , Disable Confirm Button.
            {
                _msgBox.ConfirmButton.gameObject.SetActive(false);
                _msgBox.YesButton.gameObject.SetActive(true);
                _msgBox.NoButton.gameObject.SetActive(true);
            }
            else // Else Enable Confirm Button And Disable YesNo Button.
            {
                _msgBox.ConfirmButton.gameObject.SetActive(true);
                _msgBox.YesButton.gameObject.SetActive(false);
                _msgBox.NoButton.gameObject.SetActive(false);
            }

            if (YesAct != null)
            {
                _msgBox.YesAction = YesAct;
            }
            else
            {
                _msgBox.YesAction = NullAct;
            }

            if (NoAct != null)
            {
                _msgBox.NoAction = NoAct;
            }
            else
            {
                _msgBox.NoAction = NullAct;
            }


            _msgBox.gameObject.SetActive(true);
            yield return new WaitWhile(() => _msgBox != null);
        }

        public static void Msg(string i_title ,string i_description)
        {
            MsgBoxBase _msgBox = ((GameObject)Instantiate(Resources.Load("Prefab/UI/MsgBox"))).GetComponent<MsgBoxBase>(); // MsgBox Place.
            _msgBox.TitleText.text = i_title;
            _msgBox._Text.text = i_description;
            _msgBox.YesButton.gameObject.SetActive(false);
            _msgBox.NoButton.gameObject.SetActive(false);
            _msgBox.gameObject.SetActive(true);
        }

        public static IEnumerator Msg(string i_title, string i_description, float i_a)
        {
            MsgBoxBase _msgBox = ((GameObject)Instantiate(Resources.Load("Prefab/UI/MsgBox"))).GetComponent<MsgBoxBase>(); // MsgBox Place.
            _msgBox.TitleText.text = i_title;
            _msgBox._Text.text = i_description;
            _msgBox.YesButton.gameObject.SetActive(false);
            _msgBox.NoButton.gameObject.SetActive(false);
            _msgBox.gameObject.SetActive(true);
            yield return new WaitWhile(() => _msgBox != null);
        }
        public static void ScrollMsg(string i_title, string i_description)
        {
            MsgBoxBase _msgBox = ((GameObject)Instantiate(Resources.Load("Prefab/UI/ScrollMsgBox"))).GetComponent<MsgBoxBase>(); // MsgBox Place.
            _msgBox.TitleText.text = i_title;
            _msgBox._Text.text = i_description;
            _msgBox.YesButton.gameObject.SetActive(false);
            _msgBox.NoButton.gameObject.SetActive(false);
            _msgBox.gameObject.SetActive(true);
        }

        /*public static void GetCardBox(Card CardGet)
        {
            GameObject MsgBox = (GameObject)Instantiate(Resources.Load("Prefab/System/UI/GetCardMsgBox")); // MsgBox Place.
            Transform Window = MsgBox.transform.GetChild(0).GetChild(0).transform;
            Window.Find("Name").gameObject.GetComponent<Text>().text = CardGet.Name;
            CardStatus AStat = new CardStatus();
            AStat.Card = CardGet;
            Window.Find("CardSlot").GetComponent<CardSlot>().CardData = AStat;
        }*/
        public static IEnumerator MsgInputProcess(string i_title, string i_description, string i_default)
        {
            MsgInputBox _msgBox = ((GameObject)Instantiate(Resources.Load("Prefab/UI/MsgInputBox"))).GetComponent<MsgInputBox>(); // MsgBox Place.
            _msgBox.SetText(i_title, i_description);
            _msgBox.inputField.text = i_default;
            yield return new WaitWhile(() => _msgBox.Done != true);
            yield return _msgBox.inputField.text;
            Destroy(_msgBox.gameObject);
        }

        public static void NullAct()
        {

        }


    }
}
