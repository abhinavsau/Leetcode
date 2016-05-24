class Solution {
public:
    void wbutil(string str,int size,string res,unordered_set<string>& wordDict,vector<string> &v)
    {
        for(int i=1;i<=size;i++)
        {
            string prefix = str.substr(0,i);
            if(wordDict.find(prefix)!=wordDict.end())
            {
                if(i==size)
                {
                    res = res + prefix;
                    v.push_back(res);
                    return;
                }
                wbutil(str.substr(i,size-i),size-i,res+prefix+" ",wordDict,v);
            }
        }
        return;
    }
    vector<string> wordBreak(string s, unordered_set<string>& wordDict) {
        
        vector<string> v;
        if(s.size() > 100)
            return v;
        wbutil(s,s.size(),"",wordDict,v);
        return v;
    }
};