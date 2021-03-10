 using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AppManager : MonoBehaviour
{
    string GetCourseDataLink = "PlacementPrepration/getallcourse.php";
    string GetSubjectDataLink = "PlacementPrepration/getallsubject.php";
    string GetCompanyDataLink = "PlacementPrepration/getallcompany.php";

    string GetAllQuesDataLink = "PlacementPrepration/getallquesfromsubject.php";

    List<string> courseValues = new List<string>();
    List<string> subjectValues = new List<string>();
    List<string> companyValues = new List<string>();

    public string AllCourseData = "";
    public string AllSubjectData = "";
    public string AllCompanyData = "";

    List<QuesDataBean> quesData = new List<QuesDataBean>();

    int sendOnPath = 0;
    int quesid = 0;
    void Start()
    {
        ReportText.gameObject.SetActive(false);
        StartCoroutine(PutCourseValuesToListFromServer());
        
    }

    #region Initalizing Left Pannel

    #region InitializeCourse Left Pannel

    IEnumerator PutCourseValuesToListFromServer()
    {
        WWW www = new WWW(saveload.ServerLink+GetCourseDataLink);
        sendOnPath++;
        //ActivateLoadingDatafromServerPannel();
        yield return www;
        print(www.text);
        AllCourseData = www.text;

        sendOnPath--;
        if (www.text != "" && www.text.Contains(";"))
        {
            string[] items = www.text.Split(';');
            courseValues.Clear();
            bool flag = false;
            foreach (string s in items)
            {
                flag = false;
                foreach (string ss in courseValues)
                {
                    if (ss == s)
                    {
                        flag = true;
                    }
                }
                if (flag == false)
                    courseValues.Add(s);

            }
        }
        StartCoroutine(PutSubjectValuesToListFromServer());
        //InitializeCourse();
    }

    #endregion

    #region InitializeSubject Left Pannel

    IEnumerator PutSubjectValuesToListFromServer()
    {
        WWW www = new WWW(saveload.ServerLink+GetSubjectDataLink);
        sendOnPath++;
        //ActivateLoadingDatafromServerPannel();
        yield return www;
        print(www.text);
        AllSubjectData = www.text;
        sendOnPath--;
        if (www.text != "" && www.text.Contains(";"))
        {
            string[] items = www.text.Split(';');
            subjectValues.Clear();
            bool flag = false;
            foreach (string s in items)
            {
                flag = false;
                foreach (string ss in subjectValues)
                {
                    if (ss == s)
                    {
                        flag = true;
                    }
                }
                if (flag == false)
                    subjectValues.Add(s);
            }
        }
        StartCoroutine(PutCompanyValuesToListFromServer());
        //InitializeSubject();
        //prevQuesIndex = subjectValues.Count.ToString();
        //prevQuesIndexCopy = prevQuesIndex;
        //SetQuesNum();
    }

    #endregion

    #region InitializeCompany Left Pannel

    IEnumerator PutCompanyValuesToListFromServer()
    {
        WWW www = new WWW(saveload.ServerLink+GetCompanyDataLink);
        sendOnPath++;
        //ActivateLoadingDatafromServerPannel();
        yield return www;
        print(www.text);
        AllCompanyData = www.text;
        sendOnPath--;
        if (www.text != "" && www.text.Contains(";"))
        {
            string[] items = www.text.Split(';');
            companyValues.Clear();
            bool flag = false;
            foreach (string s in items)
            {
                flag = false;
                foreach (string ss in companyValues)
                {
                    if (ss == s)
                    {
                        flag = true;
                    }
                }
                if (flag == false)
                    companyValues.Add(s);
            }
        }
        InstantiateLeftPannelThings();
        //InitializeCompany();
    }

    #endregion


    [Header("Left Pannel Things")]
    public GameObject CourseGO;
    public GameObject SubjectGO;
    public GameObject CompanyGO;
    public GameObject QuesGO;
    public Transform LocationToSpawn;

    void InstantiateLeftPannelThings()
    {
        int d = 0;
        
        for (int i = 0; i < courseValues.Count; i++)
        {
            d++;
            if (courseValues[i] != "" && courseValues[i] != null && courseValues[i] != " ")
            {
                GameObject go = GameObject.Instantiate(CourseGO);
                go.transform.SetParent(LocationToSpawn.transform);
                go.transform.Find("Text").transform.GetComponent<Text>().text = courseValues[i];
                go.name = i.ToString();
                print(d);
                for (int j = d; j < subjectValues.Count; j++)
                {
                    
                    if (subjectValues[j] != "NextQ")
                    {
                        go = GameObject.Instantiate(SubjectGO);
                        go.transform.SetParent(LocationToSpawn.transform);
                        go.transform.Find("Text").transform.GetComponent<Text>().text = subjectValues[j];
                        int num = j;
                        go.GetComponent<Button>().onClick.AddListener(() => OnSubjectButtonPressed(num));
                        go.name = num.ToString();

                    }
                    else
                    {
                        break;
                    }
                    d++;
                }
            }
            
        }
    }

    #endregion

    #region Getting Question on Left Pannel And Loading Ques on Center

    int currentSubjectIndex = 0;
    void OnSubjectButtonPressed(int id)
    {
        currentSubjectIndex = id;
        string subject = subjectValues[id];

        GameObject[] go = GameObject.FindGameObjectsWithTag("Subject");
        foreach (GameObject g in go)
        {
            if (g.name == id.ToString())
            {
                Image image = g.transform.Find("Marker").GetComponent<Image>();
                var tempColor = image.color;
                tempColor.a = 1f;
                image.color = tempColor;

                image.rectTransform.rotation = Quaternion.Euler(0, 0, -90);

            }
            else
            {
                Image image = g.transform.Find("Marker").GetComponent<Image>();
                var tempColor = image.color;
                tempColor.a = 1f;
                image.color = tempColor;

                image.rectTransform.rotation = Quaternion.Euler(0, 0, 0);
            }
        }

        StartCoroutine(GetAllQuesOfPerticularSubbject(subject));
    }

    IEnumerator GetAllQuesOfPerticularSubbject(string subjct)
    {
        WWWForm form1 = new WWWForm();
        form1.AddField("Subject", subjct);
        WWW www = new WWW(saveload.ServerLink+GetAllQuesDataLink, form1);
        //ShowLoadingRemoveRest();
        yield return www;
        print(www.text);
        quesData.Clear();
        quesid = 0;
        if (www.text.Contains("Course"))
        {
            string[] items=www.text.Split(';');
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
                quesid++;
            }
            InitializeQuesOnLeftPannel(subjct, items.Length-1);
        }

    }

    void InitializeQuesOnLeftPannel(string subject,int numOfQues)
    {
        GameObject[] ggo = GameObject.FindGameObjectsWithTag("Ques");
        foreach (GameObject g in ggo)
        {
            Destroy(g);
        }
        
        int subjectIndexFromLocation = 0;
        for (int i = 0; i < LocationToSpawn.childCount; i++)
        {
            if (LocationToSpawn.GetChild(i).gameObject.tag == "Subject")
            {
                if (LocationToSpawn.GetChild(i).gameObject.transform.Find("Text").transform.GetComponent<Text>().text.ToString() == subject)
                {
                    subjectIndexFromLocation = i;
                    break;
                }
            }
        }

        int currentsubjectchildindex = 0;
        GameObject[] subjectGO = GameObject.FindGameObjectsWithTag("Subject");
        for (int j = 0; j < subjectGO.Length; j++)
        {
            if (subjectGO[j].name.ToString() == currentSubjectIndex.ToString())
            {
                print("gotit");
                currentsubjectchildindex = subjectGO[j].transform.GetSiblingIndex();
            }
            
        }
        

        for (int i = 0; i < numOfQues; i++)
        {
            GameObject go = Instantiate(QuesGO);
            go.transform.SetParent(LocationToSpawn.transform);
            currentsubjectchildindex++;
            go.transform.SetSiblingIndex(currentsubjectchildindex);
            

            int quesNum = i+1;
            go.transform.Find("Text").transform.GetComponent<Text>().text = "Ques " + quesNum;
            int quesIDI = i;
            go.GetComponent<Button>().onClick.AddListener(() => OnQuesButtonPressed(quesIDI));
            go.name = quesIDI.ToString();
            Image image = go.transform.Find("Marker").GetComponent<Image>();
            var tempColor = image.color;
            tempColor.a = 0f;
            image.color = tempColor;
        }
        
    }

    [Header("Center Ques Things")]
    public Text QuesNumberText;
    public Text QuesTextCenter;
    public Text Option1TextCenter;
    public Text Option2TextCenter;
    public Text Option3TextCenter;
    public Text Option4TextCenter;
    public Text ExplanationTextCenter;
    public Text YoutubeLinkCenter;


    void OnQuesButtonPressed(int quesid)
    {
        QuesNumberText.text = "Ques "+(quesid + 1).ToString();
        QuesTextCenter.text = quesData[quesid].Ques;
        Option1TextCenter.text = quesData[quesid].Option1;
        Option2TextCenter.text = quesData[quesid].Option2;
        Option3TextCenter.text = quesData[quesid].Option3;
        Option4TextCenter.text = quesData[quesid].Option4;
        ExplanationTextCenter.text = quesData[quesid].Explanation;
        YoutubeLinkCenter.text = quesData[quesid].YoutubeLink;

        UpdateQuesMarker(quesid);

        correctAns = quesData[quesid].Correct;
        currentQues = quesid;
        InitalizeUICenterOnNewQues();
        OnCloseLeftPannelButtonPressed();
        CheckAndActivateUI(currentQues);

        StartCoroutine(TextAlighByGeometry(QuesTextCenter));
        StartCoroutine(TextAlighByGeometry(Option1TextCenter));
        StartCoroutine(TextAlighByGeometry(Option2TextCenter));
        StartCoroutine(TextAlighByGeometry(Option3TextCenter));
        StartCoroutine(TextAlighByGeometry(Option4TextCenter));
        StartCoroutine(TextAlighByGeometry(ExplanationTextCenter));
        StartCoroutine(TextAlighByGeometry(YoutubeLinkCenter));
    }

    IEnumerator TextAlighByGeometry(Text text)
    {
        yield return new WaitForSeconds(0.1f);
        text.GetComponent<ContentSizeFitter>().enabled = false;
        yield return new WaitForSeconds(0.1f);
        text.GetComponent<ContentSizeFitter>().enabled = true;
    }

    void UpdateQuesMarker(int quesid)
    {
        GameObject[] go = GameObject.FindGameObjectsWithTag("Ques");
        print(go.Length);
        foreach (GameObject g in go)
        {
            if (g.name == quesid.ToString())
            {
                Image image = g.transform.Find("Marker").GetComponent<Image>();
                var tempColor = image.color;
                tempColor.a = 1f;
                image.color = tempColor;

            }
            else
            {
                Image image = g.transform.Find("Marker").GetComponent<Image>();
                var tempColor = image.color;
                tempColor.a = 0f;
                image.color = tempColor;
            }
        }
    }



    #endregion

    #region TopBar

    [Header("Main Menu And TopBar")]
    public GameObject LeftPannel;
    public Image MainMenuImage;
    public GameObject CloseLeftPannelGO;

    bool isLeftPannelOpen=false;
    public void OnMainMenuButtonPressed()
    {
        if (isLeftPannelOpen)
        {
            OnCloseLeftPannelButtonPressed();
        }
        else
        {
            isLeftPannelOpen = true;
            LeftPannel.SetActive(true);
            CloseLeftPannelGO.SetActive(true);
            MainMenuImage.rectTransform.localRotation = Quaternion.Euler(0, 0, 180);
            UpdateQuesMarker(currentQues);
        }
    }

    public void OnCloseLeftPannelButtonPressed()
    {
        isLeftPannelOpen = false;
        LeftPannel.SetActive(false);
        CloseLeftPannelGO.SetActive(false);
        MainMenuImage.rectTransform.localRotation = Quaternion.Euler(0, 0, 0);
    }

    #endregion

    #region Center Options

    [Header("Common Parts")]
    public GameObject CenterLogoPage;
    public GameObject BackButtonCenter;
    public GameObject ForwardButtonCenter;

    public Sprite TickCheckBox;
    public Sprite UnTickCheckBox;
    public Sprite WrongTickCheckBox;

    public GameObject CheckBox1;
    public GameObject CheckBox2;
    public GameObject CheckBox3;
    public GameObject CheckBox4;

    public Text RightAnswerText;
    public Text WrongAnswerText;

    int correctAns=0;
    int currentQues = 0;
    int currentCheckBox = 0;

    #region Back And Forward Button

    public void OnBackButtonPressed()
    {
       
            currentQues--;
            CheckAndActivateUI(currentQues);
            OnQuesButtonPressed(currentQues);

    }

    public void OnForwardButtonPressed()
    {
        
            currentQues++;
            CheckAndActivateUI(currentQues);
            OnQuesButtonPressed(currentQues);
        
    }

    bool CheckAndActivateUI(int currentQues)
    {
        bool flag = true;
        if (currentQues < 1)
        {
            BackButtonCenter.SetActive(false);
            flag = false;
        }
        else
        {
            BackButtonCenter.SetActive(true);
        }

        if (currentQues >= quesid-1)
        {
            flag = false;
            ForwardButtonCenter.SetActive(false);
        }
        else
        {
            ForwardButtonCenter.SetActive(true);
        }
        return flag;
    }

    #endregion 

    void InitalizeUICenterOnNewQues()
    {
        CenterLogoPage.SetActive(false);
        ExplanationTextCenter.gameObject.SetActive(false);
        RightAnswerText.gameObject.SetActive(false);
        WrongAnswerText.gameObject.SetActive(false);
        SubmitButton.SetActive(true);
        ExplanationText.SetActive(false);
        InitializeCheckBox(0);
    }

    public void InitializeCheckBox(int code)
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

    public void InitializeCheckBoxWrong(int codeWorng, int codeRight)
    {

        CheckBox1.GetComponent<Image>().sprite = UnTickCheckBox;
        CheckBox2.GetComponent<Image>().sprite = UnTickCheckBox;
        CheckBox3.GetComponent<Image>().sprite = UnTickCheckBox;
        CheckBox4.GetComponent<Image>().sprite = UnTickCheckBox;

        if (codeWorng == 1)
        {

            CheckBox1.GetComponent<Image>().sprite = WrongTickCheckBox;
        }
        else if (codeWorng == 2)
        {

            CheckBox2.GetComponent<Image>().sprite = WrongTickCheckBox;
        }
        else if (codeWorng == 3)
        {

            CheckBox3.GetComponent<Image>().sprite = WrongTickCheckBox;
        }
        else if (codeWorng == 4)
        {

            CheckBox4.GetComponent<Image>().sprite = WrongTickCheckBox;
        }

        if (codeRight == 1)
        {

            CheckBox1.GetComponent<Image>().sprite = TickCheckBox;
        }
        else if (codeRight == 2)
        {

            CheckBox2.GetComponent<Image>().sprite = TickCheckBox;
        }
        else if (codeRight == 3)
        {

            CheckBox3.GetComponent<Image>().sprite = TickCheckBox;
        }
        else if (codeRight == 4)
        {

            CheckBox4.GetComponent<Image>().sprite = TickCheckBox;
        }
        currentCheckBox = codeWorng;
    }

    public GameObject SubmitButton;
    public void OnSubmitButton()
    {
        if (currentCheckBox != 0)
        {
            if (correctAns == currentCheckBox)
            {
                //right ans
                RightAnswerText.gameObject.SetActive(true);
            }
            else
            {
                WrongAnswerText.gameObject.SetActive(true);
                InitializeCheckBoxWrong(currentCheckBox, correctAns);
            }

            ShowExplanation();
        }
    }

    public GameObject ExplanationText;
    void ShowExplanation()
    {
        ExplanationTextCenter.gameObject.SetActive(true);
        SubmitButton.SetActive(false);
        ExplanationText.SetActive(true);
    }

    #endregion

    #region Logo Area

    [Header("Logo Pannel")]
    public Text ReportText;

    public void OnPreprationButtonPressed()
    {
        isLeftPannelOpen = false;
        OnMainMenuButtonPressed();
    }

    public void OnRevisionTestButtonPressed()
    {
        ReportText.gameObject.SetActive(true);
        ReportText.text="In development";
        StartCoroutine(ShowAndHideAfterTime(ReportText.gameObject, 2));
    }

    #endregion

    #region Common Functions

    bool isloadingPannelActivated = false;
    void ActivateLoadingDatafromServerPannel()
    {
        if (isloadingPannelActivated == false)
        {
            isloadingPannelActivated = true;
            StartCoroutine(ActivateLoadingDataPannel());
        }
    }

    IEnumerator ActivateLoadingDataPannel()
    {
        if (sendOnPath > 0)
        {
            //OnLoadingDataPopup();
            yield return new WaitForSeconds(0.5f);
            StartCoroutine(ActivateLoadingDataPannel());
        }
        else
        {
            isloadingPannelActivated = false;
            yield return new WaitForSeconds(0.1f);
            //OnCancelPopUpButtonPressed();
        }
    }

    string GetDataValue(string data, string index)
    {
        string value = data.Substring(data.IndexOf(index) + index.Length);
        if (value.Contains("|"))
            value = value.Remove(value.IndexOf("|"));
        return value;
    }

    IEnumerator ShowAndHideAfterTime(GameObject go, float Time)
    {
        yield return new WaitForSeconds(Time);
        go.SetActive(false);
    }

    #endregion

}
