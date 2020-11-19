#include <bits/stdc++.h>
#include<cstring>
using namespace std;
typedef long long ll;

long long  mod= pow(10,9)+7;
long long ans(string input,int a)
{
    long long dp[a+1]={0};
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=a;i++)
    { 
        if(input[i-1]!='0')
            dp[i]=dp[i-1];
        int num=(input[i-2]-'0')*10+(input[i-1]-'0');
        if(num>=10&&num<=26)
            dp[i]=(dp[i-2]%mod+dp[i]%mod)%mod;
 
    }
    return dp[a];
}

int main()
{
 
    for(;;){
        string  input;
        cin>>input;
        if(input[0]=='0') 
            return 0;
        int a=input.size();
        cout<<ans(input,a)<<endl;
 
    }
    return 0;
}

