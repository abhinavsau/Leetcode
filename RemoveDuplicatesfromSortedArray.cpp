class Solution {
public:
    int removeDuplicates(int A[], int n) {
        int n1=0,i;
        if(n == 0)
            return 0;
        for(i=1;i<n;i++)
        {
            if(A[n1] < A[i])
            {
                n1++;
                A[n1]=A[i];
            }
        }
        return n1+1;
    }
};