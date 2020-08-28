#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,f=0,j=0,c;
	    cin>>n;
	    int arr[n];
	    for(i=0;i<n;i++)
	        cin>>arr[i];
	    if(arr[0]>1)
	    {
	        cout<<"no"<<endl;
	        f=1;
	    }
	    else
	    {
	        c = arr[0];
	        for(i=0;i<=n/2;i++)
	        {
	             if(c!=arr[i])
	             {
	                c++;
	                j++;
	             }
	             if(arr[i]!=arr[n-i-1] || arr[i]>7 || c!=arr[i])
	             {
	                f=1;
	                break;
	             }
	        }
	        if(f==0 && j==6)
	            cout<<"yes"<<endl;
	        else
	            cout<<"no"<<endl;
	    }
	    
	}
	return 0;
}
