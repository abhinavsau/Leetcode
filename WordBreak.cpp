class Solution {
public:
    bool wordBreak(string str, unordered_set<string>& wordDict) {
        
        int size = str.size();
        int ds = wordDict.size();
        
        if(ds == 0 && size!=0)
            return false;
            
        if(size == 0)
            return true;
        
        bool wb[size+1];
        memset(wb, 0, sizeof(wb));
        
        for(int i=1;i<=size;i++)
        {
            if(wb[i]==false && wordDict.find(str.substr(0,i)) != wordDict.end())
                wb[i] = true;
            
            if(wb[i] == true)
            {
                if(i == size)
                    return true;
                for(int j=i+1;j<=size;j++)
                {
                    if(wb[j] == false && wordDict.find(str.substr(i,j-i)) != wordDict.end())
                        wb[j]=true;
                    if(j==size && wb[j] == true)
                        return true;
                }
            }
        }
        return false;
    }
};