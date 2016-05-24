class Solution {
public:
    int strStr(char *haystack, char *needle) {
        
        int hl = strlen(haystack);
        int nl = strlen(needle);
        
        if(hl == 0 && nl == 0)
            return 0;
        if(hl == 0 && nl != 0)
            return -1;
        if(nl==0 && hl != 0)
            return 0;
            
        int count;
        
        for(int i=0;i<=hl-nl;i++)
        {
            count=0;
            for(int j=0;j<nl;j++)
            {
                if(haystack[i+j]==needle[j])
                    count++;
                else
                    break;
            }
            if(count == nl)
                return i;
        }
        
        return -1;
    }
};