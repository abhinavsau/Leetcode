class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int last=n-1;
    int i=0;
    if(n==0)
        return 0;
        

    if(n == 1 && A[0] == elem)
        return 0;

    while(i!=last)
    {
        if(A[i] == elem)
        {
            int temp = A[i];
            A[i]=A[last];
            A[last]=temp;
            last--;
        }
        else
            i++;
    }
    if(A[i]==elem)
        return last;
    else
    return last+1;
        
    }
};