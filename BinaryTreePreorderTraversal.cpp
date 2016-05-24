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
    vector<int> preorderTraversal(TreeNode *root) {
        vector<int> v;

    if(root == NULL)
        return v;

    stack<struct TreeNode*> s;
    struct TreeNode* cur = root;
    int done = 0;
    while(!done)
    {
        if(cur != NULL)
        {
            v.push_back(cur->val);
            //cout << cur->val << " ";
            if(cur->right)
                s.push(cur->right);
            cur=cur->left;
        }
        else
        {
            if(!s.empty())
            {
                cur=s.top();
                s.pop();
            }
            else
                done = 1;
        }
    }
    return v;
    }
};