class Solution {
public:
int rtoi(char c)
{
    switch(c)
    {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
}
    int romanToInt(string s) {
        int res=0;
    for(int i=0;i<s.length();i++)
    {
        if(rtoi(s[i]) < rtoi(s[i+1]))
        {
            res = res + rtoi(s[i+1]) - rtoi(s[i]);
            i++;
        }
        else
            res = res + rtoi(s[i]);
    }
    return res;
    }
};