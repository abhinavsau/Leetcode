class Solution {
public:

    std::bitset<6000000> arr;
    int countPrimes(int n) {
        if(n >= 6000000)
            return 0;
        int count = 0;
        for(int i=2;i<n;i++)
        {
            if(arr[i] == 1)
                continue;
            count++;
            int mul=2;
            while(mul*i < n)
            {
                arr[mul*i]=1;
                mul++;
            }
        }
        return count;
    }
};