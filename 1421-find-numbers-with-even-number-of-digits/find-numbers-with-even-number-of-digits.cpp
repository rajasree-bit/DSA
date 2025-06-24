class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int r=0,c=0,c1=0,k=0;
        for (int i=0;i<nums.size();i++)
        {
            k=nums[i];
            while(k>0)
            {
                r=k%10;
                c++;
                k=k/10;

            }
            if(c%2==0)
            {
                c1++;
            }
            c=0;
        }
        return c1;
    }
};