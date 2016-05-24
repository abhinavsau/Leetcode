class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     
     int ns = nums.size();
     
     map<int,int> mymap;
     map<int,int>::iterator it;
     for(int i=0;i<ns;i++)
     {
         it = mymap.find(nums[i]);
         if(it!=mymap.end())
            return true;
        mymap.insert(pair<int,int>(nums[i],i));
     }
    
    return false;
    }
};