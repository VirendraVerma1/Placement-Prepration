using System.Collections;
using System.Collections.Generic;
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
        ActivatePanel(LogoPannel.name);
    }

    public void OnJobPannelButtonPressed()
    {
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
        saveload.playerName = "Player" + Random.Range(1111, 99999);
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
        defaultValue=120;
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
}
/*
attribution codes
http://www.flaticon.com/free-icon/sushi_187463#term=sushi&page=1&position=68

*/