using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;


public class JobManager : MonoBehaviour
{
    
    List<JobDataBean> jobData = new List<JobDataBean>();
    List<string> allskills = new List<string>();
    List<GameObject> allskillsgo = new List<GameObject>();
    private float refreshFrequency = 3f;

    private void Start()
    {
        isJobListPageOn = false;
        madedskills = "";
        filteredexperience = "";
        madedlocation = "";
        refreshFrequency = 1f;
        state = "all";
        RecommendedFilterPannel.SetActive(false);
    }


    public void OnJobListButtonPressed()
    {
        JobDetailPannel.SetActive(false);
        StartCoroutine(GetNewAllTheJobs());
        
        isJobListOpen = 0;
        if(isJobListPageOn==false)
        {
            isJobListPageOn = true;
            StartCoroutine(RefreshMyJob());
        }
        
    }

    //refresh jobs in every minute
    bool isJobListPageOn = false;
    IEnumerator RefreshMyJob()
    {
        int con = 1;
        while(con>0)
        {
            yield return new WaitForSeconds(refreshFrequency);
            print("revolve");
            if(isJobListOpen == 0)
            {
                con = 0;
                print("zero");
            }
            else if (isJobListOpen == -1)
            {
                con = -1;
                print("sad");

            }

        }
        if(con==0)
        {
            OnJobListButtonPressed();
        }
        isJobListPageOn = false;
        
        
    }

    int isJobListOpen = 0;
    void Update()
    {
        if (Input.GetKey(KeyCode.Escape))
        {
            if (isJobListOpen == 1)
            {
                StartCoroutine(DisableJobListThings(0));
                OnJobDetailsCloseButtonPressed();
            }
            else if (isJobListOpen == 0)
            {
                StartCoroutine(DisableJobListThings(-1));
                gameObject.GetComponent<MainManager>().OnHomePageButtonPressed();
            }
        }
    }

    IEnumerator DisableJobListThings(int setvalue)
    {
        yield return new WaitForSeconds(1);
        isJobListOpen = setvalue;
        if (isJobListOpen == -1)
            gameObject.GetComponent<JobManager>().enabled = false;
    }

    #region Pannel Selector all jobs, recommended jobs

    [Header("Pannel Selector")]
    public Image AllJobsImage;
    public Image RecommendedJobsImage;
    public Color ButtonPressedColor;

    string state = "";//it should be all,recommended
    bool isalreadyRecommended = false;
    public void OnAllJobsButtonPressed()
    {
        state = "all";
        AllJobsImage.color = ButtonPressedColor;
        RecommendedJobsImage.color = Color.white;
        madedskills = "";
        filteredexperience = "";
        OnJobListButtonPressed();
    }

    public void OnRecommendedButtonPressed()
    {
        state = "recommended";
        AllJobsImage.color = Color.white;
        RecommendedJobsImage.color = ButtonPressedColor;

        if ((saveload.allSkills == "" || saveload.allSkills == null) && (saveload.selectedLocations == "" || saveload.selectedLocations == null))
            InitializeinRecommendedFilter();
        else
            OnRecommendedSearchButtonPressed();
    }

    #endregion

    #region new get all the jobs

    IEnumerator GetNewAllTheJobs()
    {
        print("Skills:"+madedskills);
        WWWForm form1 = new WWWForm();
        form1.AddField("experience", filteredexperience);
        form1.AddField("keyskills", madedskills);
        form1.AddField("madedlocation", madedlocation);
        WWW www = new WWW(saveload.LaravelServerLink + saveload.JobDetails, form1);
        
        yield return www;
        print("JobData:" + www.text);

        if (www.error == null)
            processjsonjobData(www.text);
        else
            print("something went wrong");

    }

