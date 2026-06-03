class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        return finalcost(n,dp,cost);
    }
    int finalcost(int n,vector<int>&dp,vector<int>&cost)
    {
        if(n<=1)
        return dp[n]+1;
        else
        {
            if(dp[n]!=-1)
                return dp[n]; 
            else   
                return dp[n]=min(cost[n-1]+finalcost(n-1,dp,cost),cost[n-2]+finalcost(n-2,dp,cost));

    
        }
    }
};