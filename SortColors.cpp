class Solution {
public:
    void swap(int *a,int *b)
    {
        int temp = *a;
        *a=*b;
        *b=temp;
    }
    void sortColors(int A[], int n) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        if(n == 1)
        return;
        int mid=0;
        int l=0;
        int h = n-1;
        while(mid<=h)
        {
            if(A[mid] == 0)
                swap(&A[l++],&A[mid++]);
            else if(A[mid] == 1)
                mid++;
            else
                swap(&A[mid],&A[h--]);
        }
    }
};