    void processjsonjobData(string url_text)
    {
        JsonJobs jsonData = JsonUtility.FromJson<JsonJobs>(url_text);
        GameObject[] ggo = GameObject.FindGameObjectsWithTag("JobList");
        foreach (GameObject g in ggo)
        {
            Destroy(g);
        }
        jobData.Clear();
        refreshFrequency = 60f;
        foreach (jobsData item in jsonData.jobs)
        {
            string CompanyPhoto = item.CompanyPhoto;
            string CompanyName = item.CompanyName;
            string Post = item.Post;
            string Package = item.Package;
            string Experience = item.Experience;
            string Bond = item.Bond;
            string Location = item.Location;
            string Role = item.Role;
            string IndustyType = item.IndustyType;
            string FunctionalArea = item.FunctionalArea;
            string EmploymentType = item.EmploymentType;
            string RoleCategory = item.RoleCategory;
            string Education = item.Education;
            string KeySkill = item.KeySkill;
            string Responsibility = item.Responsibility;
            string Knowledge = item.Knowledge;
            string Benifit = item.Benifit;
            string AboutCompany = item.AboutCompany;
            int TotalEmployee = item.TotalEmployee;
            string LastApplyDate = item.LastApplyDate;
            string ApplyLink = item.ApplyLink;
            string Description = item.Description;
            string Ago = item.ago;
            jobData.Add(new JobDataBean(CompanyPhoto, CompanyName, Post, Package, Experience, Bond, Location, Role, IndustyType, FunctionalArea, EmploymentType
            , RoleCategory
            , Education
            , KeySkill
            , Responsibility
            , Knowledge
            , Benifit
            , AboutCompany
            , TotalEmployee
            , LastApplyDate
            , ApplyLink
            , Description
            , Ago));
        }
        CreteJobList();
        print("completed");
    }

    #endregion

    #region old get all jobs

    IEnumerator GetAllTheJobs()
    {
        WWWForm form1 = new WWWForm();
        WWW www = new WWW(saveload.ServerLink+saveload.JobDetails);
        //ShowLoadingRemoveRest();
        yield return www;
        print("JobData:"+www.text);

        if (www.text.Contains("CompanyName"))
        {
            string[] items=www.text.Split(';');
            for(int i=0;i<items.Length-1;i++){

                string CompanyPhoto=GetDataValue(items[i],"CompanyPhoto:");
                string CompanyName = GetDataValue(items[i], "CompanyName:");
                string Post = GetDataValue(items[i], "Post:");
                string Package = GetDataValue(items[i], "Package:");
                string Experience = GetDataValue(items[i], "Experience:");
                string Bond = GetDataValue(items[i], "Bond:");
                string Location = GetDataValue(items[i], "Location:");
                string Role = GetDataValue(items[i], "Role:");
                string IndustyType = GetDataValue(items[i], "IndustyType:");
                string FunctionalArea = GetDataValue(items[i], "FunctionalArea:");
                string EmploymentType = GetDataValue(items[i], "EmploymentType:");
                string RoleCategory = GetDataValue(items[i], "RoleCategory:");
                string Education = GetDataValue(items[i], "Education:");
                string KeySkill = GetDataValue(items[i], "KeySkill:");
                string Responsibility = GetDataValue(items[i], "Responsibility:");
                string Knowledge = GetDataValue(items[i], "Knowledge:");
                string Benifit = GetDataValue(items[i], "Benifit:");
                string AboutCompany = GetDataValue(items[i], "AboutCompany:");
                int TotalEmployee = int.Parse(GetDataValue(items[i], "TotalEmployee:"));
                string LastApplyDate = GetDataValue(items[i], "LastApplyDate:");
                string ApplyLink = GetDataValue(items[i], "ApplyLink:");
                string Description = GetDataValue(items[i], "Description:");
                string Ago = GetDataValue(items[i], "Ago:");
                jobData.Add(new JobDataBean(CompanyPhoto, CompanyName, Post, Package, Experience, Bond, Location, Role, IndustyType, FunctionalArea, EmploymentType
                , RoleCategory
                , Education
                , KeySkill
                , Responsibility
                , Knowledge
                , Benifit
                , AboutCompany
                , TotalEmployee
                , LastApplyDate
                , ApplyLink
                , Description
                , Ago));
                
                
            }
            CreteJobList();
            
        }

    }

