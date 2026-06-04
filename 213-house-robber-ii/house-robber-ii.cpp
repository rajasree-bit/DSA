class Solution {
public:
    int rob(vector<int>& nums) {
        int l=nums.size();
        vector<int>num1(l-1,0);
        vector<int>num2(l-1,0);
        int a=0;
        if(l==1)
            return nums[0];
        else if(l==2)
            return max(nums[0],nums[1]);
        else{        
            for (int i=0;i<l-1;i++)
            {
                num1[i]=nums[i];
            }
            for(int i=1;i<l;i++)
            {
                num2[a]=nums[i];a++;
            }
            vector<int>dp(l,-1);
            int n1=count(l-1,num1,dp);
            vector <int>dp1(l,-1);
            int n2=count(l-1,num2,dp1);
            return max(n1,n2);
        }
    }
    int count(int l,vector<int>&nums,vector<int>&dp)
    {
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);
        for (int i=2;i<l;i++)
        {
            dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
        }
        
        return dp[l-1];
    }
};