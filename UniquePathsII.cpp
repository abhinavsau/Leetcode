class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
     int mat[100][100]={0};
    mat[0][0]=1;
    int m=obstacleGrid.size();
    int n=obstacleGrid[0].size();

    if(obstacleGrid[0][0]==1  || obstacleGrid[m-1][n-1]==1)
        return 0;

    if(m == 1 && n == 1 && mat[0][0]==1)
        return 1;

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if(obstacleGrid[i][j])
                mat[i][j]=-1;

    for(int i=1;i<n;i++)
        if(mat[0][i]!=-1)
            mat[0][i]=1;
        else
            break;

    for(int i=1;i<m;i++)
        if(mat[i][0]!=-1)
            mat[i][0]=1;
        else
            break;

    if(mat[m-1][n-1]==-1)
        mat[m-1][n-1] = 0;

    for(int i=1;i<m;i++)
        for(int j=1;j<n;j++)
            {
                if(mat[i][j]==-1)
                    continue;
                else if(mat[i][j-1] == -1 && mat[i-1][j] == -1)
                    mat[i][j]=0;    
                else if(mat[i-1][j] == -1)
                    mat[i][j]=mat[i][j-1];
                else if(mat[i][j-1] == -1)
                    mat[i][j]=mat[i-1][j];
                else
                    mat[i][j]=mat[i-1][j] + mat[i][j-1];
            }

     return mat[m-1][n-1];
    }
};