    #endregion

    #region List All Jobs

    [Header("Job List Things")]
    public GameObject JobListPrefab;
    public Transform JobToPlace;


    void CreteJobList()
    {
        GameObject[] ggo = GameObject.FindGameObjectsWithTag("JobList");
        foreach (GameObject g in ggo)
        {
            Destroy(g);
        }

        int index = 0;
        foreach (JobDataBean g in jobData)
        {
            GameObject go = GameObject.Instantiate(JobListPrefab);
            go.transform.SetParent(JobToPlace.transform);
            go.transform.localScale = Vector3.one;
            StartCoroutine(PlaceImageToObject(go.transform.Find("CompanyLogo").transform.GetComponent<Image>(), g.CompanyPhoto));
            go.transform.Find("CompanyName").transform.GetComponent<Text>().text = g.CompanyName;
            go.transform.Find("Post").transform.GetComponent<Text>().text = "<b>Post: </b>" + g.Post;
            go.transform.Find("Package").transform.GetComponent<Text>().text = "<b>Package: </b>" + g.Package;
            go.transform.Find("Experince").transform.GetComponent<Text>().text = "<b>Experience: </b>" + g.Experience;
            go.transform.Find("Location").transform.GetComponent<Text>().text = "<b>Location: </b>" + g.Location;
            go.transform.Find("Ago").transform.GetComponent<Text>().text = g.Ago;
            if (g.LastApplyDate == "0000-00-00")
                go.transform.Find("LastDate").transform.GetComponent<Text>().text = "";
            else
                go.transform.Find("LastDate").transform.GetComponent<Text>().text = g.LastApplyDate;
            go.transform.Find("Skills").transform.GetComponent<Text>().text = "<b>Skills: </b>" + g.KeySkill;
            int n = index;
            go.GetComponent<Button>().onClick.AddListener(() => OnJobButtonPressed(n));
            index++;
        }
    }

    #endregion

    #region On Job Button Pressed
    [Header("Job detail Pannel")]
    public GameObject JobDetailPannel;
    public GameObject JobDetailThings;
    public GameObject OtherContent;
    public Text CompanyNameHead;
    public Button ApplyLinkButton;

