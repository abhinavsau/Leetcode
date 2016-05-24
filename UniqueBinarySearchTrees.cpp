class Solution {
public:
    int numTrees(int n) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        if(n == 0 || n == 1)
            return 1;
        int sum=0,k;
        for(k=1;k<=n;k++)
            sum += numTrees(k-1)*numTrees(n-k);
        return sum;
    }
};