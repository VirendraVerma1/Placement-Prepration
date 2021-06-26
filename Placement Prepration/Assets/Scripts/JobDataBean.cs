using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JobDataBean : MonoBehaviour
{
    public string CompanyPhoto;
    public string CompanyName;
    public string Post;
    public string Package;
    public string Experience;
    public string Bond;
    public string Location;
    public string Role;
    public string IndustyType;
    public string FunctionalArea;
    public string EmploymentType;
    public string RoleCategory;
    public string Education;
    public string KeySkill;
    public string Responsibility;
    public string Knowledge;
    public string Benifit;
    public string AboutCompany;
    public int TotalEmployee;
    public string LastApplyDate;
    public string ApplyLink;
    public string Description;

    public JobDataBean(string companyPhoto,
     string companyName,
      string post, 
      string package,
       string experience,
        string bond,
         string location,
          string role,
          string industyType,
           string functionalArea, 
           string employmentType,
           string roleCategory, 
           string education, 
           string keySkill, 
           string responsibility, 
           string knowledge, 
           string benifit, 
           string aboutCompany, 
           int totalEmployee, 
           string lastApplyDate, 
           string applyLink, 
           string description
           )
    {
        CompanyPhoto = companyPhoto;
        CompanyName = companyName;
        Post = post;
        Package = package;
        Experience = experience;
        Bond = bond;
        Location = location;
        Role = role;
        IndustyType = industyType;
        FunctionalArea = functionalArea;
        EmploymentType = employmentType;
        RoleCategory = roleCategory;
        Education = education;
        KeySkill = keySkill;
        Responsibility = responsibility;
        Knowledge = knowledge;
        Benifit = benifit;
        AboutCompany = aboutCompany;
        TotalEmployee = totalEmployee;
        LastApplyDate = lastApplyDate;
        ApplyLink = applyLink;
        Description = description;       

    }
}
