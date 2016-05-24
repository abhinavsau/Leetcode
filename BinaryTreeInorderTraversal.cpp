/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        stack<struct TreeNode*> s;
    vector<int> v;
    struct TreeNode* cur=root;
    int done=0;
    while(!done)
    {
        if(cur!=NULL)
        {
            s.push(cur);
            cur=cur->left;
        }
        else
        {
            if(!s.empty())
            {
                cur = s.top();
                v.push_back(cur->val);
                s.pop();
                cur = cur->right;
            }
            else
                done=1;
        }
    }
    return v;
        
    }
};