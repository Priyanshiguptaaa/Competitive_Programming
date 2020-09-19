#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int Chef,Rick;
	    int rick_dig,chef_dig;
	    cin>>Chef>>Rick;
	    //cout<<Chef<<" "<<Rick<<endl;
	    chef_dig=ceil(Chef/9.0);
	    //cout<<"chef_dig="<<chef_dig<<endl;
	    rick_dig=ceil(Rick/9.0);
	    //cout<<"rick_dig="<<rick_dig<<endl;
	    if(chef_dig<rick_dig)
	    {
	        cout<<0<<" "<<chef_dig<<endl;
	    }
	    else
	    {
	        cout<<1<<" "<<rick_dig<<endl;
	    }
	    if(t==0)
	        break;
	}
	return 0;
}
