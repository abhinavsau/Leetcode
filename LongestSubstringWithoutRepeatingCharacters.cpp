class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int n = str.length();
    int i=0,j=0,maxlen = 0;
    int a[256]={0};

    while(j < n)
    {
        if(a[str[j]])
        {
            maxlen = max(maxlen,j-i);
            while(str[i]!=str[j])
            {
                a[str[i]] = 0;
                i++;
            }
            i++;
            j++;
        }
        else
        {
            a[str[j]] = 1;
            j++;
        }
    }
    maxlen = max(maxlen,n-i);

    return maxlen;
    }
};