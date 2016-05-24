class Solution {
public:
    int maxSubArray(int A[], int n) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        int sum=0;
    int max=0,maxele=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum = sum + A[i];
        if(sum < 0)
            sum=0;
        if(sum > max)
            max=sum;
        maxele= A[i] > maxele ? A[i]:maxele;
    }
    if(max == 0)
        max=maxele;
    return max;
        
    }
};