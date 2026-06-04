class Solution {
public:
    int rob(vector<int>& nums) {
        int l=nums.size();
        if(l<=0)
        return 0;
        else if(l==1)
        return nums[0];
        else if(l==2)
        return max(nums[0],nums[1]);
        else
        {
        int prev1=0,prev2=0,curr=0;
        prev1=nums[0];
        prev2=max(nums[0],nums[1]);
        curr=prev2;
        for(int i=2;i<l-1;i++)
        {
            curr=max(nums[i]+prev1,prev2);
            prev1=prev2;
            prev2=curr;
        }
        int curr1=0;
        prev1=nums[1];
        prev2=max(nums[1],nums[2]);

        curr1=prev2;
        for(int i=3;i<l;i++)
        {
            curr1=max(nums[i]+prev1,prev2);
            prev1=prev2;
            prev2=curr1;
        }
        return max(curr,curr1);
        }
    }
};