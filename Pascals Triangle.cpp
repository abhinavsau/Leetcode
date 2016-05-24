class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > vs;
        if(numRows == 0)
            return vs;

        vector<int> v;
        v.push_back(1);
        vs.push_back(v);
        if(numRows == 1)
            return vs;

        for(int i=1;i<numRows;i++)
        {
            vector<int> v(i+1,1);

            for(int j=1;j<i;j++)
                v[j] = vs[i-1][j-1]+vs[i-1][j];
            vs.push_back(v);
        }
        return vs;
    }
};