void miniMaxSum(vector<int> arr) 
{
    long min = 0, max = 0, sum = 0;
    min = arr[0];
    max = min;
    sum = min;
    for (int i = 1; i < arr.size(); i++) 
    {
        sum += arr[i];
        if (arr[i] < min) 
        {
            min = arr[i];
        }
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    cout<<(sum - max)<<" "<<(sum - min);
}
