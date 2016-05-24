class Solution {
public:
    static bool myCompare (string str1, string str2)
    {
        return (str1 + str2) < (str2 + str1);
    }

    string largestNumber(vector<int> &num) {
        int n = num.size();
    vector<string> numstrs(n);

    char c[10];
    for(int i = 0; i < n; i++)
    {
        sprintf(c,"%d",num[i]);
        numstrs[i]=c;
    }

    sort(numstrs.begin(), numstrs.end(), myCompare);

    if (numstrs[n-1] == "0")
        return "0";

    string res;
    for(int i = n-1; i >= 0; i--)
        res += numstrs[i];

    return res;
    }
};