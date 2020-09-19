#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
	    int X[N],Y[N];
	    for(int i=0;i<N;i++)
	    {
	        cin>>X[i]>>Y[i];
	    }
	    int sides=N;
    
        while(true)
        {
            if(N<6)
            {
                break;
            }
            else
            {
                N=N/2;
                sides=sides+N;
            }
        }
        cout<<sides<<endl;
    }
	return 0;
}
