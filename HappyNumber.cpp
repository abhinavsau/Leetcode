class Solution {
public:
    bool isHappy(int n) {
        
        int ans=n;
        map<int,bool> m;
        while(ans!=1 && !(m.find(n)->second))
        {
            m.insert(pair<int,bool>(n,true));
            ans = 0;
            while(n)
            {
                ans += ((n%10)*(n%10));
                n=n/10;
            }
            n = ans;
        }
        if(ans == 1)
            return true;
        else
            return false;
    }
};