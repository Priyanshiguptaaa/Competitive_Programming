#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	for(int t=0;t<T;t++)
	{
	    int X,Y,K,N;
	    cin>>X>>Y>>K>>N;
	    bool found=false;
	    int P,C;
	    for(int i=0;i<N;i++)
	    {
	        cin>>P>>C;
	        if((C<=K)&&(P>=(X-Y)))
	        {
	            found=true;
	        }
	    }
	    cout << ((found) ? "LuckyChef" : "UnluckyChef");
	    cout << endl;
	    
	}
	
	return 0;
}
