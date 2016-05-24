class Solution {
public:
    int uniquePaths(int m, int n) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        int mat[100][100]={0};
    mat[0][0]=1;
    for(int i=1;i<n;i++)
        mat[0][i]=1;
    for(int i=1;i<m;i++)
        mat[i][0]=1;
    for(int i=1;i<m;i++)
        for(int j=1;j<n;j++)
            mat[i][j]=mat[i-1][j]+mat[i][j-1];
    return mat[m-1][n-1];
        
    }
};