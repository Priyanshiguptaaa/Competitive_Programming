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
	    string s;
	    cin>>s;
	    int n=s.size();
	    int k=n/2;
	    vector <int> first(26), second(26);
	    for(int i=0; i<k; i++)
	    {
	        first[s[i]-'a']++;
	    }
	    if(n&1)
	    {
	        k++;
	    }
	    for(int i=k; i<n; i++)
	    {
	        second[s[i]-'a']++;
	    }
	    first==second ? puts("YES") : puts("NO");
	}
	
	return 0;
}
