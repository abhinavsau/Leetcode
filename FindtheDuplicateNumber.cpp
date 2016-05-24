class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int len = nums.size();
        int ans=0;
        int a[32]={0};
        
        for(int i=0;i<32;i++)
        {
            int count=0;
            for(int j=1;j<len;j++)
            {
                if(j & 1<<i)
                    count++;
            }
            a[i]=count;
        }
        
        for(int i=0;i<32;i++)
        {
            int count=0;
            for(int j=0;j<len;j++)
            {
                if(nums[j] & 1<<i)
                    count++;
            }
            
            if(count>a[i])
                ans = ans | 1<<i;
        }
        
        return ans;
    }
};