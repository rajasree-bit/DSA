class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
        return false;
        
        double b=log2(n);
        int a=(int)b;
        double diff=b-a;
        if(diff!=0.0){
            return false;
        }
        else{
            return true;
        }
}
};