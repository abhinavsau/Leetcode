class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {

    int r = matrix.size();
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<r;j++)
        {
            int temp = matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;
        }
    }
    
    for(int i=0,j=r-1;i<j;i++,j--)
    {
        for(int x=0;x<r;x++)
        {
            int temp = matrix[x][i];
            matrix[x][i]=matrix[x][j];
            matrix[x][j]=temp;
        }
    }
    
    }
};