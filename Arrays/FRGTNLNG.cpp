#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,p; 
        cin>>n>>k;
        unordered_set<string> s1;
        string str;
        vector<string>s(n,"");
        for(int i=0;i<n;i++)
            cin>>s[i];
        
        while(k--)
        {
            cin>>p;
            while(p--)
            {
                cin>>str;
                s1.insert(str);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(s1.find(s[i])!=s1.end()) cout<<"YES ";
            else cout<<"NO ";
        }
        cout<<endl;
    }
	return 0;
}
