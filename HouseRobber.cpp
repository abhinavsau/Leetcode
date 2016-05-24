class Solution {
public:

    int max(int a,int b)
    {
        return a>b?a:b;
    }
    int rob(vector<int> &nums) {
        
        int n = nums.size();
        if(n==0)
            return 0;
        int table[n+1]={0};
        table[0]=0;
        table[1]=nums[0];
        table[2]=nums[1];
        
        for(int i=3;i<=n;i++)
            table[i]=nums[i-1]+max(table[i-2],table[i-3]);
        
        return max(table[n],table[n-1]);
        
    }
};