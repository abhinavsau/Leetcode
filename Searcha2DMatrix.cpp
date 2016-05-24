class Solution {
public:

    bool BinarySearch(vector<int> &A, int l, int r, int key)
    {
        int m;
     
        while( l <= r )
        {
            m = l + (r-l)/2;
     
            if( A[m] == key ) // first comparison
                return true;
     
            if( A[m] < key ) // second comparison
                l = m + 1;
            else
                r = m - 1;
        }
     
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        int i;
        for(i=0;i<row;i++)
        {
            if(matrix[i][col-1]==target)
                return true;
            else if(target < matrix[i][col-1])
                break;
        }
        
        if(i==row)
            return false;
        else
            return BinarySearch(matrix[i],0,col-1,target);
    }
};