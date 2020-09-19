#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int N,K;
	    cin>>N>>K;
	    int arr[1000];
	    int least=0;
	    for(int i=0;i<N;i++)
	    {
	        cin>>arr[i];
	        if(K%arr[i]==0)
	        {
	            if(arr[i]>least)
	            {
	                least=arr[i];
	            }
	        }
	    }
	    if(least==0)
	    {
	        cout<<-1<<endl;
	    }
	    else
	        cout<<least<<endl;
	    if(t==0)
	    {
	        break;
	    }
	}
	return 0;
}
