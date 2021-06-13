﻿using UnityEngine;
using UnityEngine.UI;
using GoogleMobileAds.Api;
using System;

//Banner ad
public class AdNativeAdCustom : MonoBehaviour
{
	private UnifiedNativeAd adNative;
	private bool nativeLoaded = false;

	private string idApp, idNative;

	[SerializeField] GameObject adNativePanel;
	[SerializeField] RawImage adIcon;
	[SerializeField] RawImage adChoices;
	[SerializeField] Text adHeadline;
	[SerializeField] Text adCallToAction;
	[SerializeField] Text adAdvertiser;


	void Awake ()
	{
		adNativePanel.SetActive (false); //hide ad panel
	}

	void Start ()
	{
		idApp = "ca-app-pub-4773340848320054~8618294187";
		
		idNative = "ca-app-pub-3940256099942544/2247696110";

		MobileAds.Initialize (idApp);

		//RequestBannerAd ();
		RequestNativeAd ();
	}

	void Update ()
	{
		if (nativeLoaded) {
			nativeLoaded = false;

			Texture2D iconTexture = this.adNative.GetIconTexture ();
			Texture2D iconAdChoices = this.adNative.GetAdChoicesLogoTexture ();
			string headline = this.adNative.GetHeadlineText ();
			string cta = this.adNative.GetCallToActionText ();
			string advertiser = this.adNative.GetAdvertiserText ();
			adIcon.texture = iconTexture;
			adChoices.texture = iconAdChoices;
			adHeadline.text = headline;
			adAdvertiser.text = advertiser;
			adCallToAction.text = cta;

			//register gameobjects
			adNative.RegisterIconImageGameObject (adIcon.gameObject);
			adNative.RegisterAdChoicesLogoGameObject (adChoices.gameObject);
			adNative.RegisterHeadlineTextGameObject (adHeadline.gameObject);
			adNative.RegisterCallToActionGameObject (adCallToAction.gameObject);
			adNative.RegisterAdvertiserTextGameObject (adAdvertiser.gameObject);

			adNativePanel.SetActive (true); //show ad panel
		}
	}


	#region Native Ad Mehods ------------------------------------------------

	private void RequestNativeAd ()
	{
		AdLoader adLoader = new AdLoader.Builder (idNative).ForUnifiedNativeAd ().Build ();
		adLoader.OnUnifiedNativeAdLoaded += this.HandleOnUnifiedNativeAdLoaded;
		adLoader.LoadAd (new AdRequest.Builder().Build ());
		print("request");
	}

	//events
	private void HandleOnUnifiedNativeAdLoaded (object sender, UnifiedNativeAdEventArgs args)
	{
		print("native loaded");
		this.adNative = args.nativeAd;
		this.nativeLoaded = true;
	}

	private void HandleNativeAdFailedToLoad(object sender, AdFailedToLoadEventArgs args) {
		MonoBehaviour.print("Native ad failed to load: " + args.Message);
	}

	#endregion

	//------------------------------------------------------------------------
	AdRequest AdRequestBuild ()
	{
		return new AdRequest.Builder ().Build ();
	}


}

