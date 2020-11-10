int jumpingOnClouds(vector<int> c) 
{
    int jumps=0;
    for(int i = 0; i < c.size() - 1; i++)
    {
        jumps++;
        if( i  + 2 < c.size() && c[i + 2] == 0)
        {
            i++;
        }
    }
    return jumps;
}