    void OnJobButtonPressed(int index)
    {
        isJobListOpen = 1;
        JobDetailPannel.SetActive(true);
        JobDataBean g = jobData[index];
        GameObject go = JobDetailThings;
        GameObject ggo = OtherContent;
        StartCoroutine(PlaceImageToObject(go.transform.Find("CompanyLogo").transform.GetComponent<Image>(), g.CompanyPhoto));
        CompanyNameHead.text = g.CompanyName;
        go.transform.Find("CompanyName").transform.GetComponent<Text>().text = g.CompanyName;
        go.transform.Find("Post").transform.GetComponent<Text>().text = "<b>Post:</b> " + g.Post;
        go.transform.Find("Package").transform.GetComponent<Text>().text = "<b>Package:</b> " + g.Package;
        go.transform.Find("Experince").transform.GetComponent<Text>().text = "<b>Experience:</b> " + g.Experience;
        go.transform.Find("Location").transform.GetComponent<Text>().text = "<b>Location:</b> " + g.Location;
        if (g.LastApplyDate == "0000-00-00")
            go.transform.Find("LastDate").transform.GetComponent<Text>().text = "";
        else
            go.transform.Find("LastDate").transform.GetComponent<Text>().text = g.LastApplyDate;
        //go.transform.Find("Skills").transform.GetComponent<Text>().text = "<b>Skills:</b> " + g.KeySkill;

        if (g.Ago != "")
        {
            ggo.transform.Find("Ago").transform.localScale = Vector3.one;
            ggo.transform.Find("Ago").transform.GetComponent<Text>().text = g.Ago;
        }
        else
        {
            ggo.transform.Find("Ago").transform.GetComponent<Text>().text = "";
            ggo.transform.Find("Ago").transform.localScale = Vector3.zero;
        }
        if (g.KeySkill != "")
        {
            ggo.transform.Find("Skills").transform.localScale = Vector3.one;
            ggo.transform.Find("Skills").transform.GetComponent<Text>().text = "<b>Skills:</b> " + g.KeySkill;
        }
        else
        {
            ggo.transform.Find("Skills").transform.GetComponent<Text>().text = "";
            ggo.transform.Find("Skills").transform.localScale = Vector3.zero;
        }
        if (g.Role != "")
        {
            ggo.transform.Find("Role").transform.localScale = Vector3.one;
            ggo.transform.Find("Role").transform.GetComponent<Text>().text = "<b>Role:</b> " + g.Role;
        }
        else
        {
            ggo.transform.Find("Role").transform.GetComponent<Text>().text = "";
            ggo.transform.Find("Role").transform.localScale = Vector3.zero;
        }
        if (g.Bond != "")
        {
            ggo.transform.Find("Bond").transform.localScale = Vector3.one;
            ggo.transform.Find("Bond").transform.GetComponent<Text>().text = "<b>Bond:</b> " + g.Bond + " year";
        }
        else
        {
            ggo.transform.Find("Bond").transform.GetComponent<Text>().text = "";
            ggo.transform.Find("Bond").transform.localScale = Vector3.zero;
        }
        if (g.FunctionalArea != "")
        {
            ggo.transform.Find("FunctionalArea").transform.localScale = Vector3.one;
            ggo.transform.Find("FunctionalArea").transform.GetComponent<Text>().text = "<b>FunctionalArea:</b> " + g.FunctionalArea;
        }
        else
        {
            ggo.transform.Find("FunctionalArea").transform.GetComponent<Text>().text = "";
            ggo.transform.Find("FunctionalArea").transform.localScale = Vector3.zero;
        }
        if (g.IndustyType != "")
        {
            ggo.transform.Find("IndustryType").transform.localScale = Vector3.one;
            ggo.transform.Find("IndustryType").transform.GetComponent<Text>().text = "<b>IndustyType:</b> " + g.IndustyType;
        }
        else
        {
            ggo.transform.Find("IndustryType").transform.GetComponent<Text>().text = "";
            ggo.transform.Find("IndustryType").transform.localScale = Vector3.zero;
        }
        if (g.EmploymentType != "")
        {
            ggo.transform.Find("EmploymentType").transform.localScale = Vector3.one;
            ggo.transform.Find("EmploymentType").transform.GetComponent<Text>().text = "<b>EmploymentType:</b> " + g.EmploymentType;
        }
        else
        {
            ggo.transform.Find("EmploymentType").transform.GetComponent<Text>().text = "";
            ggo.transform.Find("EmploymentType").transform.localScale = Vector3.zero;
        }
        if (g.RoleCategory != "")
        {
            ggo.transform.Find("RoleCategory").transform.localScale = Vector3.one;
            ggo.transform.Find("RoleCategory").transform.GetComponent<Text>().text = "<b>RoleCategory:</b> " + g.RoleCategory;
        }
        else
        {
            ggo.transform.Find("RoleCategory").transform.GetComponent<Text>().text = "";
            ggo.transform.Find("RoleCategory").transform.localScale = Vector3.zero;
        }
        if (g.Education != "")
        {
            ggo.transform.Find("Education").transform.localScale = Vector3.one;
            ggo.transform.Find("Education").transform.GetComponent<Text>().text = "<b>Education:</b> " + g.Education;
        }
        else
        {
            ggo.transform.Find("Education").transform.GetComponent<Text>().text = "";
            ggo.transform.Find("Education").transform.localScale = Vector3.zero;
        }
        if (g.Responsibility != "")
        {
            ggo.transform.Find("Responsibility").transform.localScale = Vector3.one;
            ggo.transform.Find("Responsibility").transform.GetComponent<Text>().text = "<b>Responsibility:</b> " + g.Responsibility;
        }
        else
        {
            ggo.transform.Find("Responsibility").transform.GetComponent<Text>().text = "";
            ggo.transform.Find("Responsibility").transform.localScale = Vector3.zero;
        }
        if (g.Knowledge != "")
        {
            ggo.transform.Find("Knowledge").transform.localScale = Vector3.one;
            ggo.transform.Find("Knowledge").transform.GetComponent<Text>().text = "<b>Knowledge:</b> " + g.Knowledge;
        }
        else
        {
            ggo.transform.Find("Knowledge").transform.GetComponent<Text>().text = "";
            ggo.transform.Find("Knowledge").transform.localScale = Vector3.zero;
        }
        if (g.Benifit != "")
        {
            ggo.transform.Find("Benifit").transform.localScale = Vector3.one;
            ggo.transform.Find("Benifit").transform.GetComponent<Text>().text = "<b>Benifit:</b> " + g.Benifit;
        }
        else
        {
            ggo.transform.Find("Benifit").transform.GetComponent<Text>().text = "";
            ggo.transform.Find("Benifit").transform.localScale = Vector3.zero;
        }
        if (g.TotalEmployee != 0)
        {
            ggo.transform.Find("TotalEmployee").transform.localScale = Vector3.one;
            ggo.transform.Find("TotalEmployee").transform.GetComponent<Text>().text = "<b>TotalEmployee:</b> " + g.TotalEmployee;
        }
        else
        {
            ggo.transform.Find("TotalEmployee").transform.GetComponent<Text>().text = "";
            ggo.transform.Find("TotalEmployee").transform.localScale = Vector3.zero;
        }

        if (g.AboutCompany != "")
        {
            ggo.transform.Find("AboutCompany").transform.GetComponent<Text>().text = "<b>About Company:</b> " + g.AboutCompany;
        }
        else
        {
            ggo.transform.Find("AboutCompany").transform.GetComponent<Text>().text = "";
        }
        if (g.Description != "")
        {
            ggo.transform.Find("Description").transform.GetComponent<Text>().text = "<b>Description:</b> " + g.Description;
        }
        else
        {
            ggo.transform.Find("Description").transform.GetComponent<Text>().text = "";
        }

        string Link = g.ApplyLink;
        ggo.transform.Find("ApplyLink").transform.Find("Button").GetComponent<Button>().onClick.AddListener(() => ApplyJob(Link));


    }

