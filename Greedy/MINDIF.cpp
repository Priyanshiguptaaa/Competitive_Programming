int minimumAbsoluteDifference(vector<int> arr) 
{
    //int n=arr.size();
    
    sort(arr.begin(), arr.end());
    
    int mindif=INT_MAX;
    for(int i=0;i<arr.size()-1;i++)
    {
        int dif=arr[i+1]-arr[i];
        if(dif<mindif)
        {
            mindif=dif;
            if(mindif==0)
            {
                return 0;
            }
        }  
    }
    return mindif;

}
