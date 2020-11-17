class Solution 
{
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) 
    {
        int lastDay = days[days.size()-1];
        vector<int> dp(lastDay+1, 0);
        int dayIndex = 0;
        for(int i=1; i<lastDay+1; i++)
        {
            if(i != days[dayIndex])
            {
                dp[i] = dp[i-1];
            }
            else
            {
                dp[i] = min({dp[i-1] + costs[0], 
                             dp[max(0,i-7)] + costs[1],
                             dp[max(0,i-30)] + costs[2]});
                dayIndex++;
            }
        }
        return dp[lastDay];
    }
};
