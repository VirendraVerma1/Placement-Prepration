using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class TestContoller : MonoBehaviour
{
    public LocalTestManager localTestManager;
    List<QuesDataBean> quesData = new List<QuesDataBean>();
    string[] items;
    int quesid=0;
    int score=0;
    int correctAns=0;
    int currentQues=0;
    int currentCheckBox=0;
    public GameObject TestPannel;
    public GameObject TopBar;

    //common things
    bool canSkip=false;
    bool isNoTimer=false;
    string timerInputed="";
    int timetakenCounter=0;
    bool istestOn=false;


    #region callback functions

    public void OnTestStartButtonPressed()
    {
        TopBar.SetActive(false);
        gameObject.GetComponent<MainManager>().ActivatePanel(TestPannel.name);
        quesid=0;
        istestOn=true;
        timetakenCounter=0;
        StartCoroutine(TimeTakenCounterFU());
        ShowData();
        quesid++;
        CheckAndSetTimer();
        saveload.revision++;
    }

    public void OnCheckBoxButtonPressed(int code)
    {
        InitializeCheckBox(code);
    }

    public void OnSubmitButtonPressed()
    {
        if(quesid<items.Length-1)
        {
            if(currentCheckBox!=0 &&canSkip==false)
            {

                if(correctAns==currentCheckBox)
                {
                    score++;
                    saveload.correct++;
                }else{
                    saveload.wrong++;
                }
                
                ShowData();
                quesid++;
            }else if(canSkip)
            {
                ShowData();
                quesid++;
            }
        }else{
            ShowTestReport();
        }
    }

    #endregion

    public void SetMyDataTest(string[] things,bool canskip,bool isnoTimer,string timeinput)
    {
        print("Length"+things.Length);
        canSkip=canskip;
        isNoTimer=isnoTimer;
        timerInputed=timeinput;
        items=things;
        StoreDataToList();
    }

    #region timer initialize

    [Header("Timer section")]
    public Text TimerCountdownText;

    void CheckAndSetTimer()
    {
        TimerCountdownText.text="";
        if(isNoTimer==false)
        {
            int selectedTime=int.Parse(timerInputed);
            StartCoroutine(Countdown(selectedTime));
        }
    }

    int testTime=0;
    IEnumerator Countdown(int completeTime)
    {
        testTime=completeTime;
        while(testTime>0)
        {
            yield return new WaitForSeconds(1);
            testTime--;
            
            TimerCountdownText.text=testTime.ToString();
        }
        TimerCountdownText.text="";
        if(quesid<items.Length)
        {
            ShowData();
            quesid++;
            int selectedTime=int.Parse(timerInputed);
            StartCoroutine(Countdown(selectedTime));
        }
    }

    #endregion

    #region Extract Data from Array

    void StoreDataToList()
    {
        for(int i=0;i<items.Length-1;i++){

                string course=GetDataValue(items[i],"Course:");
                string subject = GetDataValue(items[i], "Subject:");
                string ques = GetDataValue(items[i], "Ques:");
                string option1 = GetDataValue(items[i], "Option1:");
                string Option2 = GetDataValue(items[i], "Option2:");
                string option3 = GetDataValue(items[i], "Option3:");
                string Option4 = GetDataValue(items[i], "Option4:");
                string explanation = GetDataValue(items[i], "Explanation:");
                int correct = int.Parse(GetDataValue(items[i], "Correct:"));
                string company = GetDataValue(items[i], "Company:");
                string youtubelink = GetDataValue(items[i], "YoutubeLink:");
                quesData.Add(new QuesDataBean(course, subject, ques, option1, Option2, option3, Option4, explanation, correct, company, youtubelink));
                
            }
    }

    #endregion

    #region Show Data



    [Header("Center Ques Things")]
    public Text QuesNumberText;
    public Text QuesTextCenter;
    public Text Option1TextCenter;
    public Text Option2TextCenter;
    public Text Option3TextCenter;
    public Text Option4TextCenter;

    public Sprite TickCheckBox;
    public Sprite UnTickCheckBox;
    public Sprite WrongTickCheckBox;

    public GameObject CheckBox1;
    public GameObject CheckBox2;
    public GameObject CheckBox3;
    public GameObject CheckBox4;

    void ShowData()
    {
        if(isNoTimer==false)
        testTime=int.Parse(timerInputed);
        QuesNumberText.text = "Ques "+(quesid + 1).ToString();
        QuesTextCenter.text = SymbolDecoder(quesData[quesid].Ques);
        Option1TextCenter.text = SymbolDecoder(quesData[quesid].Option1);
        Option2TextCenter.text = SymbolDecoder(quesData[quesid].Option2);
        Option3TextCenter.text = SymbolDecoder(quesData[quesid].Option3);
        Option4TextCenter.text = SymbolDecoder(quesData[quesid].Option4);

        correctAns = quesData[quesid].Correct;
        currentQues = quesid;
        currentCheckBox=0;
        InitializeCheckBox(0);

        StartCoroutine(TextAlighByGeometry(QuesTextCenter));
        //StartCoroutine(TextAlighByGeometry(Option1TextCenter));
        //StartCoroutine(TextAlighByGeometry(Option2TextCenter));
        //StartCoroutine(TextAlighByGeometry(Option3TextCenter));
        //StartCoroutine(TextAlighByGeometry(Option4TextCenter));
        
    }

    IEnumerator TextAlighByGeometry(Text textt)
    {
        yield return new WaitForSeconds(0.1f);
        textt.GetComponent<ContentSizeFitter>().enabled = false;
        yield return new WaitForSeconds(0.1f);
        textt.GetComponent<ContentSizeFitter>().enabled = true;
    }

    void InitializeCheckBox(int code)
    {
        
        CheckBox1.GetComponent<Image>().sprite = UnTickCheckBox;
        CheckBox2.GetComponent<Image>().sprite = UnTickCheckBox;
        CheckBox3.GetComponent<Image>().sprite = UnTickCheckBox;
        CheckBox4.GetComponent<Image>().sprite = UnTickCheckBox;

        if (code == 1)
        {
            CheckBox1.GetComponent<Image>().sprite = TickCheckBox;
        }
        else if (code == 2)
        {
            CheckBox2.GetComponent<Image>().sprite = TickCheckBox;
        }
        else if (code == 3)
        {
            CheckBox3.GetComponent<Image>().sprite = TickCheckBox;
        }
        else if (code == 4)
        {
            CheckBox4.GetComponent<Image>().sprite = TickCheckBox;
        }
        currentCheckBox = code;
    }
    #endregion

    #region Test Report

    [Header("Test Report")]
    public GameObject TestReportPannel;
    public Text TotalQuesText;
    public Text CorrectAnswerText;
    public Text WrongAnswerText;
    public Text MarksObtainedText;
    public Text PercentageText;
    public Text TotalTimeTakenText;
    public Text ReportText;

    void ShowTestReport()
    {
        istestOn=false;
        TopBar.SetActive(true);
        float percent=((float)score/(float)(items.Length-1))*100;
        gameObject.GetComponent<MainManager>().ActivatePanel(TestReportPannel.name);
        TotalQuesText.text="Total Questions :"+(items.Length-1).ToString();
        CorrectAnswerText.text="Correct Answers :"+score.ToString();
        WrongAnswerText.text="Wrong Answers :"+(items.Length-1-score).ToString();
        MarksObtainedText.text="Marks Obtained :"+score.ToString()+"/"+(items.Length-1).ToString();
        PercentageText.text="Percentage :"+System.Math.Round(percent,2).ToString()+"%";
        TotalTimeTakenText.text="Time Taken Counter :"+timetakenCounter.ToString()+"sec";
        
        
        if(percent>90)
        ReportText.text="Excelent";
        else if(percent>70)
        ReportText.text="Good";
        else if(percent>50)
        ReportText.text="Average";
        else if(percent>30)
        ReportText.text="Need more practice";
        else if(percent>0)
        ReportText.text="Clear your basic concepts";
        
    }

    IEnumerator TimeTakenCounterFU()
    {
        while(istestOn){
        yield return new WaitForSeconds(1);
        timetakenCounter++;
        }
    }

    #endregion


    string GetDataValue(string data, string index)
    {
        string value = data.Substring(data.IndexOf(index) + index.Length);
        if (value.Contains("|"))
            value = value.Remove(value.IndexOf("|"));
        return value;
    }

    #region MyPersonal Decoder

    string SymbolEncoder(string str)
    {
        
        str = str.Replace(",", "iyecommahaiyecommahaihaii");
        str = str.Replace(":", "idoubledotdubledothaii");
        str = str.Replace("|", "islashslashhaii");
        str = str.Replace(";", "isemicolonhaisemicolonhaii");
        
        str = MySymbolEncoder(str,"iyenewlinehaiyenewlinehaii",92);
        str = MySymbolEncoder(str, "iyedoublecotehaii", 34);
        str = MySymbolEncoder(str, "iyecolonhaii", 39);
        str = MySymbolEncoder(str, "iyebackslashhaii", 47);
        str = MySymbolEncoder(str, "iyecurlylefthaii", 123);
        str = MySymbolEncoder(str, "iyecurlyrighthaii", 125);
        return str;
    }

    string SymbolDecoder(string str)
    {
        str += " ";
        str = str.Replace("iyecommahaiyecommahaihaii", ",");
        str = str.Replace("idoubledotdubledothaii", ":");
        str = str.Replace("islashslashhaii", "|");
        str = str.Replace("isemicolonhaisemicolonhaii", ";");

        str = MySymbolDecoder(str, "iyenewlinehaiyenewlinehaii",92);
        str = MySymbolDecoder(str, "iyedoublecotehaii", 34);
        str = MySymbolDecoder(str, "iyecolonhaii", 39);
        str = MySymbolDecoder(str, "iyebackslashhaii", 47);
        str = MySymbolDecoder(str, "iyecurlylefthaii", 123);
        str = MySymbolDecoder(str, "iyecurlyrighthaii", 125);
        str = MySymbolDecoder(str, "iyenewlinehaiyenewlinehaii", 92);
        str = MySymbolDecoder(str, "iyedoublecotehaii", 34);
        str = MySymbolDecoder(str, "iyecolonhaii", 39);
        str = MySymbolDecoder(str, "iyebackslashhaii", 47);
        str = MySymbolDecoder(str, "iyecurlylefthaii", 123);
        str = MySymbolDecoder(str, "iyecurlyrighthaii", 125);
        return str;
    }

    string MySymbolEncoder(string str, string code, int ascicode)
    {
        int n = ascicode;
        char sumbol = Convert.ToChar(n);
        string newstr = "";
        foreach (char s in str)
        {
            if (sumbol == s)
            {
                newstr += code;
            }
            else
            {
                newstr += s;
            }
            
        }
        return newstr;
    }

    string MySymbolDecoder(string str,string code,int ascicode)
    {
        int n = ascicode;
        char sumbol = Convert.ToChar(n);
        string newstr = "";
        string newlineencode = code;
        int c = 0;
        string symbolchecher = "";
        foreach (char s in str)
        {
            if (c < newlineencode.Length)
            {
                if (s == newlineencode[c])
                {
                    symbolchecher += s;
                    c++;
                }
                else
                {
                    if (newlineencode == symbolchecher)
                    {
                        symbolchecher = "";
                        newstr += Convert.ToChar(n);
                    }
                    c = 0;
                    newstr += symbolchecher;
                    newstr += s;
                    symbolchecher = "";
                }
            }
            else
            {
                if (newlineencode == symbolchecher)
                {
                    symbolchecher = "";
                    newstr += Convert.ToChar(n);
                }

                c = 0;
                newstr += symbolchecher;
                newstr += s;
                symbolchecher = "";
            }
        }
        return newstr;
    }

    #endregion
}
