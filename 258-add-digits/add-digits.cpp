class Solution {
public:
    int addDigits(int num) {
        int r=0,sum=0;
        sum=num;
        while(sum>9)
        {
            num=sum;
            sum=0;
            while(num>0){
                r=num%10;
                sum=sum+r;
                num=num/10;
            }
            
            

        }
        return sum;
    }
};