class Solution {
public:
    bool isPalindrome(string s) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        int start=0;
    int en=s.size()-1;
    while(start < en)
    {
        if(!isalnum(s[start])) {start++;continue;}
        if(!isalnum(s[en])) {en--;continue;}
        if(tolower(s[start]) != tolower(s[en]))
            return false;
        else {start++;en--;}
    }
    return true;
    }
};