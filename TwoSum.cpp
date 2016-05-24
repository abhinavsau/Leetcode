class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int size = nums.size();
        vector<int> vs;
        if(size == 0)
            return vs;
        map<int,int> mymap;
        for(int i=0;i<size;i++)
        {
            map<int,int>::iterator it= mymap.find(target-nums[i]);
            if( it == mymap.end())
                mymap.insert(pair<int,int>(nums[i],i));
            else
            {
                vs.push_back(it->second + 1);
                vs.push_back(i+1);
                return vs;
            }
        }
        
        return vs;
    }
};