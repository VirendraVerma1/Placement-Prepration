using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LocalTestManager : MonoBehaviour
{
    string GetCourseSubjectCompanyTotalQuesLink = "";

    public string[] courseData;
    string[] subjectData;
    string[] companyData;

    public int[] courseDataSelected;
    int[] subjectDataSelected;
    int[] commpanyDataSelected;

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
            if (courseData[i] != "")
            {
                courseDataSelected[i] = 1;
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
            if (subjectData[i] != "")
            {
                subjectDataSelected[i] = 1;
                GameObject go = Instantiate(BoxFromScrollViewData);
                go.transform.SetParent(SubjectCustomPlaceData.transform);
                go.tag = "Subject";
                go.transform.Find("Course").GetComponent<Image>().sprite = TickSprite;
                go.transform.Find("Course").transform.Find("Text").GetComponent<Text>().text = courseData[i];
                int num = i;
                go.transform.Find("Course").GetComponent<Button>().onClick.AddListener(() => OnSubjectSelectedUpdateDatato1(num));
                go.name = i.ToString();
            }
        }
    }

    void OnSubjectSelectedUpdateDatato1(int index)
    {
        print("Index" + index);
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
            if (subjectData[i] != "")
            {
                subjectDataSelected[i] = 1;
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