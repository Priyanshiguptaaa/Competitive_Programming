#include<bits/stdc++.h>
using namespace std;

long long int totalSweetness(vector<pair<int,int>> a)
{
    int n=a.size(),noOfBands=1;
    long long int ans=0;
    
    sort(a.begin(),a.end());
    
    vector<int> uniqueSongs;
    
    for(int i=0;i<n;i++)
    {
        if(i==0 || a[i].first!=a[i-1].first)
        {
            uniqueSongs.push_back(a[i].second);
        }
        else
        {
            ans+=a[i].second;
        }
    }
    sort(uniqueSongs.begin(),uniqueSongs.end());
    
    ans=ans*uniqueSongs.size();
    
    for(int i=0;i<uniqueSongs.size();i++)
    {
        ans=ans+uniqueSongs[i]*(long long)(i+1);
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        vector<pair<int,int>> a(n);
        for(int j=0;j<n;j++)
        {
            cin>>a[j].first>>a[j].second;
        }
        long long int ans=totalSweetness(a);
        cout<<ans<<endl;
    }
    return 0;
}
