class Solution {
public:
    int rob(vector<int>& nums) {
        int l=nums.size();
        vector<int>dp(l+1,-1);
        return count(l,nums,dp);
    }
    int count(int l,vector<int>nums,vector<int>&dp)
    {
        if(l==1)
            return nums[0];
        else if (l==2)
        {
            return max(nums[0],nums[1]);
        }
        else
        {
            if(dp[l]!=-1)
                return dp[l];
            else
                return dp[l]=max(nums[l-1]+count(l-2,nums,dp),count(l-1,nums,dp));
        }
    }
};