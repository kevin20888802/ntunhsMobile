using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

namespace kevin20888802.MsgBox
{
    public class MsgBoxBase : MonoBehaviour
    {
        public Text TitleText;
        public Text _Text;
        public Transform _scrollContent;
        public Action YesAction;
        public Action NoAction;

        public Button ConfirmButton;
        public Button YesButton;
        public Button NoButton;

        private void Awake()
        {
            // Add Action To Each Button.
            if (ConfirmButton != null)
            {
                ConfirmButton.onClick.AddListener(() => ConfirmAc());
            }
            if (YesButton != null)
            {
                YesButton.onClick.AddListener(() => YesAc());
            }
            if (NoButton != null)
            {
                NoButton.onClick.AddListener(() => NoAc());
            }
        }

        public void ConfirmAc()
        {
            gameObject.SetActive(false);
            Destroy(gameObject);
        }

        public void YesAc()
        {
            YesAction();
            gameObject.SetActive(false);
            Destroy(gameObject);
        }

        public void NoAc()
        {
            NoAction();
            gameObject.SetActive(false);
            Destroy(gameObject);
        }


    }
}