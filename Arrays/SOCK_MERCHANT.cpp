int sockMerchant(int n, vector<int> ar) 
{
    set<int> colors;
    int pairs = 0;

    for (int i = 0; i < n; i++) 
    {
        if (!colors.count(ar[i])) 
        {
            colors.insert(ar[i]);
        } 
        else 
        {
            pairs++;
            colors.erase(ar[i]);
        }
    }

    return pairs;

}