    void ApplyJob(string URL)
    {
        ApplyLinkButton.onClick.RemoveAllListeners();
        Application.OpenURL(URL);
        saveload.applyCount++;
        saveload.Save();
    }

    public void OnJobDetailsCloseButtonPressed()
    {
        JobDetailPannel.SetActive(false);
        isJobListOpen = 0;
    }

    #endregion

    #region get all the skills

    [Header("Skills")]
    public GameObject FilterPannel;
    public GameObject SkillBox;
    public Transform SkillContentPlace;
    public Sprite TickSprite;
    public Sprite UntickSprite;
    List<string> savedSkills = new List<string>();
    List<string> selectedSkills = new List<string>();

    public void ShowFilterOption()
    {
        if(state=="all")
        {
            FilterPannel.SetActive(true);
            LoadFilterSkills();
        }
        else
        {
            InitializeinRecommendedFilter();
        }
    }

    public void LoadAllTheSkillData()
    {
        StartCoroutine(GetAllTheSkills());
    }

    IEnumerator GetAllTheSkills()
    {
        WWWForm form1 = new WWWForm();
        form1.AddField("connection_id", "Hello");
        WWW www = new WWW(saveload.LaravelServerLink + saveload.SkillList, form1);

        yield return www;
        print("SkillData:" + www.text);

        if (www.error == null)
            processjsonallskillsData(www.text);
        else
            print("something went wrong");

    }

    void processjsonallskillsData(string url_text)
    {
        SkillList skillData = JsonUtility.FromJson<SkillList>(url_text);
        
        allskills.Clear();
        allskillsgo.Clear();

        foreach (skillData item in skillData.skills)
        {
            allskills.Add(item.name);
        }
        
    }

