class Solution {
public:
    int trailingZeroes(int n) {
        
        if(n<=0)
            return 0;
        if(n == 0)
            return 1;
        int res = 0;
        long f=5;
        while(n/f > 0)
        {
            res = res + n/f;
            f=f*5;
        }
        
        return res;
    }
};