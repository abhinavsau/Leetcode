class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int i=m+n,j;
    if(n==0)
        return;
        /*
    if(m==0){
        for(j=0;j<n;j++)
            A[j] = B[j];    
        return;    
    }
    */
    for(j=i-1;j>=0;j--)
    {
        //printf("%d %d\n",A[m-1],B[n-1]);
        if(m == 0 || n == 0)
            break;
            
        if(A[m-1] > B[n-1])
        {
            A[j] = A[m-1];
            m--;
        }
        else
        {
            A[j]=B[n-1];
            n=n-1;
        }
        //printf("%d ",A[j]);
    }
    if(m==0)
    {
        for(j=0;j<n;j++)
            A[j]=B[j];
    }
    }
};