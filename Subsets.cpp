class Solution {
public:
    vector<vector<int> > subsets(vector<int> &S) {
        
        vector<vector<int> > vs;
        int vlen = S.size();
        int n = pow(2,vlen);
        int x = 1;
        for(int i=0;i<n;i++)
        {
            vector<int> v;
            for(int j=0;j<vlen;j++)
            {
                if(x<<j & i)
                    v.push_back(S[j]);
            }
            sort(v.begin(),v.end());
            vs.push_back(v);
        }
    
        return vs;
    }
};