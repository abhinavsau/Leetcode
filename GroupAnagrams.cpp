class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        vector<string> v;
    map<string,int> mp;
    int s = strs.size();

    for(int i=0;i<s;i++)
    {
        string st = strs[i];
        sort(st.begin(),st.end());

        if(mp.find(st)!=mp.end())
        {
            v.push_back(strs[i]);
            if(mp[st]!=-1)
            {
                v.push_back(strs[mp[st]]);
                mp[st] = -1;
            }
        }
        else
            mp[st] = i;
    }

    return v;
    }
};