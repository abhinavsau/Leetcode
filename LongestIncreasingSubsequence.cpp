class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int len = nums.size();
        if(len==0)
            return 0;
        int arr[len]={0};
        int max=1;
        for(int i=0;i<len;i++)
            arr[i]=1;
        for(int i=1;i<len;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i] && arr[j]+1>arr[i])
                {
                    arr[i]=arr[j]+1;
                }
            }
            if(arr[i]>max)
                max=arr[i];
        }
        
        return max;
    }
};