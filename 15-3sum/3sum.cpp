class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l=nums.size(),start=0,end=0,target=0,mid=0,sum=0,temp=0;
        vector<vector<int>> a;
        vector<int>b;
        sort(nums.begin(), nums.end());        
        for (int i=0;i<l;i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
            continue;
            start=i+1;
            end=l-1;
            target=0-nums[i];
            while(start<end)
            {
                    sum=nums[start]+nums[end];
                    if(sum==target)
                    {                                    
                        a.push_back({nums[i],nums[start],nums[end]});
                        while(start<end && nums[start]==nums[start+1]) start++;
                        while(start<end && nums[end]==nums[end-1]) end--;
                        start++;
                        end--;
                        
                    }
                    else if(sum>target)
                    {
                        end=end-1;
                    }
                    else
                    {
                        start=start+1;
                    }
                
                
            }
            temp=0;
            sum=0;            
        }
        return a;
    }
};