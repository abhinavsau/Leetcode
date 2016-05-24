class Solution {
public:
    int removeDuplicates(int A[], int n) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
     int slow=1,fast=2,last;
    if(n == 0)
        return 0;
    if(n>=1)
        last=A[0];
    while(fast < n)
    {
        if(A[fast]!=last)
        {
            last=A[slow];
            A[++slow]=A[fast];
        }
        else
            last=A[fast-1];
        fast++;
    }
    return n<=2?n:slow+1;   
    }
};