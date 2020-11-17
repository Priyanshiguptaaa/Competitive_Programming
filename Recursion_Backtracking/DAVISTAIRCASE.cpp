int stepPerms(int n) 
{
    if(n==1) 
        return 1;
    if(n==2) 
        return 2;
    if(n==3) 
        return 4;
    int n1=1; int n2= 2; int n3=4;
    int ans=0;
    for(int i=4; i<=n; i++)
    {
        ans = (n1+n2+n3)%10000000007;
        n1=n2;
        n2=n3;
        n3=ans;
    }
    return ans;
}
