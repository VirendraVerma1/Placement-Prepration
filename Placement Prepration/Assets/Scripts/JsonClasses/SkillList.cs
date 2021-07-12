using System.Collections.Generic;
using System;

[Serializable]
public class SkillList
{
    public string Status;
    public string Message;
    public List<skillData> skills;
    public string Code;
}

[Serializable]
public class skillData
{
    public string name;
    
}