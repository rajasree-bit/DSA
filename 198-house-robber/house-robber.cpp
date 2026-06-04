class Solution {
public:
    int rob(vector<int>& nums) {
        int l=nums.size();
        int prev2=nums[0];
        int prev1=0;
        int current=0;
        if(l==1)
        return prev2;       
        else if(l==2)
        {
            prev1=max(nums[0],nums[1]);
            return prev1;
        }
        else
        {
            prev2=nums[0];
            prev1=max(nums[0],nums[1]);
        for (int i=2;i<l;i++)
        {
            
            current=max(nums[i]+prev2,prev1);
            prev2=prev1;
            prev1=current;
        }
        return current;
        }
    }
};