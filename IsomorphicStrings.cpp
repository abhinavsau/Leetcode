class Solution {
public:
    bool isIsomorphic(string s, string t) {
    char a[256]={0};
    char b[256]={0};
    int n = s.length();
    int i;
    for(i=0;i<n;i++)
    {
        if(a[s[i]] && b[t[i]])
        {
            if(a[s[i]] != t[i] || b[t[i]]!=s[i])
               break;
        }
        else if(!a[s[i]] && !b[t[i]])
        {
            a[s[i]]=t[i];
            b[t[i]]=s[i];
        }
        else
            break;
    }

    if(i==n)
        return true;
    else
        return false;
    }
};