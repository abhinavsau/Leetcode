class Solution {
public:
    
    bool FindUnassignedLocation(vector<vector<char> > &board, int &row, int &col)
    {
        for (row = 0; row < 9; row++)
            for (col = 0; col < 9; col++)
                if (board[row][col] == '.')
                    return true;
        return false;
    }

    bool UsedInRow(vector<vector<char> > &board, int row, char num)
    {
        for (int col = 0; col < 9; col++)
            if (board[row][col] == num)
                return true;
        return false;
    }
     
    bool UsedInCol(vector<vector<char> > &board, int col, char num)
    {
        for (int row = 0; row < 9; row++)
            if (board[row][col] == num)
                return true;
        return false;
    }
     
    bool UsedInBox(vector<vector<char> > &board, int boxStartRow, int boxStartCol, char num)
    {
        for (int row = 0; row < 3; row++)
            for (int col = 0; col < 3; col++)
                if (board[row+boxStartRow][col+boxStartCol] == num)
                    return true;
        return false;
    }
     
    
    bool isSafe(vector<vector<char> > &board, int row, int col, char num)
    {
        return !UsedInRow(board, row, num) &&
               !UsedInCol(board, col, num) &&
               !UsedInBox(board, row - row%3 , col - col%3, num);
    }
    bool sudokusolver(vector<vector<char> > &board)
    {
        int row, col;
     
        if (!FindUnassignedLocation(board, row, col))
           return true;
     
        for (int num = 1; num <= 9; num++)
        {
            if (isSafe(board, row, col, num+48))
            {
                board[row][col] = num+48;
     
                if (sudokusolver(board))
                    return true;
     
                board[row][col] = '.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char> > &board) {
        
        sudokusolver(board);
    }
};