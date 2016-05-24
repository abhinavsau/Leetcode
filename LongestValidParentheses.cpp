class Solution {
public:
    int longestValidParentheses(string s)
{
    int len = s.length();
    int maxi = 0;
    int l=-1;
    stack<int> st;
    for(int i=0;i<len;i++)
    {
        if(s[i] == '(')
            st.push(i);
        else
        {
            if(st.empty())
                l = i;
            else if(s[st.top()] == '(')
            {
                st.pop();
                if(st.empty())
                    maxi = max(maxi,i - l);
                else
                    maxi = max(maxi,i-st.top());
            }
        }

    }
    return maxi;
}
};