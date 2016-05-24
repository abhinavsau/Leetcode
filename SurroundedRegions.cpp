class Solution {
public:
    void solveit(vector<vector<char>> &board,int x,int y,int r,int c)
    {
        int xc[4]={1,-1,0,0};
        int yc[4]={0,0,1,-1};
    
        board[x][y] = '-';
    
        for(int i=0;i<4;i++)
        {
            int tx = x + xc[i];
            int ty = y + yc[i];
            if(tx>=0 && ty>=0 && tx<r && ty<c && board[tx][ty] == 'O')
            {
                solveit(board,tx,ty,r,c);
            }
        }
    }
    
    void solve(vector<vector<char>> &board)
    {
        if(board.size()==0 || board.size() > 200)
            return;
        int r = board.size();
        int c = board[0].size();
            
        for(int i=0;i<r;i++)
            if(board[i][0] == 'O')
                solveit(board,i,0,r,c);
    
        for(int i=1;i<r;i++)
            if(board[i][c-1] == 'O')
                solveit(board,i,c-1,r,c);
    
        for(int j=0;j<c;j++)
            if(board[0][j] == 'O')
                solveit(board,0,j,r,c);
    
        for(int j=1;j<c-1;j++)
            if(board[r-1][j] == 'O')
                solveit(board,r-1,j,r,c);
    
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(board[i][j] == 'O')
                    board[i][j] = 'X';
                else if(board[i][j] == '-')
                    board[i][j]='O';
            }
        }
    }
};