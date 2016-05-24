class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        map<int,bool> mymap;
        vector<int> myv;
        map<int,bool>::iterator it;
        
        for(int i=0;i<n1;i++)
            if(mymap.find(nums1[i]) == mymap.end())
                mymap.insert(pair<int,bool>(nums1[i],false));
        for(int i=0;i<n2;i++)
            if((it=mymap.find(nums2[i]))!=mymap.end() && it->second==false)
            {
                it->second = true;
                myv.push_back(nums2[i]);
            }
            
        return myv;
    }
};