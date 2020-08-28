#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    ll n=0;
        int l;
        cin>>l;
        string s;
        cin>>s;
        for(auto i:s)
            if(i=='1')
                n++;
        cout<<(((n)*(n-1)/2)+n)<<'\n';
	}
	return 0;
}
