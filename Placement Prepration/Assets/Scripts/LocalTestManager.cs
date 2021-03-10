using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LocalTestManager : MonoBehaviour
{

    string GetQuestion = "PlacementPrepration/LocalTest/createlocaltest.php";
    
     string[] courseData;
     string[] subjectData;
     string[] companyData;

     int[] courseDataSelected;
     int[] subjectDataSelected;
     int[] companyDataSelected;

    bool isNoTimer = false;
    string timerInputed = "";
    bool canSkip = false;
    string quesDuration = "";

    [Header("Common")]
    public GameObject LocalTestPannel;
    public Sprite UnTickSprite;
    public Sprite TickSprite;
    public Sprite WrongTickSprite;

    public GameObject BoxFromScrollViewData;

    public void OnLocalRevisionButtonPressed()
    {
        LocalTestPannel.SetActive(true);
        LoadCourseDataFromAppManager();
        LoadSubjectDataFromAppManager();
        LoadCompanyDataFromAppManager();
    }


    #region Course Selection

    [Header("Course Section")]
    public GameObject AllCourseTickButton;
    public GameObject CustomCourseTickButton;
    public GameObject CustomCourseScrollView;
    public Text TotalCourseSelected;
    public Transform CourseCustomPlaceData;
    

    void LoadCourseDataFromAppManager()
    {
        courseData=gameObject.GetComponent<AppManager>().AllCourseData.Split(';');
        courseDataSelected = new int[courseData.Length];
        CustomCourseScrollView.SetActive(false);
        allcourseSelected = false;
        OnAllCourseButtonPressed();
    }

    bool allcourseSelected = true;
    public void OnAllCourseButtonPressed()
    {
        if (allcourseSelected)
        {
            allcourseSelected = false;
            //deselect
            AllCourseTickButton.GetComponent<Image>().sprite = UnTickSprite;
            CustomCourseTickButton.GetComponent<Image>().sprite = TickSprite;
            InitializeAllScrollViewData();
        }
        else
        {
            allcourseSelected = true;
            //select
            InitializeCourseSelectedData();
            AllCourseTickButton.GetComponent<Image>().sprite = TickSprite;
            CustomCourseTickButton.GetComponent<Image>().sprite = UnTickSprite;
            CustomCourseScrollView.SetActive(false);
            
        }
    }

    void InitializeAllScrollViewData()
    {
        CustomCourseScrollView.SetActive(true);
        GameObject[] gg = GameObject.FindGameObjectsWithTag("Course");
        foreach (GameObject g in gg)
        {
            Destroy(g);
        }

        
        for (int i = 0; i < courseData.Length; i++)
        {
            if (courseData[i] != "")
            {
                courseDataSelected[i] = 1;
                GameObject go = Instantiate(BoxFromScrollViewData);
                go.transform.SetParent(CourseCustomPlaceData.transform);
                go.tag = "Course";
                go.transform.Find("Course").GetComponent<Image>().sprite = TickSprite;
                go.transform.Find("Course").transform.Find("Text").GetComponent<Text>().text = courseData[i];
                int num = i;
                go.transform.Find("Course").GetComponent<Button>().onClick.AddListener(() => OnCourseSelectedUpdateDatato1(num));
                go.name = i.ToString();
            }
            else
            {
                courseDataSelected[i] = 0;
            }
        }
    }

    void OnCourseSelectedUpdateDatato1(int index)
    {
        print("Index" + index);
        GameObject[] go = GameObject.FindGameObjectsWithTag("Course");
        GameObject SelectedObject=null;
        foreach (GameObject g in go)
        {
            if (g.name == index.ToString())
            {
                SelectedObject = g;
                break;
            }
        }

        if (SelectedObject != null)
        {
            if (courseDataSelected[index] == 0)
            {
                courseDataSelected[index] = 1;
                SelectedObject.transform.Find("Course").GetComponent<Image>().sprite = TickSprite;
            }
            else
            {
                courseDataSelected[index] = 0;
                SelectedObject.transform.Find("Course").GetComponent<Image>().sprite = UnTickSprite;
            }
        }
        CalculateCourses();
    }

    void InitializeCourseSelectedData()
    {
        for (int i = 0; i < courseData.Length; i++)
        {
            if (courseData[i] != "" && courseData[i] != "NextQ")
            {
                courseDataSelected[i] = 1;
            }
            else
            {
                courseDataSelected[i] = 0;
            }
        }
        CalculateCourses();
    }

    void CalculateCourses()
    {
        int courseCounter=0;
        for (int i = 0; i < courseDataSelected.Length; i++)
        {
            if (courseDataSelected[i] == 1)
            {
                courseCounter++;
            }
        }
        TotalCourseSelected.text = courseCounter + " Course Selected";
    }

    public void OnSaveCourseButtonPressed()
    {
        CustomCourseScrollView.SetActive(false);
    }

    #endregion

    #region Subject Selection

    [Header("Course Section")]
    public GameObject AllSubjectTickButton;
    public GameObject CustomSubjectTickButton;
    public GameObject CustomSubjectScrollView;
    public Text TotalSubjectSelected;
    public Transform SubjectCustomPlaceData;


    void LoadSubjectDataFromAppManager()
    {
        subjectData = gameObject.GetComponent<AppManager>().AllSubjectData.Split(';');
        subjectDataSelected = new int[subjectData.Length];
        CustomSubjectScrollView.SetActive(false);
        allsubjectSelected = false;
        OnAllSubjectButtonPressed();
    }

    bool allsubjectSelected = true;
    public void OnAllSubjectButtonPressed()
    {
        if (allsubjectSelected)
        {
            allsubjectSelected = false;
            //deselect
            AllSubjectTickButton.GetComponent<Image>().sprite = UnTickSprite;
            CustomSubjectTickButton.GetComponent<Image>().sprite = TickSprite;
            InitializeAllScrollSubjectViewData();
        }
        else
        {
            allsubjectSelected = true;
            //select
            InitializeSubjectSelectedData();
            AllSubjectTickButton.GetComponent<Image>().sprite = TickSprite;
            CustomSubjectTickButton.GetComponent<Image>().sprite = UnTickSprite;
            CustomSubjectScrollView.SetActive(false);

        }
    }

    void InitializeAllScrollSubjectViewData()
    {
        CustomSubjectScrollView.SetActive(true);
        GameObject[] gg = GameObject.FindGameObjectsWithTag("Subject");
        foreach (GameObject g in gg)
        {
            Destroy(g);
        }


        for (int i = 0; i < subjectData.Length; i++)
        {
            if (subjectData[i] != "" && subjectData[i] !="NextQ")
            {
                subjectDataSelected[i] = 1;
                GameObject go = Instantiate(BoxFromScrollViewData);
                go.transform.SetParent(SubjectCustomPlaceData.transform);
                go.tag = "Subject";
                go.transform.Find("Course").GetComponent<Image>().sprite = TickSprite;
                go.transform.Find("Course").transform.Find("Text").GetComponent<Text>().text = subjectData[i];
                int num = i;
                go.transform.Find("Course").GetComponent<Button>().onClick.AddListener(() => OnSubjectSelectedUpdateDatato1(num));
                go.name = i.ToString();
            }
            else
            {
                subjectDataSelected[i] = 0;
            }
        }
    }

    void OnSubjectSelectedUpdateDatato1(int index)
    {
        
        GameObject[] go = GameObject.FindGameObjectsWithTag("Subject");
        GameObject SelectedObject = null;
        foreach (GameObject g in go)
        {
            if (g.name == index.ToString())
            {
                SelectedObject = g;
                break;
            }
        }

        if (SelectedObject != null)
        {
            if (subjectDataSelected[index] == 0)
            {
                subjectDataSelected[index] = 1;
                SelectedObject.transform.Find("Course").GetComponent<Image>().sprite = TickSprite;
            }
            else
            {
                subjectDataSelected[index] = 0;
                SelectedObject.transform.Find("Course").GetComponent<Image>().sprite = UnTickSprite;
            }
        }
        CalculateSubject();
    }

    void InitializeSubjectSelectedData()
    {
        for (int i = 0; i < subjectData.Length; i++)
        {
            if (subjectData[i] != "" && subjectData[i] != "NextQ")
            {
                subjectDataSelected[i] = 1;
            }
            else
            {
                subjectDataSelected[i] = 0;
            }
        }
        CalculateSubject();
    }

    void CalculateSubject()
    {
        int subjectCounter = 0;
        for (int i = 0; i < subjectDataSelected.Length; i++)
        {
            if (subjectDataSelected[i] == 1)
            {
                subjectCounter++;
            }
        }
        TotalSubjectSelected.text = subjectCounter + " Subject Selected";
    }

    public void OnSaveSubjectButtonPressed()
    {
        CustomSubjectScrollView.SetActive(false);
    }

    #endregion

    #region Company Selection

    [Header("Company Section")]
    public GameObject AllCompanyTickButton;
    public GameObject CustomCompanyTickButton;
    public GameObject CustomCompanyScrollView;
    public Text TotalCompanySelected;
    public Transform CompanyCustomPlaceData;


    void LoadCompanyDataFromAppManager()
    {
        companyData = gameObject.GetComponent<AppManager>().AllCompanyData.Split(';');
        companyDataSelected = new int[companyData.Length];
        CustomCompanyScrollView.SetActive(false);
        allcompanySelected = false;
        OnAllCompanyButtonPressed();
    }

    bool allcompanySelected = true;
    public void OnAllCompanyButtonPressed()
    {
        if (allcompanySelected)
        {
            allcompanySelected = false;
            //deselect
            AllCompanyTickButton.GetComponent<Image>().sprite = UnTickSprite;
            CustomCompanyTickButton.GetComponent<Image>().sprite = TickSprite;
            InitializeAllScrollCompanyViewData();
        }
        else
        {
            allcompanySelected = true;
            //select
            InitializeCompanySelectedData();
            AllCompanyTickButton.GetComponent<Image>().sprite = TickSprite;
            CustomCompanyTickButton.GetComponent<Image>().sprite = UnTickSprite;
            CustomCompanyScrollView.SetActive(false);

        }
    }

    void InitializeAllScrollCompanyViewData()
    {
        CustomCompanyScrollView.SetActive(true);
        GameObject[] gg = GameObject.FindGameObjectsWithTag("Company");
        foreach (GameObject g in gg)
        {
            Destroy(g);
        }


        for (int i = 0; i < companyData.Length; i++)
        {
            if (companyData[i] != "" && companyData[i] != "None")
            {
                companyDataSelected[i] = 1;
                GameObject go = Instantiate(BoxFromScrollViewData);
                go.transform.SetParent(CompanyCustomPlaceData.transform);
                go.tag = "Company";
                go.transform.Find("Course").GetComponent<Image>().sprite = TickSprite;
                go.transform.Find("Course").transform.Find("Text").GetComponent<Text>().text = companyData[i];
                int num = i;
                go.transform.Find("Course").GetComponent<Button>().onClick.AddListener(() => OnCompanySelectedUpdateDatato1(num));
                go.name = i.ToString();
            }
            else
            {
                companyDataSelected[i] = 0;
            }
        }
    }

    void OnCompanySelectedUpdateDatato1(int index)
    {

        GameObject[] go = GameObject.FindGameObjectsWithTag("Company");
        GameObject SelectedObject = null;
        foreach (GameObject g in go)
        {
            if (g.name == index.ToString())
            {
                SelectedObject = g;
                break;
            }
        }

        if (SelectedObject != null)
        {
            if (companyDataSelected[index] == 0)
            {
                companyDataSelected[index] = 1;
                SelectedObject.transform.Find("Course").GetComponent<Image>().sprite = TickSprite;
            }
            else
            {
                companyDataSelected[index] = 0;
                SelectedObject.transform.Find("Course").GetComponent<Image>().sprite = UnTickSprite;
            }
        }
        CalculateCompany();
    }

    void InitializeCompanySelectedData()
    {
        for (int i = 0; i < companyData.Length; i++)
        {
            if (companyData[i] != "" && companyData[i] != "None")
            {
                companyDataSelected[i] = 1;
            }
            else
            {
                companyDataSelected[i] = 0;
            }
        }
        CalculateCompany();
    }

    void CalculateCompany()
    {
        int companyCounter = 0;
        for (int i = 0; i < companyDataSelected.Length; i++)
        {
            if (companyDataSelected[i] == 1)
            {
                companyCounter++;
            }
        }
        TotalCompanySelected.text = companyCounter + " Company Selected";
    }

    public void OnSaveCompanyButtonPressed()
    {
        CustomCompanyScrollView.SetActive(false);
    }

    #endregion

    #region Timer Selection

    [Header("Timer Duration")]
    public GameObject NoTimerButton;
    public InputField TimerInput;

    public void OnNoTimerButtonPressed()
    {
        if (isNoTimer == false)
        {
            isNoTimer = true;
            TimerInput.gameObject.SetActive(false);
            NoTimerButton.GetComponent<Image>().sprite = TickSprite;
        }
        else
        {
            isNoTimer = false;
            TimerInput.gameObject.SetActive(true);
            NoTimerButton.GetComponent<Image>().sprite = UnTickSprite;
        }
    }

    #endregion

    #region CanSkip

    [Header("Can Skip")]
    public GameObject NoCanSkipButton;
    public GameObject YesCanSkipButton;

    public void OnCanSkipNoButtonPressed()
    {
        if (canSkip == false)
        {
            canSkip = true;
            YesCanSkipButton.GetComponent<Image>().sprite = TickSprite;
            NoCanSkipButton.GetComponent<Image>().sprite = UnTickSprite;
        }
        else
        {
            canSkip = false;
            YesCanSkipButton.GetComponent<Image>().sprite = UnTickSprite;
            NoCanSkipButton.GetComponent<Image>().sprite = TickSprite;
        }
    }

    #endregion

    #region Genereate Ques amd Ques Duration

    [Header("Gerenrate Questions")]
    public Dropdown GenerateQuestionDropdown;
    public Text TotalQues;
    public Text TotalDuration;

    public void OnGenerateQuestionButtonPressed()
    {
        SetUpQuesDurationDropdown();
        SetUpTimerInputField();
        EncodeSubjectFU();
        EncodeCompanyFU();
        StartCoroutine(GetCourseAndItsSubjectWithTotalQuestions());
    }

    void SetUpQuesDurationDropdown()
    {
        int value = GenerateQuestionDropdown.value;
        quesDuration = GenerateQuestionDropdown.options[value].text;
    }

    void SetUpTimerInputField()
    {
        timerInputed = TimerInput.text;

        if (isNoTimer == false)
        {
            if (timerInputed == "")
            {
                timerInputed = "60";
            }
        }
    }

    string encodeSubject = "";
    string encodeCompany = "";

    void EncodeSubjectFU()
    {
        //subjectData
        //    subjectDataSelected
        for (int i = 0; i < subjectDataSelected.Length; i++)
        {
            if (subjectDataSelected[i] == 1)
            {
                encodeSubject += subjectData[i] + ";";
            }
        }
    }

    void EncodeCompanyFU()
    {
        //subjectData
        //    subjectDataSelected
        for (int i = 0; i < companyDataSelected.Length; i++)
        {
            if (companyDataSelected[i] == 1)
            {
                encodeCompany += companyData[i] + ";";
            }
        }
    }

    IEnumerator GetCourseAndItsSubjectWithTotalQuestions()
    {
        print(encodeSubject);
        print(encodeCompany);
        print(timerInputed);
        WWWForm form1 = new WWWForm();
        form1.AddField("Subject", encodeSubject);
        form1.AddField("Company", encodeCompany);
        form1.AddField("Timer", timerInputed);
        WWW www = new WWW(saveload.ServerLink + GetQuestion, form1);
        //sendOnPath++;
        //ActivateLoadingDatafromServerPannel();
        yield return www;

        print("Return Ques Data = "+www.text);

        string[] items = www.text.Split(';');
        print(items.Length);
        for (int i = 0; i < items.Length - 1; i++)
        {
            
        }
    }

    #endregion

}
/*

IEnumerator GetCourseAndItsSubjectWithTotalQuestions()
    {
        WWW www = new WWW(saveload.ServerLink + GetCourseSubjectCompanyTotalQuesLink);
        //sendOnPath++;
        //ActivateLoadingDatafromServerPannel();
        yield return www;

        print(www.text);
    }

*/