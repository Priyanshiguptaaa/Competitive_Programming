#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int M,x,y;
        int count=0,house_num=1;
        cin>>M>>x>>y;
        int A[101]={0};
        int reach=x*y;
        
        for(int i=0;i<M;i++)
        {
            cin>>A[i];
        }
        
        sort(A,A+M);
        
        for(int i=0;i<M;i++)
        {
            if(A[i]-reach>house_num)
                count+=A[i]-reach-house_num;
    
            house_num=A[i]+reach+1;
        }
        
        if(house_num<=100)
            count+=100-house_num+1;
            
        cout<<count<<endl; 
    }
    return 0;
}
