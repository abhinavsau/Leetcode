class Solution {
public:
string check_palindrome(string str,int x,int y,int n)
{
    //int n = str.length();
    int l = x,r = y;

    while(l>=0 && r<=n-1 && str[l] == str[r])
    {
        l--;r++;
    }

    return str.substr(l+1, r-l-1);
}
    string longestPalindrome(string str) {
        int n = str.length();
    if(n == 0) return "";
    string s1,s2;
    string longest = str.substr(0,1);
    for(int i=0;i<n;i++)
    {
        s1 = check_palindrome(str,i,i,n); // check for odd length palindromes

        if(s1.length() >  longest.length())
            longest = s1;

        s2 = check_palindrome(str,i,i+1,n); // check for even length palindromes

        if(s2.length() >  longest.length())
            longest = s2;
    }

    return longest;
    }
};