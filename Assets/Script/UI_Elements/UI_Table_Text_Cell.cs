using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UI_Table_Text_Cell : MonoBehaviour
{
    public string Data;
    public RectTransform _rect;
    public Button Button;
    public Image Image;
    public Text Text;

    public void Setup()
    {
        _rect = gameObject.AddComponent<RectTransform>();

        // Text
        Text = new GameObject("Text").AddComponent<Text>();
        Text.transform.SetParent(transform);
        RectTransform TextRect = Text.transform.GetComponent<RectTransform>();
        TextRect.anchorMin = new Vector2(0, 0);
        TextRect.anchorMax = new Vector2(1, 1);
        TextRect.offsetMin = new Vector2(0, 0);
        TextRect.offsetMax = new Vector2(0, 0);
        Text.resizeTextForBestFit = false;
        Text.fontSize = 25;
        Text.font = Resources.GetBuiltinResource(typeof(Font), "Arial.ttf") as Font;
        Text.alignment = TextAnchor.MiddleCenter;

        // Background
        Image = transform.gameObject.AddComponent<Image>();

        // Button
        GameObject BtnObj = new GameObject("Button");
        BtnObj.transform.SetParent(transform);
        RectTransform BtnRect = BtnObj.AddComponent<RectTransform>();
        Button = BtnObj.AddComponent<Button>();
        Button.targetGraphic = BtnObj.AddComponent<Image>();
        BtnRect.anchorMin = new Vector2(0, 0);
        BtnRect.anchorMax = new Vector2(1, 1);
        BtnRect.offsetMin = new Vector2(0, 0);
        BtnRect.offsetMax = new Vector2(0, 0);
        ColorBlock BtnColor = Button.colors;
        BtnColor.normalColor = new Color32(0, 0, 0, 0);
        BtnColor.pressedColor = new Color32(0, 0, 0, 30);
        BtnColor.disabledColor = new Color32(255, 0, 0, 20);
        BtnColor.selectedColor = new Color32(255, 255, 255, 10);
        BtnColor.highlightedColor = new Color32(255, 255, 255, 20);
        Button.colors = BtnColor;
    }

    void Update()
    {
        if (Text != null)
        {
            Text.text = Data;
        }
    }

    public void SetSize(Vector2 i_size)
    {
        _rect.localScale = new Vector3(1, 1, 1);
        _rect.sizeDelta = i_size;
    }

    public Vector2 GetSize()
    {
        return _rect.sizeDelta;
    }

    public void SetColor(Color i_col)
    {
        if (Image != null)
        {
            Image.color = i_col;
        }
    }
    public void SetTextColor(Color i_col)
    {
        Text.color = i_col;
    }

}
