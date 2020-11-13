int luckBalance(int k, vector<vector<int>> contests) 
{
    vector<int> imp;
    int luck = 0;
    for(int i = 0;i<contests.size();i++)
    {
        if(contests[i][1] == 1)
        {
            imp.push_back(contests[i][0]);
        }
        else
        {
            luck += contests[i][0];
        }
    }
    sort(imp.begin(), imp.end(), greater<int>());
    int index = 0;
    while(k > 0 && index < imp.size())
    {
        luck += imp[index];
        index++;
        k--;
    }
    while(index < imp.size())
    {
        luck -= imp[index];
        index++;
    }
    return luck;
}
