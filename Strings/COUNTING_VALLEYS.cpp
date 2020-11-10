int countingValleys(int steps, string path) 
{
    int level = 0;
    int valley = 0;
    for(int i=0;i<path.size();i++)
    {
        if(path[i]=='U')
        {
            if(++level==0)
                valley++;
        }
        else level--;
    }
    return valley;
}
