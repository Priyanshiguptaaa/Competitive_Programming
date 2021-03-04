#include <iostream>
using namespace std;

bool good(long mid, long r, long g, long b)
{
    return ((r-mid)+(b-mid)+g)>=mid;
}

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long n,r,g,b;
	    cin>>n>>r>>g>>b;
	    long left = 0;
	    long right = min(n, min(r,b));
	    
	    long ans=0;
	    
	    while(left<=right)
	    {
	        long mid=(left+right)/2;
	        
	        if(good(mid,r,g,b))
	        {
	            ans=mid;
	            left=mid+1;
	        }
	        else
	        {
	            right=mid-1;
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
