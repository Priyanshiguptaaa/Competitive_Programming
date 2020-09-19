#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    //cout<<"Enter t"<<endl;
    cin>>t;
    while(t--)
    {
        int N,K;
        //cout<<"Enter N,K"<<endl;
        cin>>N>>K;
        int A[1001];
        int dp[1001]={0};
        int c=0;
        int flag=1;
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<N;i++)
        {
            if(A[i]<=K)
            {
                if((A[i]+dp[c])<=K)
                {
                    dp[c]=dp[c]+A[i];
                }
                else
                {
                    //cout<<"Increment c"<<endl;
                    c=c+1;
                    dp[c]=dp[c]+A[i];
                }
            }
            else
            {
                cout<<-1<<endl;
                flag=0;
                c=0;
                break;
            }
        }
        if(flag==1)
        {
            int fin=c+1;
            cout<<fin<<endl;
        }

    }
}
