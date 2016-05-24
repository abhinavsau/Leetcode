class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int size=coins.size();
        int arr[amount+1];
        for(int i=0;i<=amount;i++)
            arr[i]=INT_MAX;
        //for(int i=0;i<=amount;i++)
            //cout << arr[i] << " ";
        
        arr[0]=0;
        for(int i=1;i<=amount;i++)
        {
            for(int j=0;j<size;j++) // for each coin denomination
                if(coins[j]<=i)
                {
                    int temp = arr[i-coins[j]];
                    if(temp!=INT_MAX && temp+1 < arr[i])
                        arr[i]=temp+1;
                }
        }
        
        if(arr[amount]==INT_MAX)
            return -1;
        else
            return arr[amount];
    }
};