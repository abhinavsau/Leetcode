class Solution {
public:
    int maximumGap(vector<int> &num) {
        map<int,bool> mp;
    int s = num.size();
    if(s <= 1)
        return 0;
    for(int i=0;i<s;i++)
        mp[num[i]] = true;
    map<int,bool>::iterator it;
    map<int,bool>::iterator it1;
    int l,max=0,key;
    for(it=mp.begin();it!=mp.end();it++)
    {
        it1 = it;
        it1++;
        l = (it1)->first - it->first;
        
            if(max < l)
                max = l;
    }
    return max;
    }
};