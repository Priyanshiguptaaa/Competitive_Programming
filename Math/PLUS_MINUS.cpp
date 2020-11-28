void plusMinus(vector<int> arr) 
{
    int n=arr.size();
    int count_negative=0, count_zero=0, count_positive=0;
    for(int i=0; i<n; i++)
    {
        arr[i] < 0 ? count_negative++ : arr[i]>0 ? count_positive++ : count_zero++;
    }
    cout << fixed << setprecision(6) << count_positive/(n*1.0) <<endl<< count_negative/ (n*1.0) <<endl<< count_zero/(n*1.0);

}
