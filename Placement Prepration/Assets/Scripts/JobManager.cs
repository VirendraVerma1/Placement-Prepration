using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;


public class JobManager : MonoBehaviour
{
    
    List<JobDataBean> jobData = new List<JobDataBean>();
    
    void Start()
    {
        JobDetailPannel.SetActive(false);
        StartCoroutine(GetAllTheJobs());
    }


    IEnumerator GetAllTheJobs()
    {
        WWWForm form1 = new WWWForm();
        WWW www = new WWW(saveload.ServerLink+saveload.JobDetails);
        //ShowLoadingRemoveRest();
        yield return www;
        print(www.text);

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
                , Description));
                
                
            }
            CreteJobList();
            
        }

    }

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

        int index = -1;
        foreach (JobDataBean g in jobData)
        {
            GameObject go = GameObject.Instantiate(JobListPrefab);
            go.transform.SetParent(JobToPlace.transform);
            go.transform.localScale = Vector3.one;
            StartCoroutine(PlaceImageToObject(go.transform.Find("CompanyLogo").transform.GetComponent<Image>(), g.CompanyPhoto));
            go.transform.Find("CompanyName").transform.GetComponent<Text>().text = g.CompanyName;
            go.transform.Find("Post").transform.GetComponent<Text>().text = "Post: "+g.Post;
            go.transform.Find("Package").transform.GetComponent<Text>().text = "Package: "+g.Package;
            go.transform.Find("Experince").transform.GetComponent<Text>().text = "Experience: "+g.Experience+"year";
            go.transform.Find("Location").transform.GetComponent<Text>().text = "Location:"+g.Location;
            go.transform.Find("LastDate").transform.GetComponent<Text>().text = g.LastApplyDate;
            go.transform.Find("Skills").transform.GetComponent<Text>().text = "Skills:"+g.KeySkill;
            go.GetComponent<Button>().onClick.AddListener(() => OnJobButtonPressed(index));
            index++;
        }
    }

    #endregion

    #region On Job Button Pressed
    [Header("Job detail Pannel")]
    public GameObject JobDetailPannel;
    public GameObject JobDetailThings;
    public GameObject OtherContent;

    void OnJobButtonPressed(int index)
    {
        JobDetailPannel.SetActive(true);
        JobDataBean g =jobData[index];
        GameObject go = JobDetailThings;
        GameObject ggo = OtherContent;
        StartCoroutine(PlaceImageToObject(go.transform.Find("CompanyLogo").transform.GetComponent<Image>(), g.CompanyPhoto));
        go.transform.Find("CompanyName").transform.GetComponent<Text>().text = g.CompanyName;
        go.transform.Find("Post").transform.GetComponent<Text>().text = "Post: " + g.Post;
        go.transform.Find("Package").transform.GetComponent<Text>().text = "Package: " + g.Package;
        go.transform.Find("Experince").transform.GetComponent<Text>().text = "Experience: " + g.Experience + "year";
        go.transform.Find("Location").transform.GetComponent<Text>().text = "Location:" + g.Location;
        go.transform.Find("LastDate").transform.GetComponent<Text>().text = g.LastApplyDate;
        go.transform.Find("Skills").transform.GetComponent<Text>().text = "Skills:" + g.KeySkill;

        ggo.transform.Find("Bond").transform.GetComponent<Text>().text = "Bond: "+g.Bond+" year";
        ggo.transform.Find("FunctionalArea").transform.GetComponent<Text>().text = "FunctionalArea: " + g.Bond;
        ggo.transform.Find("IndustryType").transform.GetComponent<Text>().text = "IndustyType: " + g.IndustyType;
        ggo.transform.Find("EmploymentType").transform.GetComponent<Text>().text = "EmploymentType: " + g.EmploymentType;
        ggo.transform.Find("RoleCategory").transform.GetComponent<Text>().text = "RoleCategory: " + g.RoleCategory;
        ggo.transform.Find("Education").transform.GetComponent<Text>().text = "Education: " + g.Education;
        ggo.transform.Find("Responsibility").transform.GetComponent<Text>().text = "Responsibility: " + g.Responsibility;
        ggo.transform.Find("Knowledge").transform.GetComponent<Text>().text = "Knowledge: " + g.Knowledge;
        ggo.transform.Find("Benifit").transform.GetComponent<Text>().text = "Benifit: " + g.Benifit;
        ggo.transform.Find("AboutCompany").transform.GetComponent<Text>().text = "AboutCompany: " + g.AboutCompany;
        ggo.transform.Find("TotalEmployee").transform.GetComponent<Text>().text = "TotalEmployee: " + g.TotalEmployee;
        ggo.transform.Find("Description").transform.GetComponent<Text>().text = "Description: " + g.Description;
        string Link = g.ApplyLink;
        ggo.transform.Find("ApplyLink").transform.Find("Button").GetComponent<Button>().onClick.AddListener(() => ApplyJob(Link));
    }

    void ApplyJob(string URL)
    {
        print(URL);
        Application.OpenURL(URL);
    }

    #endregion

    public void OnJobDetailsCloseButtonPressed()
    {
        JobDetailPannel.SetActive(false);
    }

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
        go.sprite = Sprite.Create(www.texture, new Rect(0, 0, www.texture.width, www.texture.height), new Vector2(0, 0));

    }
    
}