using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Text;
using System.IO;
using System.IO.Compression;
using System.Security.Cryptography;
using System.Runtime.Serialization.Formatters.Binary;


public class saveload : MonoBehaviour
{

    public static string ServerLink = "http://kreasaard.atwebpages.com/";
    public static string CreateAccount = "PlacementPrepration/Users/createaccount.php";
    public static string UpdateRepeatUser = "PlacementPrepration/Users/updaterepeat.php";
    public static string UpdateStats = "PlacementPrepration/Users/updatestats.php";
    public static string AdsFreq = "PlacementPrepration/Users/adsfreq.php";
    public static string JobDetails = "PlacementPrepration/Users/adsfreq.php";

    public static int totalTime=0;
    public static int correct=0;
    public static int wrong=0;
    public static int revision=0;
    public static int ads=0;
    public static int repeatUser=0;

    public static string accountID = " ";
    public static string playerName = " ";
    

    public static string current_filename = "info.dat";

    public static void Save()
    {
        BinaryFormatter bf = new BinaryFormatter();
        FileStream file = File.Create(Application.persistentDataPath + "/" + current_filename);
        Notebook_Data data = new Notebook_Data();


        data.AccountID = accountID;
        data.PlayerName = Encrypt(playerName);
        
        data.TotalTime=totalTime;
        data.Correct=correct;
        data.Wrong=wrong;
        data.Revesion=revision;
        data.Ads=ads;
        data.RepeatUser=repeatUser;

        bf.Serialize(file, data);
        file.Close();
    }

    public static void Load()
    {

        if (File.Exists(Application.persistentDataPath + "/" + current_filename))
        {
            BinaryFormatter bf = new BinaryFormatter();
            FileStream file = File.Open(Application.persistentDataPath + "/" + current_filename, FileMode.Open);/* */
            Notebook_Data data = (Notebook_Data)bf.Deserialize(file);

            accountID=data.AccountID;
            playerName=Decrypt(data.PlayerName);
            
            totalTime=data.TotalTime;
            correct=data.Correct;
            wrong=data.Wrong;
            revision=data.Revesion;
            ads=data.Ads;
            repeatUser=data.RepeatUser;

            file.Close();

        }
        else
        {
            current_filename = "info.dat";
            accountID = " ";
            saveload.Save();

        }
    }

    private static string hash="9452@abc";

    public static string Encrypt(string input)
    {
        byte[] data = UTF8Encoding.UTF8.GetBytes(input);
        using (MD5CryptoServiceProvider md5 = new MD5CryptoServiceProvider())
        {
            byte[] key = md5.ComputeHash(UTF8Encoding.UTF8.GetBytes(hash));
            using (TripleDESCryptoServiceProvider trip = new TripleDESCryptoServiceProvider() { Key = key, Mode = CipherMode.ECB,Padding= PaddingMode.PKCS7 })
            {
                ICryptoTransform tr = trip.CreateEncryptor();
                byte[] results = tr.TransformFinalBlock(data, 0, data.Length);
                return Convert.ToBase64String(results, 0, results.Length);
            }
        }
    }

    public static string Decrypt(string input)
    {
        byte[] data = Convert.FromBase64String(input);
        using (MD5CryptoServiceProvider md5 = new MD5CryptoServiceProvider())
        {
            byte[] key = md5.ComputeHash(UTF8Encoding.UTF8.GetBytes(hash));
            using (TripleDESCryptoServiceProvider trip = new TripleDESCryptoServiceProvider() { Key = key, Mode = CipherMode.ECB,Padding= PaddingMode.PKCS7 })
            {
                ICryptoTransform tr = trip.CreateDecryptor();
                byte[] results = tr.TransformFinalBlock(data, 0, data.Length);
                return UTF8Encoding.UTF8.GetString(results);
            }
        }
    }

   
}


[Serializable]
class Notebook_Data
{
    public  string AccountID;
    public  string PlayerName;

    public int TotalTime;
    public int Correct;
    public int Wrong;
    public int Revesion;
    public int Ads;
    public int RepeatUser;
    
}