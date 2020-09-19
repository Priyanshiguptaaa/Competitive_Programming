#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int final[1001][1001] = {0};

ll calc(int start,int end,ll F[],ll K)
{
    if(start==end)
    {
        return K;
    }
    int fam[101] = {0};
    ll ans = K;
    
    for(int i=start;i<=end;i++)
    {
       fam[F[i]]++;
    }
    for(int i=0;i<=100;i++)
    {
        if(fam[i]>1)
        {
            ans+=fam[i];
        }
    }
    return ans;
}

ll inef(int start,int end,ll F[],ll K)
{
    if(start>end)
    {
        return 0;
    }
    if(start==end)
    {
        return K;
    }
    if(final[start][end]!=0)
    {
        return final[start][end];
    }
    
    ll final_ans=INT_MAX;
    
    for(int i=start;i<=end;i++)
    {
        final_ans = min(final_ans,calc(start,i,F,K) + inef(i+1,end,F,K));
    }
    
    final[start][end] = final_ans;
    return final[start][end];
}

int main() 
{
	// your code goes here
	ll t;
	cin>>t;
	while(t--)
	{
	    ll N,K;
	    cin>>N>>K;
	    ll F[N];
	    ll ans=K;
	    int fam[101]={0};
	    
	    for(int i=0;i<1001;i++)
	    {
           for(int j=0;j<1001;j++)
           {
               final[i][j] = 0;
           }
        }
        
        for(int i=0;i<N;i++)
        {
            cin>>F[i];
        }
        
        cout<<inef(0,N-1,F,K)<<endl;
	}
	return 0;
}
