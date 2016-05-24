class Solution {
public:
    int climbStairs(int n) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        if(n == 1 or n ==2)
        return n;
    int a=1,b=2,w;
    n=n-2;
    while(n--)
    {
        w = a+b;
        a=b;b=w;
    }
    return w;
        
    }
};