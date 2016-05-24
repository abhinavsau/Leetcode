class Solution {
public:

    void generateParantheses(vector<string> &vs,string str,int open,int close,int n)
    {
        if(close==n)
        {
            //cout << str << endl;
            vs.push_back(str);
            return;
        }
    
        if(open>close)
            generateParantheses(vs,str+')',open,close+1,n);
        if(open<n)
            generateParantheses(vs,str+'(',open+1,close,n);
    }
    vector<string> generateParenthesis(int n) {
        
     vector<string> vs;
     string str;
     generateParantheses(vs,str,0,0,n);
     return vs;
        
    }
};