class Solution {
public:
    int jump(int A[], int n) {
     int *b=new int[n];
    for(int i=0;i<n;i++)
        b[i]=0;
    int k = 1;
    for(int i=0;i<n;i++)
    {
        int temp=i+A[i];
        if(temp > n-1)
            temp=n-1;
        
        if(temp >= k)
        {
            while(k < n && k<=temp)
            {
                b[k]=b[i]+1;k++;
            }
        }
    }

    return b[n-1];
    }
};