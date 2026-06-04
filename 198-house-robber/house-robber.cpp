class Solution {
public:
    int rob(vector<int>& nums) {
        int l=nums.size();
        vector<int>dp(l+1,-1);
        dp[0]=nums[0];
        if(l==1)
        return dp[0];       
        else if(l==2)
        {
            dp[1]=max(nums[0],nums[1]);
            return dp[1];
        }
        else
        {
            dp[0]=nums[0];
            dp[1]=max(nums[0],nums[1]);
        for (int i=2;i<l;i++)
        {
            
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[l-1];
        }
    }
};