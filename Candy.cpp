class Solution {
public:
    int candy(vector<int> &ratings) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        vector<int> candies;
    int i,j,sum=0;
    int size = ratings.size();

    for(i=0;i<size;i++)
    {
        candies.push_back(1);
    }
    for(i=0;i<size-1;i++)
    {
        if(ratings[i] < ratings[i+1])
            candies[i+1]=candies[i]+1;
        if(ratings[i] == ratings[i+1])
                continue;
        if(ratings[i] > ratings[i+1])
        {
            j=i;
            if(candies[i] <= candies[i+1])
                candies[i]=candies[i+1]+1;
            while(j>0 && ratings[j-1] > ratings[j] && candies[j] >= candies[j-1])
            {
                candies[j-1]=candies[j]+1;j--;
            }
        }
    }
    //for(i=0;i<size;i++)
      //  cout << candies[i] << " ";
    for(i=0;i<size;i++)
        sum+=candies[i];
    return sum;
        
    }
};