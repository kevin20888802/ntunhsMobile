using System.Collections.Generic;

public class CourseWork
{
    public string Title;
    public string Description;
    public string Term;
    public string Type;
    public string Percent;
    public string Link;

    public CourseWork(Dictionary<string, string> i_data)
    {
        Title = i_data["title"];
        Description = i_data["description"];
        Term = i_data["term"];
        Type = i_data["type"];
        Percent = i_data["percent"];
        Link = i_data["link"];
    }
}
