class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int ns = nums.size();
        map<int,int> mymap;
        for(int i=0;i<ns;i++)
        {
            map<int,int>::iterator it=mymap.find(nums[i]);
            if(it != mymap.end())
            {
                if((nums[i]==nums[it->second]) && (i-it->second) <= k)
                    return true;
                mymap.erase(nums[i]);
            }
            mymap.insert(pair<int,int>(nums[i],i));
        }
        
        return false;
    }
};