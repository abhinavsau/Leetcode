class Solution {
public:

    void countIslands(vector<vector<char>> &grid,int i,int j,int rlen,int clen)
    {
        int x[4] = {-1,1,0,0};
        int y[4] = {0,0,-1,1};
        
        grid[i][j] = 'X';
        
        for(int k=0;k<4;k++)
        {
            int ni = x[k] + i;
            int nj = y[k] + j;
            if(ni>=0 && ni<rlen && nj>=0 && nj<clen && grid[ni][nj] == '1')
                countIslands(grid,ni,nj,rlen,clen);
        }
    }
    
    int numIslands(vector<vector<char>> &grid) {
        
        if(grid.size() == 0)
            return 0;
        
        int rlen = grid.size();
        int clen = grid[0].size();
        int count = 0;
        for(int i=0;i<rlen;i++)
        {
            for(int j=0;j<clen;j++)
            {
                if(grid[i][j] == '1')
                {
                    count++;
                    countIslands(grid,i,j,rlen,clen);
                }
            }
        }
        return count;
    }
};