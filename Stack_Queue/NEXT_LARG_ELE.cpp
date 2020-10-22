#include <bits/stdc++.h> 
using namespace std;

void NGE( int arr[], int n)
{
    stack < int > s; 
    /* push the first element to stack */
    s.push(arr[0]); 
    // iterate for rest of the elements 
    for (int i = 1; i < n; i++) 
    { 
        if (s.empty()) 
        { 
          s.push(arr[i]); 
          continue; 
        } 
        /* if stack is not empty, then 
           pop an element from stack. 
           If the popped element is smaller 
           than next, then print the element and 
           keep popping while elements are 
           smaller and stack is not empty */
        while (s.empty() == false && s.top() < arr[i]) 
        {          
            cout <<arr[i]; 
            s.pop(); 
        } 
      
        /* push next to stack so that we can find 
        next greater for it */
        s.push(arr[i]); 
    } 
    /* After iterating over the loop, the remaining 
    elements in stack do not have the next greater 
    element, so print -1 for them */
    while (s.empty() == false) 
    { 
        cout<< -1; 
        s.pop(); 
    } 
}

int main() 
{
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>n;
	    }
	    NGE(A,n);
	}
	return 0;
}
