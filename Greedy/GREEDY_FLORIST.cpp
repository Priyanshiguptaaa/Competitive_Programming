int getMinimumCost(int k, vector<int> c) 
{
    int n=c.size();
    int minCost = 0;
    int tempCount = 0;
    int previousPurchases = 0;

    sort(c.begin(),c.end());

    if(k >= n)
    {
        for(int i = 0; i < n; i++)
        {
            minCost += c[i];
        }
                
    }
    else
    {
        for(int i = n - 1; i >= 0; i--)
        {
            if(tempCount == k)
            {
                tempCount = 0;
                previousPurchases++;
            }
            minCost += (previousPurchases + 1) * c[i];
            tempCount++;
        }
    }

    return minCost;
    
}
