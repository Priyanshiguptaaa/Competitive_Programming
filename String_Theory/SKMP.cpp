#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
// your code goes here
int t;
cin>>t;
while(t--)
{
   string S;
   cin>>S;
   string P;
   cin>>P;
   string new_str1;
   string new_str2;
   
   //initialising the frequency array with 0
   int freq_S[26];
   for(int i=0;i<26;i++)
   {
       freq_S[i]=0;
   }
   
   //defining the frequency array for S
   for(int i=0;i<S.length();i++)
   {
       int index=S[i]-'a';
       freq_S[index]=freq_S[index]+1;
   }
   
   //decrementing the frequency array according to the substring P
   for(int i=0;i<P.length();i++)
   {
       int ind=P[i]-'a';
       freq_S[ind]=freq_S[ind]-1;
   }
   
   //the index of the first letter in P
   int firstP=P[0]-'a';
   
   //froming the new string
   for(int i=0;i<=firstP;i++)
   {
       for(int j=0;j<freq_S[i];j++)
       {
           new_str1+='a'+i;
       }
   }
   
   new_str1=new_str1+P;
   
   for(int i=firstP+1;i<26;i++)
   {
       for(int j=0;j<freq_S[i];j++)
       {
           new_str1+='a'+i;
       }
   }
   
   //case for less than
   
   //initialising the frequency array with 0
   for(int i=0;i<26;i++)
   {
       freq_S[i]=0;
   }
   
   //defining the frequency array for S
   for(int i=0;i<S.length();i++)
   {
       int index=S[i]-'a';
       freq_S[index]=freq_S[index]+1;
   }
   
   //decrementing the frequency array according to the substring P
   for(int i=0;i<P.length();i++)
   {
       int ind=P[i]-'a';
       freq_S[ind]=freq_S[ind]-1;
   }
   
   //the index of the first letter in P
   firstP=P[0]-'a';
   for(int i=0;i<firstP;i++)
   {
       for(int j=0;j<freq_S[i];j++)
       {
           new_str2+='a'+i;
       }
   }
   
   new_str2=new_str2+P;
   
   for(int i=firstP;i<26;i++)
   {
       for(int j=0;j<freq_S[i];j++)
       {
           new_str2+='a'+i;
       }
   }
   //cout<<new_str1<<endl;
   //cout<<new_str2<<endl;
   
   if(new_str1<new_str2)
   {
       cout<<new_str1<<endl;
   }
   else
   {
       cout<<new_str2<<endl;
   }
   
   
   if(t==0)
   {
       break;
   }
}
return 0;
}
