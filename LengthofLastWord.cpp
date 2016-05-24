class Solution {
public:
    int lengthOfLastWord(const char *s) {
        
        int len = strlen(s);
        if(len == 0)
            return 0;
        int count = 0;
        while(s[len-1]==' ')
            len--;
        while(len > 0 && s[len-1]!=' ')
        {
            count++;
            len--;
        }
        
        return count;
    }
};