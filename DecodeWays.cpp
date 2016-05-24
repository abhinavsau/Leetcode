class Solution {
public:
    int numDecodings(string s) {
        int len = s.length();
    if(len == 0)
        return 0;
    int res[s.length()+1];
    for(int i=0;i<=len;i++)
        res[i] = 0;

    res[0]=1;
    res[1] = s[0] != '0'?1:0;

    for(int i=2;i<=len;i++)
    {
        if(s[i-1]!='0')
            res[i] = res[i-1];

        int dd = (s[i-2] - '0')*10 + (s[i-1] - '0');
        if(dd >= 10 && dd <=26)
            res[i]+=res[i-2];
    }

    return res[len];
    }
};