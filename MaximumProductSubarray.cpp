class Solution {
public:
    int maxProduct(int A[], int n) {
        int res = A[0];
        int maxp = A[0];
        int minp = A[0];
        for (int i=1;i<n;i++){
            int tmpmax = maxp;
            int tmpmin = minp;
            maxp = max(max(tmpmax*A[i],tmpmin*A[i]),A[i]);
            minp = min(min(tmpmax*A[i],tmpmin*A[i]),A[i]);
            res = max(maxp,res);
        }
        return res;
    }
};