vector<int> absolutePermutation(int n, int k) 
{
    vector<int>res;
    if(k != 0) 
    {
        if (n % 2 == 1) 
            return {-1};
        if (n % 2 == 0 && n%(k*2)==0 ) 
        {
            int j = 1;
            for (int i = 1; i <= n; i++) 
            {
                if(j<= k)
                {
                    res.push_back(i+k);
                } 
                else
                {
                    res.push_back(i-k);
                }

                j++;
                if(j > k*2)j = 1;
            }
            return res;
        } 
        else 
        {
            return {-1};
        }
    } 
    else
    {
        for (int i = 1; i <= n; i++) 
        {
            res.push_back(i);
        }
        return res;
    }
}
