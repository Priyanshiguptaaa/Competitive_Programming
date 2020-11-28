vector<int> compareTriplets(vector<int> a, vector<int> b) 
{
    vector<int> output = {0, 0};

    for (int i = 0; i < 3; i++)
    {
        if (a[i] != b[i])
        {
            output[int(a[i] < b[i])]++;
        }
    }

    return output;
}
