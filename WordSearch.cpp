class Solution {
public:
    bool isSafe(int i,int j,int row,int col)
{
   if(i>=0&&i<row&&j>=0&&j<col)return true;
   return false;
}
bool findStrUtill(vector<vector<char> > &mat,int row,int col,string str,int l,int r,int k)
{
	if(k>=str.size())return true;
    int x[]={-1,0,0,1};
    int y[]={0,-1,1,0};
    for(int i=0;i<4;i++)
    {
    	int ll=l+x[i],rr=r+y[i];
    	if(isSafe(ll,rr,row,col)&&mat[ll][rr]==str[k])
    	{
    	   char c=mat[ll][rr];	mat[ll][rr]='.';
    	   if(findStrUtill(mat,row,col,str,ll,rr,k+1)) return true;
    	   mat[ll][rr]=c;
        }
    }
 return false;
}

bool findStr(vector<vector<char> > &mat,int row,int col,string str)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(mat[i][j]==str[0])
			{
				char c=str[0]; mat[i][j]='.';
				if(findStrUtill(mat,row,col,str,i,j,1))return true;
				mat[i][j]=c;
			}
		}
	}
	return false;
}

bool exist(vector<vector<char> > &board, string word)
{
    int r = board.size();
    int c = board[0].size();
    return findStr(board,r,c,word);
}
};