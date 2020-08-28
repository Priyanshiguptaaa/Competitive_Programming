#include<bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t,n,c;
	int A[101];
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int sum=0;
	    cin>>n>>c;
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	        sum+=A[i];
	    }
	    if(sum<=c)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
