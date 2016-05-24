class Solution {
public:
bool check(int x,int &y)
{
    if(x == 0)
        return true;
    if(check(x/10,y))
    {
        if(x%10 == y%10)
        {
            y=y/10;
            return true;
        }
    }
    return false;
}
    bool isPalindrome(int x) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
       if( x < 0)
        return false;
    else
        check(x,x);
    }
};