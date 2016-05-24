class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v;
        
        if(rowIndex == 0)
        {
            v.push_back(1);
            return v;
        }
        
        v = getRow(rowIndex-1);
        v.push_back(1);
        for(int i=rowIndex-1;i>0;i--)
            v[i] = v[i]+v[i-1];
        
        return v;
    }
};