using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UI_Table_Text : MonoBehaviour
{
    public UI_Table_Text_Cell[,] Cells;
    public string[,] Data;

    public void Setup(string[,] i_data)
    {
        Data = i_data;
        Cells = new UI_Table_Text_Cell[Data.GetLength(0),Data.GetLength(1)];
        Refresh();
    }
    public void Setup(string[,] i_data,int[] i_colWidth ,int[] i_rowHeight)
    {
        Setup(i_data);
        Refresh();

        // 設定cell大小
        for (int i = 0; i < transform.childCount & i < i_rowHeight.Length; i++)
        {
            GameObject rowObj = transform.GetChild(i).gameObject;
            RectTransform rowRect = rowObj.transform.transform.GetComponent<RectTransform>();
            rowRect.sizeDelta = new Vector2(100, i_rowHeight[i]);
            for (int j = 0; j < rowObj.transform.childCount & j < i_colWidth.Length; j++)
            {
                UI_Table_Text_Cell _cell = rowObj.transform.GetChild(j).GetComponent<UI_Table_Text_Cell>();
                _cell.SetSize(new Vector2(i_colWidth[j], i_colWidth[i]));
            }
        }
    }

    /// <summary>
    /// 重新顯示表格。
    /// </summary>
    public void Refresh()
    {
        MainSystem.instance.DestroyAllChild(transform);
        for (int i = 0; i < Data.GetLength(0); i++)
        {
            GameObject rowObj = new GameObject("Row_"+i.ToString());
            rowObj.transform.SetParent(transform);
            RectTransform rowRect = rowObj.AddComponent<RectTransform>();
            rowRect.localScale = new Vector3(1, 1, 1);
            HorizontalLayoutGroup rowLayout = rowObj.AddComponent<HorizontalLayoutGroup>();
            rowLayout.childControlHeight = false;
            rowLayout.childControlWidth = false;
            rowRect.sizeDelta = new Vector2(100, 100); // 預設row大小
            for (int j = 0; j < Data.GetLength(1); j++)
            {
                GameObject _thisCellObj = new GameObject("Cell_" + i.ToString() + "_" + j.ToString());
                _thisCellObj.transform.SetParent(rowObj.transform);
                UI_Table_Text_Cell _thisCell = _thisCellObj.AddComponent<UI_Table_Text_Cell>();
                _thisCell.Setup();
                _thisCell.Data = Data[i,j];
                _thisCell.SetSize(new Vector2(100, 100)); // 預設cell大小
                _thisCell.SetColor(Color.white); // 預設cell顏色
                _thisCell.SetTextColor(Color.black); // 預設文字顏色
                Cells[i,j] = _thisCell;
            }
        }
    }

    /// <summary>
    /// 設定列欄位顏色。
    /// </summary>
    public void SetColumnColor(int i_index, Color i_col)
    {
        for (int i = 0; i < Cells.GetLength(0); i++)
        {
            Cells[i, i_index].SetColor(i_col);
        }
    }
    /// <summary>
    /// 設定行欄位字體顏色。
    /// </summary>
    public void SetColumnFontColor(int i_index, Color i_col)
    {
        for (int i = 0; i < Cells.GetLength(0); i++)
        {
            Cells[i, i_index].SetTextColor(i_col);
        }
    }
    /// <summary>
    /// 設定列欄位寬度。
    /// </summary>
    /// <param name="i_index"></param>
    /// <param name="i_size"></param>
    public void SetColumnWidth(int i_index, int i_size)
    {
        RectTransform _rowContainerRect = Cells[0, i_index].transform.parent.GetComponent<RectTransform>();
        _rowContainerRect.sizeDelta = new Vector2(i_size, _rowContainerRect.sizeDelta.y);
        for (int i = 0; i < Cells.GetLength(0); i++)
        {
            Cells[i, i_index].SetSize(new Vector2(i_size, Cells[i, i_index].GetSize().y));
        }
    }
    /// <summary>
    /// 設定列欄位的文字是否要BestFit。
    /// </summary>
    /// <param name="i_fit"></param>
    public void SetColumnTextBestFit(int i_index ,bool i_fit)
    {
        for (int i = 0; i < Cells.GetLength(0); i++)
        {
            Cells[i, i_index].Text.resizeTextForBestFit = i_fit;
        }
    }

    /// <summary>
    /// 設定行欄位顏色。
    /// </summary>
    public void SetRowColor(int i_index, Color i_col)
    {
        for (int i = 0; i < Cells.GetLength(1); i++)
        {
            Cells[i_index, i].SetColor(i_col);
        }
    }

    /// <summary>
    /// 設定行欄位字體顏色。
    /// </summary>
    public void SetRowFontColor(int i_index, Color i_col)
    {
        for (int i = 0; i < Cells.GetLength(1); i++)
        {
            Cells[i_index, i].SetTextColor(i_col);
        }
    }
    /// <summary>
    /// 設定行欄位字體大小。
    /// </summary>
    /// <param name="i_index"></param>
    /// <param name="i_size"></param>
    public void SetRowFontSize(int i_index, int i_size)
    {
        for (int i = 0; i < Cells.GetLength(1); i++)
        {
            Cells[i_index, i].Text.fontSize = i_size;
        }
    }
    /// <summary>
    /// 設定行欄位大小。
    /// </summary>
    /// <param name="i_index"></param>
    /// <param name="i_size"></param>
    public void SetRowHeight(int i_index, int i_size)
    {
        RectTransform _rowContainerRect = Cells[i_index, 0].transform.parent.GetComponent<RectTransform>();
        _rowContainerRect.sizeDelta = new Vector2(_rowContainerRect.sizeDelta.x, i_size);
        for (int i = 0; i < Cells.GetLength(1); i++)
        {
            Cells[i_index, i].SetSize(new Vector2(Cells[i_index, i].GetSize().x ,i_size));
        }
    }

    /// <summary>
    /// 合併表格欄位。
    /// </summary>
    /// <param name="x">列起點</param>
    /// <param name="y">行終點</param>
    public void MergeCells(Vector2 x, Vector2 y)
    {
        Vector2 _newSize = new Vector2(0,0);
        for (int i = (int)x.x; i <= (int)y.x; i++)
        {
            _newSize.y += Cells[i, (int)x.y].GetSize().y;
        }
        for (int j = (int)x.y; j <= (int)y.y; j++)
        {
            _newSize.x += Cells[(int)x.x, j].GetSize().x;
        }
        Cells[(int)x.x, (int)x.y].SetSize(_newSize);
        for (int i = (int)x.x; i <= (int)y.x; i++)
        {
            for (int j = (int)x.y; j <= (int)y.y; j++)
            {
                if (i != (int)x.x | j != (int)x.y)
                {
                    Cells[i, j].gameObject.SetActive(false);
                }
            }
        }
    }

    /// <summary>
    /// 解除合併表格欄位，平均分配欄位高度及寬度。
    /// </summary>
    /// <param name="x">列起點</param>
    /// <param name="y">行終點</param>
    public void UnMergeCells(Vector2 x, Vector2 y)
    {
        Vector2 _newSize = new Vector2(0, 0);
        for (int i = (int)x.x; i <= (int)y.x; i++)
        {
            _newSize.y += Cells[i, (int)x.y].GetSize().y;
        }
        for (int j = (int)x.y; j <= (int)y.y; j++)
        {
            _newSize.x += Cells[(int)x.x, j].GetSize().x;
        }
        _newSize = new Vector2(_newSize.x / ((int)x.y - (int)y.y) , _newSize.y / ((int)x.x - (int)y.x));
        for (int i = (int)x.x; i <= (int)y.x; i++)
        {
            for (int j = (int)x.y; j <= (int)y.y; j++)
            {
                Cells[i, j].gameObject.SetActive(true);
                Cells[i, j].SetSize(_newSize);
            }
        }
    }
}
