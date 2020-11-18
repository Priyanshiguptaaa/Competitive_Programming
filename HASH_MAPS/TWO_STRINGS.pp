string twoStrings(string s1, string s2) 
{
    int count=0;
    for (auto c : s1) 
    {
        if (s2.find(c) != string::npos) 
        {
            count++;
            break;
        }
    }
    if(count > 0)
        return "YES";
    else
        return "NO";
}
