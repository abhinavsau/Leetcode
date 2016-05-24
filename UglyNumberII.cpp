class Solution {
public:
    int nthUglyNumber(int n) {
        set<long long int> myset;
    set<long long int>::iterator it;
    myset.insert(1);
    for(it=myset.begin();--n;it++)
    {
        myset.insert(*it * 2);
        myset.insert(*it * 3);
        myset.insert(*it * 5);
    }
    return *it;
    }
};