#include <bits/stdc++.h>
using namespace std;

int equilibrium()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    for(int i=1;i<n;i++)
    {
        v[i]+=v[i-1];
    }
    
    for(int i=0;i<n;i++)
    {
        int left=i!=0?v[i-1]:0;
        int right = v[n-1] - v[i];
        if(left == right)
        {
            return i+1;
        }
        
    }
    return -1;
}

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        cout<<equilibrium()<<endl;
    }
	return 0;
}
