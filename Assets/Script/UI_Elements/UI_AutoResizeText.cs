using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UI_AutoResizeText : MonoBehaviour
{
    private void Update()
    {
        if (GetComponent<Text>())
        {
            Text _t = GetComponent<Text>();
            int _lineCount = _t.text.Split('\n').Length;
            Vector2 _s = GetComponent<RectTransform>().sizeDelta;
            GetComponent<RectTransform>().sizeDelta = new Vector2(_s.x, _t.fontSize * (_lineCount + ((_t.fontSize * _t.text.Length) / _s.x )));
        }
    }
}
