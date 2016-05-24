class Solution {
public:
    int minimumTotal(vector<vector<int> > &triangle) {
        int n = triangle.size();
    if(n==0)
        return 0;
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<triangle[i].size();j++)
        {
            if(j==0)
            {
                triangle[i][j]+=triangle[i-1][j];
            }
            if(j>0)
            {
                if(i > j)
                    triangle[i][j]+= min(triangle[i-1][j],triangle[i-1][j-1]);
                else
                    triangle[i][j]+=triangle[i-1][j-1];
            }
        }
    }
    sort(triangle[n-1].begin(),triangle[n-1].end());

    return triangle[n-1][0];   
    }
};