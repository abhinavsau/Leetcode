class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int ns = nums.size();
        int n1 = (ns*(ns+1))/2;
        int sum = 0;
        for(int i=0;i<ns;i++)
            sum+=nums[i];
            
        return n1-sum;
    }
};