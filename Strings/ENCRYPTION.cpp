string encryption(string s) 
{
    int n=s.size();
    int jump=sqrt(n);
    if(jump*jump!=n)
    {
        jump++;
    }
    string ans="";
    for(int i=0;i<jump;i++)
    {
        for(int j=i;j<n;j+=jump)
        {
            ans+=s[j];
        }
        ans+=" ";
    }
    return ans;
}
