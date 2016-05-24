class Solution {
public:
    int singleNumber(int A[], int n) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        int sum;
    int x,r=0;
    for(int i=0;i<32;i++)
    {
        sum=0;
        x=1<<i;
        for(int j=0;j<n;j++)
        {
            if(A[j]&x)
                sum++;
        }
        if(sum%3) // construct the result bit by bit
            r=r|x;
    }
    return r;
        
    }
};