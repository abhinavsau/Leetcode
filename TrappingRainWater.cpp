class Solution {
public:
    int trap(int A[], int n) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        if(n <= 2)
        return 0;
    int i,j,maxl=A[0],maxr=A[n-1],mini,sum=0;
    int *b = new int[n];
    int *c = new int[n];
    b[n-1]=-1;
    for(i=n-2;i>=0;i--)
    {
        b[i]=A[i]>maxr?-1:maxr;
        if(A[i] > maxr)
            maxr = A[i];
    }
    c[0]=-1;
    for(i=1;i<n;i++)
    {
        c[i]=A[i]>maxl?-1:maxl;
        if(A[i] > maxl)
            maxl = A[i];
    }
    for(i=0;i<n;i++)
    {
        if(b[i] == -1 || c[i] == -1)
            continue;
        else
        {
            mini = b[i]>c[i]?c[i]:b[i];
            sum=sum + (mini - A[i]);
        }
    }
    return sum;
    }
};