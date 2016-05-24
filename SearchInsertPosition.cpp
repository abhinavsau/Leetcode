class Solution {
public:
    int searchInsert(int A[], int n, int target) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        if(n == 0)
        return 0;
    if(target < A[0])
        return 0;
    if(target > A[n-1])
        return n;
    for(int i=0;i<n;i++)
        if(target <= A[i])
            return i;
    }
};