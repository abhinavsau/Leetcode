class Solution {
public:
    void reverse(int a[],int s,int e)
    {
        for(int i=s,j=e;i<j;i++,j--)
        {
            int temp = a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }

    void rotate(int nums[], int n, int k)
    {
        if(n<=0 || k<=0)
            return;
        
        if(k>n)
            k = k%n;
        
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
    }
};