    void LoadFilterSkills()//call it from the filter button
    {
        

        //deleting previous skills for refreshing new one
        GameObject[] ggo = GameObject.FindGameObjectsWithTag("SkillList");
        foreach (GameObject g in ggo)
        {
            Destroy(g);
        }
        allskillsgo.Clear();

        int index = 0;
        //initializing new skills
        foreach (string skill in allskills)
        {
            GameObject go = GameObject.Instantiate(SkillBox);
            go.transform.SetParent(SkillContentPlace.transform);
            go.transform.localScale = Vector3.one;
            go.transform.Find("SkillName").GetComponent<Text>().text = skill;

            bool flag=false;
            foreach(string s in savedSkills)
            {
                if(s==skill)
                {
                    flag = true;
                    break;
                }
            }
            if(flag==false)
            go.transform.Find("CheckBox").GetComponent<Image>().sprite = UntickSprite;
            else
            go.transform.Find("CheckBox").GetComponent<Image>().sprite = TickSprite;
            int n = index;
            go.GetComponent<Button>().onClick.AddListener(() => onperticularskillbuttonpressed(n));
            allskillsgo.Add(go);
            index++;
        }
    }

    void onperticularskillbuttonpressed(int index)
    {
        print(allskills[index]+"pressed");
        bool flag = false;
        int i = 0;
        foreach(string s in savedSkills)
        {
            if(s==allskills[index])
            {
                flag = true;
                savedSkills.RemoveAt(i);//remove this name from the saved
                break;
            }
            i++;
        }

        if(flag==true)
        {
            //means already selected unselect that item
            allskillsgo[index].transform.Find("CheckBox").GetComponent<Image>().sprite = UntickSprite;
        }
        else
        {
            //add this item
            savedSkills.Add(allskills[index]);
            allskillsgo[index].transform.Find("CheckBox").GetComponent<Image>().sprite = TickSprite;
        }
    }

    public void OnCloseFilterButton()
    {
        FilterPannel.SetActive(false);
    }


    public Dropdown ExperienceDropDown;
    string madedskills="";
    string filteredexperience = "";
    string madedlocation = "";
    public void OnSearchByFilterButtonPressed()
    {
        filteredexperience = ExperienceDropDown.options[ExperienceDropDown.value].text;
        madedskills = "";
        foreach (string s in savedSkills)
        {
            if(s!=""||s!=null)
                madedskills += s + ",";
        }
        FilterPannel.SetActive(false);
        OnJobListButtonPressed();
    }

    #endregion

    #region Recommended Jobs

    [Header("Recommended Filter")]
    public GameObject RecommendedFilterPannel;
    
    List<string> recommendedSkillsList = new List<string>();
    List<string> recommendedLocationsList = new List<string>();

    int indexskill = 0;
    int indedxlocation = 0;

    void InitializeinRecommendedFilter()
    {
        RecommendedFilterPannel.SetActive(true);

        indexskill = 0;
        indedxlocation = 0;

        //clear all the data
        GameObject[] recommendedSkills = GameObject.FindGameObjectsWithTag("RecommendedSkills");
        GameObject[] recommendedLocations = GameObject.FindGameObjectsWithTag("RecommendedLocations");

        foreach(GameObject g in recommendedSkills)
        {
            Destroy(g);
        }
        foreach (GameObject g in recommendedLocations)
        {
            Destroy(g);
        }

        //load all the data if have
       
            if(saveload.allSkills!=""||saveload.allSkills!=null)
            {
                recommendedSkillsList.Clear();
                string[] tempSkills = saveload.allSkills.Split(',');
                foreach(string s in tempSkills)
                {
                    if(s!="")
                    {
                        InitializeSkill(s);
                    }
                }
            }

            if (saveload.selectedLocations != "" || saveload.selectedLocations != null)
            {
                recommendedLocationsList.Clear();
                string[] tempLocations = saveload.selectedLocations.Split(',');
                foreach (string s in tempLocations)
                {
                    if (s != "")
                    {
                    InitializeLocation(s);
                }
                }
            } 
    }

