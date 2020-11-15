int maxMin(int k, vector<int> arr) 
{
    int unfairness = INT_MAX;  
    sort(arr.begin(),arr.end());        
    for (int i = 0; i < arr.size() - k + 1; i++)
    {
        if (arr[i+k-1]-arr[i]<unfairness) 
            unfairness = arr[i+k-1]-arr[i];
    }
    return unfairness;
}
