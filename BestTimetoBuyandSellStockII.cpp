int maxProfit(int* prices, int pricesSize) {
    
    int profit=0;
    int i;
    for(i=1;i<pricesSize;i++)
        profit+=prices[i]>prices[i-1] ? (prices[i]-prices[i-1]): 0;
    
    return profit;
}