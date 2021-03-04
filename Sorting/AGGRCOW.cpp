#include<bits/stdc++.h>
using namespace std;
bool check(int cows,long long pos[],int N,long long mid)
{
  int count=1;
  long long last_pos=pos[0];
  for(int i=1;i<N;i++)
  {
    if(pos[i]-last_pos>=mid)
    {
      last_pos=pos[i];
      count++;
    }
    if(cows==count)
    {
      return true;
    }
  }
  return false;
}
int main()
{
  int t;
  int N;
  int C;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>N>>C;
    long long pos[N];
    for(int j=0;j<N;j++)
    {
      cin>>pos[j];
    }
    sort(pos,pos+N);
    long long start=0;
    long long end=pos[N-1]-pos[0];
    long long ans=-1;
    while(start<=end)
    {
      long long mid=start+(end-start)/2;
      if(check(C,pos,N,mid))
      {
        ans=mid;
        start=mid+1;
      }
      else
        end=mid-1;
    }
    cout<<ans<<endl;
  }
}
