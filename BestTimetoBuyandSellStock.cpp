class Solution {
public:
    int maxProfit(vector<int> &prices) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
    if(prices.size() == 0)
        return 0;
    int min=prices[0],max=0;
    
    for(int i=0;i<prices.size();i++)
    {
        if(prices[i] < min)
            min = prices[i];
        if(prices[i]-min > max)
            max = prices[i]-min;
    }
    return max;
        
    }
};