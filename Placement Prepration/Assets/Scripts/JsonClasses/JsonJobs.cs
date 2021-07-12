using System.Collections.Generic;
using System;

[Serializable]
public class JsonJobs
{
    public string Status;
    public string Message;
    public List<jobsData> jobs;
    public string Code;
}

[Serializable]
public class jobsData
{
    public string id;
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
    public string created_att;
    public string updated_at;
    public string Description;
    public string ago;
}