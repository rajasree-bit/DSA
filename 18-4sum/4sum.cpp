class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int l=nums.size(),start=0,end=0;long long sum=0,d=0,di=0;
        vector<vector<int>>a;
        if(l<4)
        return a;
        sort(nums.begin(),nums.end());
        for(int i=0;i<l-3;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            continue;
            d=target-nums[i];
            for(int j=i+1;j<l-2;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1])
                continue;
                start=j+1;
                end=l-1;
                di=d-nums[j];
                while(start<end)
                {
                    sum=nums[start]+nums[end];
                    if(sum==di)
                    {
                        a.push_back({nums[i],nums[j],nums[start],nums[end]});
                        while(start<end && nums[start]==nums[start+1]) start++;
                        while(start<end && nums[end]==nums[end-1]) end--;
                        start++;
                        end--;
                    }
                    else if(sum>di)
                    end--;
                    else
                    start++;

                }
                
                
            }
        }
        return a;
    }
};