class Solution {
public:
    int longestConsecutive(vector<int> &num) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        map<int,bool> mp;
    int s = num.size();
    for(int i=0;i<s;i++)
        mp[num[i]] = true;
    map<int,bool>::iterator it;
    int l,maxlen=1,key;
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it == mp.begin()) { l =1;key = it->first;}
        else
        {
            if(it->first == key+1) {l++;}
            else l=1;
            if(maxlen < l)
                maxlen = l;
            key = it->first;
        }
    }
    return maxlen;
        
    }
};