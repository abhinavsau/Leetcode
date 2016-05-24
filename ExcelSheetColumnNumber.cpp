class Solution {
public:
    int titleToNumber(string s) {
        int len = s.length();
        int res = 0;
        int ts=1;
        for(int i=len-1;i>=0;i--)
        {
            res = res + (s[i]-'A' + 1)*ts;
            ts = ts*26;
        }
        
        return res;
    }
};