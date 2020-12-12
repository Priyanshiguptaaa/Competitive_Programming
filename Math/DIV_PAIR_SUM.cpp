#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



int main()
{
    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    int arr[k]={0}; //index is remainder from integer%k and value is count of number of ints

    
    for (int i = 0; i < n; i++) 
    {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
        int rem = a_item % k;
        arr[rem]=arr[rem]+1;
    }
    
    int count= arr[0]*(arr[0]-1)/2;
    //cout<<count<<endl;
    for(int i=1;i<(k+1)/2;i++)
    {
        count+=arr[i]*arr[k-i];
    }
    //cout<<count<<endl;
    if(k%2==0)
    {
        count+=(arr[k/2]*(arr[k/2]-1))/2;
    }
    
    cout<<count;

    return 0;

}
