using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class AppController : MonoBehaviour
{
    string SendDataLink = "http://kreasaard.atwebpages.com/PlacementPrepration/insertques.php";
    string GetCourseDataLink = "http://kreasaard.atwebpages.com/PlacementPrepration/getallcourse.php";
    string GetPublisherDataLink = "http://kreasaard.atwebpages.com/PlacementPrepration/getallpublisher.php";
    string GetSubjectDataLink = "http://kreasaard.atwebpages.com/PlacementPrepration/getallsubject.php";
    string GetCompanyDataLink = "http://kreasaard.atwebpages.com/PlacementPrepration/getallcompany.php";
    string GetQuesDataLink = "http://kreasaard.atwebpages.com/PlacementPrepration/getcurrentquesdetails.php";
    string UpdateQuesDataLink = "http://kreasaard.atwebpages.com/PlacementPrepration/updatequesdetails.php";
    string TotalQues = "http://kreasaard.atwebpages.com/PlacementPrepration/gettotalques.php";

    List<string> courseValues = new List<string>();
    List<string> subjectValues = new List<string>();
    List<string> companyValues = new List<string>();
    List<string> publisherValues = new List<string>();

    public Sprite AddSprite;
    public Sprite DeleteSprite;
    public Sprite TickSprite;
    public Sprite UntickSprite;

    string currentCourse="";
    string currentSubject = "";
    string currentCompany = "";
    string currentPublisher = "";

    int currentCourseDropIndex = 0;
    int currentSubjectDropIndex = 0;
    int currentCompanyDropIndex = 0;
    int currentPublisherDropIndex = 0;

    string currentQues = "";
    string currentOption1 = "";
    string currentOption2 = "";
    string currentOption3 = "";
    string currentOption4 = "";
    string currentExplanation = "";
    string currentYoutubeLink = "";
    int correctOption = 0;

    int sendOnPath = 0;
    string prevQuesIndex = "";
    string prevQuesIndexCopy = "";

    void Start()
    {
        sendOnPath = 0;
        correctOption = 0;
        StartCoroutine(PutCourseValuesToListFromServer());
        StartCoroutine(PutSubjectValuesToListFromServer());
        StartCoroutine(PutCompanyValuesToListFromServer());
        StartCoroutine(PutPublisherValuesToListFromServer());
        StartCoroutine(GetTotalQues());
    }

    IEnumerator GetTotalQues()
    {
        WWW www = new WWW(TotalQues);
        sendOnPath++;
        ActivateLoadingDatafromServerPannel();
        yield return www;
        sendOnPath--;
        print(www.text);
        if (www.text != "")
        {
            prevQuesIndex = www.text;
            prevQuesIndexCopy = www.text;
        }
    }


    #region Course

    [Header("Left Pannel Course")]
    public Text courseText;
    public Dropdown courseDropdown;
    public GameObject AddButtonCourse;
    public GameObject InputFieldCourse;
    public GameObject SaveCourseButton;

    #region Initialize Course Data

    void InitializeCourse()
    {
        courseDropdown.options.Clear();
        courseDropdown.AddOptions(courseValues);
        courseText.text = "Course(" + courseValues.Count + ")";
    }

    IEnumerator PutCourseValuesToListFromServer()
    {
        WWW www = new WWW(GetCourseDataLink);
        sendOnPath++;
        ActivateLoadingDatafromServerPannel();
        yield return www;
        sendOnPath--;
        if (www.text != "" && www.text.Contains(";"))
        {
            string[] items = www.text.Split(';');
            courseValues.Clear();
            bool flag=false;
            foreach (string s in items)
            {
                flag=false;
                foreach (string ss in courseValues)
                {
                    if (ss == s)
                    {
                        flag = true;
                    }
                }
                if(flag==false)
                    courseValues.Add(s);
                
            }
        }
        InitializeCourse();
    }
    
    #endregion

    #region Course UI System

    bool addcourse = true;
    public void OnAddCoulumnCouseButtonPressed()
    {
        if (addcourse)
        {
            addcourse = false;
            AddButtonCourse.GetComponent<Image>().sprite = DeleteSprite;
            courseDropdown.gameObject.SetActive(false);
            InputFieldCourse.gameObject.SetActive(true);
            SaveCourseButton.SetActive(true);
        }
        else
        {
            addcourse = true;
            AddButtonCourse.GetComponent<Image>().sprite = AddSprite;
            courseDropdown.gameObject.SetActive(true);
            InputFieldCourse.gameObject.SetActive(false);
            SaveCourseButton.SetActive(false);
        }
    }

    #endregion

    public void OnSaveNewCourseButtonPressed()
    {
        currentCourse = InputFieldCourse.GetComponent<InputField>().text.ToString();
        InputFieldCourse.GetComponent<InputField>().text = "";
        courseValues.Add(currentCourse);
        OnAddCoulumnCouseButtonPressed();
        currentCourseDropIndex = courseValues.Count - 1;
        InitializeCourse();
        courseDropdown.value = currentCourseDropIndex;
    }

    #endregion

    #region Subject

    [Header("Left Pannel Subject")]
    public Text subjectText;
    public Dropdown subjectDropdown;
    public GameObject AddButtonsubject;
    public GameObject InputFieldsubject;
    public GameObject SaveCoursesubject;

    #region Initialize Subject Data

    void InitializeSubject()
    {
        subjectDropdown.options.Clear();
        subjectDropdown.AddOptions(subjectValues);
        subjectText.text = "Subject(" + subjectValues.Count + ")";
    }

    IEnumerator PutSubjectValuesToListFromServer()
    {
        WWW www = new WWW(GetSubjectDataLink);
        sendOnPath++;
        ActivateLoadingDatafromServerPannel();
        yield return www;
        sendOnPath--;
        int counter = 0;
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
                counter++;
            }
        }
        InitializeSubject();
        
        SetQuesNum();
    }

    #endregion

    #region Subject UI System

    bool addsubject = true;
    public void OnAddCoulumnSubjectButtonPressed()
    {
        if (addsubject)
        {
            addsubject = false;
            AddButtonsubject.GetComponent<Image>().sprite = DeleteSprite;
            subjectDropdown.gameObject.SetActive(false);
            InputFieldsubject.gameObject.SetActive(true);
            SaveCoursesubject.SetActive(true);
        }
        else
        {
            addsubject = true;
            AddButtonsubject.GetComponent<Image>().sprite = AddSprite;
            subjectDropdown.gameObject.SetActive(true);
            InputFieldsubject.gameObject.SetActive(false);
            SaveCoursesubject.SetActive(false);
        }
    }

    #endregion

    public void OnSaveNewSubjectButtonPressed()
    {
        currentSubject = InputFieldsubject.GetComponent<InputField>().text.ToString();
        InputFieldsubject.GetComponent<InputField>().text = "";
        subjectValues.Add(currentSubject);
        OnAddCoulumnSubjectButtonPressed();
        currentSubjectDropIndex = subjectValues.Count - 1;
        InitializeSubject();
        subjectDropdown.value = currentSubjectDropIndex;
    }

    #endregion

    #region Company

    [Header("Left Pannel Subject")]
    public Text companyText;
    public Dropdown CompanyDropdown;
    public GameObject AddButtonCompany;
    public GameObject InputFieldCompany;
    public GameObject SaveCourseCompany;

    #region Initialize Company Data

    void InitializeCompany()
    {
        CompanyDropdown.options.Clear();
        CompanyDropdown.AddOptions(companyValues);
        companyText.text = "Company(" + companyValues.Count + ")";
    }

    IEnumerator PutCompanyValuesToListFromServer()
    {
        WWW www = new WWW(GetCompanyDataLink);
        sendOnPath++;
        ActivateLoadingDatafromServerPannel();
        yield return www;
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
        InitializeCompany();
    }

    #endregion

    #region Company UI System

    bool addCompany = true;
    public void OnAddCoulumnCompanyButtonPressed()
    {
        if (addCompany)
        {
            addCompany = false;
            AddButtonCompany.GetComponent<Image>().sprite = DeleteSprite;
            CompanyDropdown.gameObject.SetActive(false);
            InputFieldCompany.gameObject.SetActive(true);
            SaveCourseCompany.SetActive(true);
        }
        else
        {
            addCompany = true;
            AddButtonCompany.GetComponent<Image>().sprite = AddSprite;
            CompanyDropdown.gameObject.SetActive(true);
            InputFieldCompany.gameObject.SetActive(false);
            SaveCourseCompany.SetActive(false);
        }
    }

    #endregion

    public void OnSaveNewCompanyButtonPressed()
    {
        currentCompany = InputFieldCompany.GetComponent<InputField>().text.ToString();
        InputFieldCompany.GetComponent<InputField>().text = "";
        companyValues.Add(currentCompany);
        OnAddCoulumnCompanyButtonPressed();
        currentCompanyDropIndex = companyValues.Count - 1;
        InitializeCompany();
        CompanyDropdown.value = currentCompanyDropIndex;

    }

    #endregion

    #region Publisher

    [Header("Left Pannel Publisher")]
    public Text publisherText;
    public Dropdown publisherDropdown;
    public GameObject AddButtonPublisher;
    public GameObject InputFieldPublisher;
    public GameObject SaveCoursePublisher;

    #region Initialize Publisher Data

    void InitializePublisher()
    {
        publisherDropdown.options.Clear();
        publisherDropdown.AddOptions(publisherValues);
        publisherText.text = "Publisher Name (" + publisherValues.Count + ")";
    }

    IEnumerator PutPublisherValuesToListFromServer()
    {
        WWW www = new WWW(GetPublisherDataLink);
        sendOnPath++;
        ActivateLoadingDatafromServerPannel();
        yield return www;
        sendOnPath--;
        if (www.text != "" && www.text.Contains(";"))
        {
            string[] items = www.text.Split(';');
            publisherValues.Clear();
            bool flag = false;
            foreach (string s in items)
            {
                flag = false;
                foreach (string ss in publisherValues)
                {
                    if (ss == s)
                    {
                        flag = true;
                    }
                }
                if (flag == false)
                    publisherValues.Add(s);
            }
        }
        InitializePublisher();
    }

    #endregion

    #region Publisher UI System

    bool addPublisher = true;
    public void OnAddCoulumnPublisherButtonPressed()
    {
        if (addPublisher)
        {
            addPublisher = false;
            AddButtonPublisher.GetComponent<Image>().sprite = DeleteSprite;
            publisherDropdown.gameObject.SetActive(false);
            InputFieldPublisher.gameObject.SetActive(true);
            SaveCoursePublisher.SetActive(true);
        }
        else
        {
            addPublisher = true;
            AddButtonPublisher.GetComponent<Image>().sprite = AddSprite;
            publisherDropdown.gameObject.SetActive(true);
            InputFieldPublisher.gameObject.SetActive(false);
            SaveCoursePublisher.SetActive(false);
        }
    }

    #endregion

    public void OnSaveNewPublisherButtonPressed()
    {
        currentPublisher = InputFieldPublisher.GetComponent<InputField>().text.ToString();
        InputFieldPublisher.GetComponent<InputField>().text = "";
        publisherValues.Add(currentPublisher);
        OnAddCoulumnPublisherButtonPressed();
        currentPublisherDropIndex = publisherValues.Count - 1;
        InitializePublisher();
        publisherDropdown.value = currentPublisherDropIndex;

    }

    #endregion

    #region Other Stats

    [Header("Other Things")]
    public Text QuesNumber;
    public GameObject NextButtonLeftPannel;
    public GameObject PreviousPannelLeftPannel;
    public GameObject SaveToDatabaseButton;
    public GameObject UpdateToDatabaseButton;

    void SetQuesNum()
    {
        QuesNumber.text = prevQuesIndex;
        CorrectOptionSelect(0);
        if (prevQuesIndex == prevQuesIndexCopy)
        {
            //dont show update button and next button
            UpdateToDatabaseButton.SetActive(false);
            NextButtonLeftPannel.SetActive(false);
            SaveToDatabaseButton.SetActive(true);
        }
        else
        {
            SaveToDatabaseButton.SetActive(false);
            NextButtonLeftPannel.SetActive(true);
            UpdateToDatabaseButton.SetActive(true);
        }
    }

    public void OnPreviousButtonPressed()
    {
        int num = int.Parse(prevQuesIndex);
        num--;
        if (num > 0)
        {
            prevQuesIndex = num.ToString();
            StartCoroutine(GetQuesDataFromServer(num));
            SetQuesNum();
        }
    }

    public void OnNextButtonPressed()
    {
        int num = int.Parse(prevQuesIndex);
        num++;
        prevQuesIndex = num.ToString();
        StartCoroutine(GetQuesDataFromServer(num));
        SetQuesNum();
    }

    IEnumerator GetQuesDataFromServer(int num)
    {
        WWWForm form1 = new WWWForm();
        form1.AddField("id", num);
        WWW www = new WWW(GetQuesDataLink, form1);
        sendOnPath++;
        ActivateLoadingDatafromServerPannel();
        yield return www;
        sendOnPath--;
       
        if (www.text.Contains("|"))
        {
           sendOnPath--;
           QuesText.text= SymbolDecoder( GetDataValue(www.text, "Ques:"));
           Option1Text.text = SymbolDecoder( GetDataValue(www.text, "Option1:"));
           Option2Text.text = SymbolDecoder( GetDataValue(www.text, "Option2:"));
           Option3Text.text = SymbolDecoder( GetDataValue(www.text, "Option3:"));
           Option4Text.text = SymbolDecoder( GetDataValue(www.text, "Option4:"));
           ExplanationText.text = SymbolDecoder( GetDataValue(www.text, "Explanation:"));
           YoutubeText.text = SymbolDecoder( GetDataValue(www.text, "YoutubeLink:"));

            //set drop downs
            //Course Dropdown
            int dropdownindex=0;
            string temp=GetDataValue(www.text, "Course:");
            for(int i=0;i<courseValues.Count;i++)
            {
                if (temp == courseValues[i])
                {
                    dropdownindex = i;
                    break;
                }
            }
            courseDropdown.value = dropdownindex;

            //Subject Dropdown
            dropdownindex = 0;
            temp = GetDataValue(www.text, "Subject:");
            for (int i = 0; i < subjectValues.Count; i++)
            {
                if (temp == subjectValues[i])
                {
                    dropdownindex = i;
                    break;
                }
            }
            subjectDropdown.value = dropdownindex;

            //Company Dropdown
            dropdownindex = 0;
            temp = GetDataValue(www.text, "Company:");
            for (int i = 0; i < companyValues.Count; i++)
            {
                if (temp == companyValues[i])
                {
                    dropdownindex = i;
                    break;
                }
            }
            CompanyDropdown.value = dropdownindex;

            //corect
            int correct = int.Parse(GetDataValue(www.text, "Correct:"));
            CorrectOptionSelect(correct);
        }
    }


    #endregion

    #region Get And Check All the Values

    [Header("Center part")]
    public InputField QuesText;
    public InputField Option1Text;
    public InputField Option2Text;
    public InputField Option3Text;
    public InputField Option4Text;
    public InputField ExplanationText;
    public InputField YoutubeText;

    public GameObject Option1CorrectButton;
    public GameObject Option2CorrectButton;
    public GameObject Option3CorrectButton;
    public GameObject Option4CorrectButton;

    public void OnSaveToDatabaseButtonPressed()
    {
        //Get From the Locals
        GetAllTheValues();

        //Send To Server
       StartCoroutine(SendToDatabase());
    }

    void GetAllTheValues()
    {
        
        currentCourse = SymbolEncoder(courseValues[courseDropdown.value]);
        currentSubject = SymbolEncoder(subjectValues[subjectDropdown.value]);
        currentCompany = SymbolEncoder(companyValues[CompanyDropdown.value]);
        currentPublisher = SymbolEncoder(publisherValues[publisherDropdown.value]);
        currentQues = SymbolEncoder(QuesText.text.ToString());
        currentOption1 = SymbolEncoder(Option1Text.text.ToString());
        currentOption2 = SymbolEncoder(Option2Text.text.ToString());
        currentOption3 = SymbolEncoder(Option3Text.text.ToString());
        currentOption4 = SymbolEncoder(Option4Text.text.ToString());
        currentExplanation = SymbolEncoder(ExplanationText.text.ToString());
        currentYoutubeLink = SymbolEncoder(YoutubeText.text.ToString());

    }

    public void CorrectOptionSelect(int option)
    {
        Option1CorrectButton.GetComponent<Image>().sprite = UntickSprite;
        Option2CorrectButton.GetComponent<Image>().sprite = UntickSprite;
        Option3CorrectButton.GetComponent<Image>().sprite = UntickSprite;
        Option4CorrectButton.GetComponent<Image>().sprite = UntickSprite;

        if (option == 1)
        {
            correctOption = 1;
            Option1CorrectButton.GetComponent<Image>().sprite = TickSprite;
        }
        else if (option ==2)
        {
            correctOption = 2;
            Option2CorrectButton.GetComponent<Image>().sprite = TickSprite;
        }
        else if (option == 3)
        {
            correctOption = 3;
            Option3CorrectButton.GetComponent<Image>().sprite = TickSprite;
        }
        else if (option == 4)
        {
            correctOption = 4;
            Option4CorrectButton.GetComponent<Image>().sprite = TickSprite;
        }
    }

    IEnumerator SendToDatabase()
    {
        WWWForm form1 = new WWWForm();
        form1.AddField("Course", currentCourse);
        form1.AddField("Subject", currentSubject);
        form1.AddField("Ques", currentQues);
        form1.AddField("Option1", currentOption1);
        form1.AddField("Option2", currentOption2);
        form1.AddField("Option3", currentOption3);
        form1.AddField("Option4", currentOption4);
        form1.AddField("Explanation", currentExplanation);
        form1.AddField("Correct", correctOption);
        form1.AddField("Company", currentCompany);
        form1.AddField("Publisher", currentPublisher);
        form1.AddField("YoutubeLink", currentYoutubeLink);
        WWW www = new WWW(SendDataLink, form1);
        ShowLoadingRemoveRest();
        yield return www;
        print(www.text);
        if (www.text.Contains("success"))
        {
            //show success window
            OnSuccessPopup();
            prevQuesIndex = GetDataValue(www.text, "success:");
            prevQuesIndexCopy = prevQuesIndex;
            int num = int.Parse(prevQuesIndexCopy);
            num++;
            prevQuesIndexCopy = num.ToString();
            SetQuesNum();
        }
        else
        {
            //Give error window
            OnFailedPopup();
        }

    }

    public void OnClearAllinputsButtonPressed()
    {
        prevQuesIndex = prevQuesIndexCopy;
        SetQuesNum();
        OnCancelPopUpButtonPressed();
        QuesText.text = "";
        Option1Text.text = "";
        Option2Text.text = "";
        Option3Text.text = "";
        Option4Text.text = "";
        ExplanationText.text = "";
        YoutubeText.text = "";
        CorrectOptionSelect(0);
    }

    #endregion

    #region UpdateQues

    public void OnUpdateButtonPressed()
    {
        //Get From the Locals
        GetAllTheValues();

        //Send To Server
        StartCoroutine(UpdateQuesToDatabase());

    }

    IEnumerator UpdateQuesToDatabase()
    {
        WWWForm form1 = new WWWForm();
        form1.AddField("id", int.Parse(prevQuesIndex));
        form1.AddField("Course", currentCourse);
        form1.AddField("Subject", currentSubject);
        form1.AddField("Ques", currentQues);
        form1.AddField("Option1", currentOption1);
        form1.AddField("Option2", currentOption2);
        form1.AddField("Option3", currentOption3);
        form1.AddField("Option4", currentOption4);
        form1.AddField("Explanation", currentExplanation);
        form1.AddField("Correct", correctOption);
        form1.AddField("Company", currentCompany);
        form1.AddField("Publisher", currentPublisher);
        form1.AddField("YoutubeLink", currentYoutubeLink);
        WWW www = new WWW(UpdateQuesDataLink, form1);
        ShowLoadingRemoveRest();
        yield return www;
        print(www.text);
        if (www.text.Contains("success"))
        {
            //show success window
            OnUpdatedDataPopup();
            SetQuesNum();
        }
        else
        {
            //Give error window
            OnFailedPopup();
        }

    }

    #endregion

    #region Popups

    [Header("PopUps")]
    public GameObject PopUpPannel;
    public GameObject Loading;
    public GameObject Success;
    public GameObject Failed;
    public GameObject LoadingData;
    public GameObject UpdatedData;

    void ShowLoadingRemoveRest()
    {
        PopUpPannel.SetActive(true);
        Loading.SetActive(true);
        Success.SetActive(false);
        Failed.SetActive(false);
        LoadingData.SetActive(false);
        UpdatedData.SetActive(false);
    }

    void OnSuccessPopup()
    {
        Loading.SetActive(false);
        Success.SetActive(true);
    }

    void OnFailedPopup()
    {
        Loading.SetActive(false);
        Failed.SetActive(true);
    }

    void OnUpdatedDataPopup()
    {
        Loading.SetActive(false);
        UpdatedData.SetActive(true);
    }

    void OnLoadingDataPopup()
    {
        PopUpPannel.SetActive(true);
        Loading.SetActive(true);
        LoadingData.SetActive(true);
    }

    public void OnCancelPopUpButtonPressed()
    {
        PopUpPannel.SetActive(false);
        Loading.SetActive(true);
        Success.SetActive(false);
        Failed.SetActive(false);
        LoadingData.SetActive(false);
    }

    public void OnReloadInternetButtonPressed()
    {
        Start();
    }

    #endregion

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
            OnLoadingDataPopup();
            yield return new WaitForSeconds(0.5f);
            StartCoroutine(ActivateLoadingDataPannel());
        }
        else
        {
            isloadingPannelActivated = false;
            yield return new WaitForSeconds(0.1f);
            OnCancelPopUpButtonPressed();
        }
    }

    string GetDataValue(string data, string index)
    {
        string value = data.Substring(data.IndexOf(index) + index.Length);
        if (value.Contains("|"))
            value = value.Remove(value.IndexOf("|"));
        return value;
    }

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
    
}
