class Solution {
public:
    int reverse(int x) {
        int r=0,s=0;
       while(x!=0)
       {
        r=x%10;
        if(s>=INT_MIN/10 && s<=INT_MAX/10)
        {
            s=s*10+r;
        }
        else
        return 0;
        x=x/10;
       }
       return s;
    }
};