    #region for skills
    public InputField newRecommendedSkillInputField;
    public GameObject RecommendedSkillBoxPrefab;
    public Transform RecommendedSkillBoxContainer;
  
    public void AddNewRecommendedSkill()
    {
        string temp=newRecommendedSkillInputField.text;
        if(temp!="" && temp!=" ")
        {
            //add that skill
            InitializeSkill(temp);
            newRecommendedSkillInputField.text = "";
            savewrittenskill();
        }
    }

    void InitializeSkill(string temp)
    {
        GameObject go = GameObject.Instantiate(RecommendedSkillBoxPrefab);
        go.transform.SetParent(RecommendedSkillBoxContainer.transform);
        go.transform.localScale = Vector3.one;
        go.GetComponent<Text>().text = temp;
        recommendedSkillsList.Add(temp);
        int n = indexskill;
        go.GetComponent<Button>().onClick.AddListener(() => OnDeleteRecommendedSkill(n));
        indexskill++;
    }

    void savewrittenskill()
    {
        string temp_skills = "";
        foreach (string s in recommendedSkillsList)
        {
            temp_skills += s + ",";
        }
        saveload.allSkills = temp_skills;
    }

    void OnDeleteRecommendedSkill(int index)
    {
        print(recommendedSkillsList[index]);
        recommendedSkillsList.RemoveAt(index);
        savewrittenskill();
        InitializeinRecommendedFilter();
    }
    #endregion

    #region for locations

    public InputField newRecommendedLocationInputField;
    public GameObject RecommendedLocationBoxPrefab;
    public Transform RecommendedLocationlBoxContainer;

    public void AddNewRecommendedLocation()
    {
        string temp = newRecommendedLocationInputField.text;
        if (temp != "" && temp != " ")
        {
            //add that skill
            InitializeLocation(temp);
            newRecommendedLocationInputField.text = "";
            savewrittenLocation();
        }
    }

    void InitializeLocation(string temp)
    {
        GameObject go = GameObject.Instantiate(RecommendedLocationBoxPrefab);
        go.transform.SetParent(RecommendedLocationlBoxContainer.transform);
        go.transform.localScale = Vector3.one;
        go.GetComponent<Text>().text = temp;
        recommendedLocationsList.Add(temp);
        int n = indedxlocation;
        go.GetComponent<Button>().onClick.AddListener(() => OnDeleteRecommendedLocation(n));
        indedxlocation++;
    }

    void savewrittenLocation()
    {
        string temp_Location = "";
        foreach (string s in recommendedLocationsList)
        {
            temp_Location += s + ",";
        }
        saveload.selectedLocations = temp_Location;
    }

    void OnDeleteRecommendedLocation(int index)
    {
        print(recommendedLocationsList[index]);
        recommendedLocationsList.RemoveAt(index);
        savewrittenLocation();
        InitializeinRecommendedFilter();
    }

    #endregion

    public void OnRecommendedSearchButtonPressed()
    {
        madedlocation = saveload.selectedLocations;
        madedskills = saveload.allSkills;

        OnJobListButtonPressed();
        RecommendedFilterPannel.SetActive(false);
    }

    public void OnRecommendedCloseButtonPressed()
    {
        RecommendedFilterPannel.SetActive(false);
    }

    
    #endregion

    #region common functions


    string GetDataValue(string data, string index)
    {
        string value = data.Substring(data.IndexOf(index) + index.Length);
        if (value.Contains("|"))
            value = value.Remove(value.IndexOf("|"));
        return value;
    }

    IEnumerator PlaceImageToObject(Image go, string URL)
    {

        go.sprite = null;
        WWW www = new WWW(URL);
        yield return www;
        //go.sprite = Sprite.Create(www.texture, new Rect(0, 0, www.texture.width, www.texture.height), new Vector2(0, 0));

    }

    #endregion

}