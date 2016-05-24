class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     
     int len = nums.size();
     for(int i=0;i<len;i++)
        if(nums[i]<=0)
            nums[i]=INT_MAX;
    
    for(int i=0;i<len;i++)
    {
        if(abs(nums[i])<=len && nums[abs(nums[i])-1]>0)
        {
            nums[abs(nums[i])-1]*=-1;
        }
    }
    int i;
    for(i=0;i<len;i++)
        if(nums[i]>0)
            break;
    
    return i+1;
    
    }
};