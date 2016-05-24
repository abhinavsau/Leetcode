class Solution {
public:
    
    string nextStr(string str)
    {
        int len = str.length();
        int count = 1;
        string res;
        for(int i=0;i<len;i++)
        {
            char s = str[i];
            while(str[i]==str[i+1])
            {
                count++;i++;
            }
            char c = count+48;
            res += c;
            res += s;
            count = 1;
        }
        return res;
    }
    string countAndSay(int n) {
        string str = "1";
        for(int i=1;i<n;i++)
            str = nextStr(str);
        return str;
    }
};