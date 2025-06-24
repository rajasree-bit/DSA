class Solution {
public:
    bool isPalindrome(int x) {
        int r=0,k=x;long long s=0;
        if(x>=pow(-2,31) && x<=pow(2,31))
        {
             while(x>0)
            {
                r=x%10;
                s=s*10+r;
                x=x/10;
            }
            if(s>=pow(-2,31) && s<=pow(2,31))
            {
                
                if(k==s)
                {
                    return true;

                }
                else
                    return false;
            }
            else
                return false;

        }
        else
        return false;
       
    }
};