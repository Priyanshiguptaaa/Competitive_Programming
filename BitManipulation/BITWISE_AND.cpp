#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string nk_temp;
        getline(cin, nk_temp);

        vector<string> nk = split_string(nk_temp);

        int n = stoi(nk[0]);
        int k = stoi(nk[1]);
        
        if(((k-1)|k)<= n)
            cout<<k-1<<endl;
        else
            cout<<k-2<<endl;
    }
    return 0;
}
