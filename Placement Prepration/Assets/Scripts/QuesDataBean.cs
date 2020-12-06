using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuesDataBean : MonoBehaviour
{
    public string Course;
    public string Subject;
    public string Ques;
    public string Option1;
    public string Option2;
    public string Option3;
    public string Option4;
    public string Explanation;
    public int Correct;
    public string Company;
    public string YoutubeLink;

    public QuesDataBean(string course, string subject, string ques, string option1, string option2, string option3, string option4, string explanation, int correct, string company, string youtubelink)
    {
        Course = course;
        Subject = subject;
        Ques = ques;
        Option1 = option1;
        Option2 = option2;
        Option3 = option3;
        Option4 = option4;
        Explanation = explanation;
        Correct = correct;
        Company = company;
        YoutubeLink = youtubelink;
    }
}
