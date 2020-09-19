#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int H,P;
	    cin>>H>>P;
	    if(P>(H/2))
	    {
	        cout<<1<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	}
	return 0;
}
