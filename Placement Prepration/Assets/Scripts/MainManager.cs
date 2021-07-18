using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class MainManager : MonoBehaviour
{
    public GameObject RevisionTestDashbordPannel;
    public GameObject TestPannel;
    public GameObject LogoPannel;
    public GameObject PracticePannel;
    public GameObject TestReportPannel;
    public GameObject JobPannel;

    void Awake()
    {
        saveload.Load();
        CheackAccount();
        StartCoroutine(IncreaseTimePlayed());
        GetAdsFreqValueFromServer();
        ActivatePanel(LogoPannel.name);
        gameObject.GetComponent<JobManager>().LoadAllTheSkillData();
        SetNotification();
    }

    public void ActivatePanel(string panelToBeActivated)
    {
        RevisionTestDashbordPannel.SetActive(panelToBeActivated.Equals(RevisionTestDashbordPannel.name));
        TestPannel.SetActive(panelToBeActivated.Equals(TestPannel.name));
        LogoPannel.SetActive(panelToBeActivated.Equals(LogoPannel.name));
        TestReportPannel.SetActive(panelToBeActivated.Equals(TestReportPannel.name));
        PracticePannel.SetActive(panelToBeActivated.Equals(PracticePannel.name));
        JobPannel.SetActive(panelToBeActivated.Equals(JobPannel.name));
    }

    public void OnHomePageButtonPressed()
    {
        gameObject.GetComponent<TestContoller>().TopBar.SetActive(true);
        ActivatePanel(LogoPannel.name);
    }

    public void OnJobPannelButtonPressed()
    {
        gameObject.GetComponent<JobManager>().enabled = true;
        gameObject.GetComponent<JobManager>().OnJobListButtonPressed();
        ActivatePanel(JobPannel.name);
    }

    public void OnPrivacyPolicyButtonPressed()
    {
        Application.OpenURL("https://kreasarstudio.wixsite.com/home/placementpreparation");
        
    }
    
    #region Analytics

    //cheack if account exist or not

    #region account creation

    void CheackAccount()
    {
        if (saveload.accountID == " ")
        {
            //means create new account
            StartCoroutine(CreateAccountToServer());
        }
        else
        {
            //update repeat user
            UpdateRepeat();
        }
        
    }

    IEnumerator CreateAccountToServer()
    {
        saveload.playerName = "Player" + UnityEngine.Random.Range(1111, 99999);
        saveload.Save();
        WWWForm form1 = new WWWForm();
        form1.AddField("name", saveload.playerName);
        WWW www = new WWW(saveload.ServerLink + saveload.CreateAccount, form1);
        yield return www;
        
        if (www.text != "" && www.text!=" " && !www.text.Contains("<"))
        {
            string ane = GetDataValue(www.text,"Created:");
            saveload.accountID = ane;
            saveload.Save();
        }
        
    }

    #endregion

    #region Update Repeat User

    void UpdateRepeat()
    {
        saveload.repeatUser++;
        saveload.Save();
        print(saveload.repeatUser);
        StartCoroutine(UpdateRepeatToServer());
    }

    IEnumerator UpdateRepeatToServer()
    {
        WWWForm form1 = new WWWForm();
        form1.AddField("id", saveload.accountID);
        form1.AddField("repeat", saveload.repeatUser);

        WWW www = new WWW(saveload.ServerLink + saveload.UpdateRepeatUser, form1);
        yield return www;

    }

    #endregion


    IEnumerator IncreaseTimePlayed()
    {
        while (true)
        {
            yield return new WaitForSeconds(15);
            saveload.totalTime += 15;
            saveload.Save();
            CheckTimerIfHaveThenShowAds();
            if (saveload.accountID != " ")
            {
                //send data to sever
                UpdateStats();
            }
        }
    }

    public void UpdateStats()
    {
        StartCoroutine(UpdateStatsServer());
    }

    IEnumerator UpdateStatsServer()
    {
        WWWForm form1 = new WWWForm();
        form1.AddField("id", saveload.accountID);
        form1.AddField("timegiven", saveload.totalTime);
        form1.AddField("correct", saveload.correct);
        form1.AddField("wrong", saveload.wrong);
        form1.AddField("revision", saveload.revision);
        form1.AddField("ads", saveload.ads);
        form1.AddField("skills", saveload.allSkills);
        form1.AddField("location", saveload.selectedLocations);
        form1.AddField("apply", saveload.applyCount);
        WWW www = new WWW(saveload.ServerLink + saveload.UpdateStats, form1);
        yield return www;
        

    }

    #endregion

    string GetDataValue(string data, string index)
    {
        string value = data.Substring(data.IndexOf(index) + index.Length);
        if (value.Contains("|"))
            value = value.Remove(value.IndexOf("|"));
        return value;
    }

    #region Ads Area

    int defaultValue=120;
    int tempdefaultValue=120;
    void GetAdsFreqValueFromServer()
    {
        StartCoroutine(GetAdsFreqValue());
    }

    IEnumerator GetAdsFreqValue()
    {
        defaultValue=500;
       WWW www = new WWW(saveload.ServerLink + saveload.AdsFreq);
        yield return www;
        if(www.text!="")
        {
            if(!www.text.Contains("<"))
            defaultValue=int.Parse(www.text.ToString());
            tempdefaultValue=defaultValue;
        }

    }


    public void CheckTimerIfHaveThenShowAds()
    { 
        defaultValue-=15;
        if(defaultValue<0 && gameObject.GetComponent<TestContoller>().istestOn==false)
        {
            defaultValue=tempdefaultValue;
            //cheack and Show Ads
            if(FindObjectOfType<AdScript>().isinterLoaded())
            {
                FindObjectOfType<AdScript>().ShowIntertesialAdsSwitch();
            }
        }
    }

    #endregion

    #region notification manager

    void SetNotification()
    {
        Assets.SimpleAndroidNotifications.NotificationManager.CancelAll();//21,600
        var notificationParams = new Assets.SimpleAndroidNotifications.NotificationParams
        {
            Id = UnityEngine.Random.Range(0, int.MaxValue),
            Delay = TimeSpan.FromSeconds(21600),
            Title = "Apply for jobs",
            Message = "More job offers has been updated",
            Ticker = "Ticker",
            Sound = true,
            Vibrate = true,
            Light = true,
            SmallIcon = Assets.SimpleAndroidNotifications.NotificationIcon.Bell,
            SmallIconColor = new Color(0, 0.5f, 0),
            LargeIcon = "app_icon"
        };

        Assets.SimpleAndroidNotifications.NotificationManager.SendCustom(notificationParams);
    }

    #endregion
}
/*
attribution codes
http://www.flaticon.com/free-icon/sushi_187463#term=sushi&page=1&position=68

*/