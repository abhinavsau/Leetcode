class Solution {
public:
    string convertToTitle(int n) {
        
        if(n<=0)
            return NULL;
        
        string str("");
        while(n>0)
        {
            int r = n%26;
            n = n/26;
            if(r == 0)
            {
                str.insert(str.begin(),1,'Z') ;
                n--;
            }
            else
            {
                char c = ('A'- 1 + r);
                str.insert(str.begin(),1,c) ;
            }
        }
        
        return str;
    }
};