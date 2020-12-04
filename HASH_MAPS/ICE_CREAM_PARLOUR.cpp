void whatFlavors(vector<int> cost, int money) 
{
    int firstpick = 0;
    int secondpick;
    unordered_map<int,int> costTofavor;
    for(int i=0;i<cost.size();i++)
    {
        secondpick = i;
        if(costTofavor.count(money-cost[i]))
        {
            firstpick = costTofavor[money-cost[i]];
            cout<<firstpick+1<<" "<<secondpick+1<<endl;
            return;
        }
        costTofavor[cost[i]]=i;
     }
    return;
}
