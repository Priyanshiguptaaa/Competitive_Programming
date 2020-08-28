#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin >> t;
	while (t--) 
	{
		int  n,a[100],k;
		cin >> n >> k;
		int p = 0;
		for (int i = 0; i < n; i++) 
		{
			cin >> a[i];
			if ((a[i] + k) % 7 == 0) 
			    p++;
		}
		cout << p << "\n";
	}
	return 0;
}
