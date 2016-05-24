class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int len = nums.size();
        int ptr1=0;
        for(int i=0;i<len;i++)
        {
            if(nums[i]!=0)
            {
                nums[ptr1]=nums[i];
                ptr1++;
            }
        }
        while(ptr1<len)
        {
            nums[ptr1]=0;
            ptr1++;
        }
        
    }
};