class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
     
     int n = matrix.size();
     if(n==0)
        return 0;
    int m = matrix[0].size();
     int max = 0;
     
     vector<vector<int>> state(n,vector<int>(m));
     
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             if(matrix[i][j]=='1')
             {
                state[i][j]=1;
                max=1;
             }
         }
     }
     
     for(int i=1;i<n;i++)
     {
         for(int j=1;j<m;j++)
         {
               if(state[i][j])
               {
                   int a=state[i-1][j-1];int b=state[i-1][j];int c=state[i][j-1];
                   //int min = a > b ? (a>c?a:c):(b>c?b:c);
                   state[i][j] = 1 + min(state[i-1][j], min(state[i][j-1],state[i-1][j-1]));
                   //state[i][j] = 1 + min;
                   //cout << "(" << a << b << c << ")";
                   max = state[i][j]>max?state[i][j]:max;
                   //cout <<  state[i][j];
               }
         }
         //cout << endl;
     }
    
    return max*max;    
    }
};