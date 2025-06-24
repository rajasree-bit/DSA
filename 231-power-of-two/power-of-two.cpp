class Solution {
public:
    bool isPowerOfTwo(int n) {
        int c=0,k=n;
        if(n<=0){
            return false;
        }
        else{
        while(n!=1){
            if(n%2==0){
                c++;
            }
            else{
                return false;
            }
            n=n/2;
        }
        if(pow(2,c)==k){
            return true;
        }
        else{
            return false;
        }
        }
    } 
};