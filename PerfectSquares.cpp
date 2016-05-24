class Solution {
public:
    int coins[32768]={0};
    int numSquares(int n) {
        
        for(int i=0;i<=32768;i++)
            coins[i]=i*i;
        
        int arr[n+1];
        for(int i=0;i<=n;i++)
            arr[i]=INT_MAX;
        
        arr[0]=0;
        for(int i=1;i<=n;i++)
        {
            int j=0;
            while(coins[j]<=i) // for each coin denomination
            {
                int temp = arr[i-coins[j]];
                if(temp!=INT_MAX && temp+1 < arr[i])
                    arr[i]=temp+1;
                j++;
            }
        }
        
        //for(int i=0;i<=n;i++)
            //cout << arr[i] << " ";
        
        if(arr[n]==INT_MAX)
            return -1;
        else
            return arr[n];
    }
};