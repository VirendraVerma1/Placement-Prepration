using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadingScreenManager : MonoBehaviour
{
    bool isEnable=true;
    int timer=-5;
    public GameObject RestartButton;

    void OnEnable()
    {
        //RestartButton.SetActive(false);
        isEnable=true;
        
        if(timer<0){
            timer=5;
        StartCoroutine(CheckForSometimeThenShowRestartButton());
        }else{
            timer=5;
        }
    }

    void OnDisable()
    {
        isEnable=false;
    }

    IEnumerator CheckForSometimeThenShowRestartButton()
    {
        while(timer<0){
        yield return new WaitForSeconds(1);
        timer--;
        }
        if(isEnable==true);
            RestartButton.SetActive(true);
    }

    public void OnRestartAppButtonPressed()
    {
        Scene scene = SceneManager.GetActiveScene(); SceneManager.LoadScene(scene.name);
    }

}
