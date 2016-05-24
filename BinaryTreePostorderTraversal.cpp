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
    vector<int> postorderTraversal(TreeNode *root) {
     vector<int> v;

    if(root == NULL)
        return v;

    stack<struct TreeNode*> s1;
    stack<struct TreeNode*> s2;
    //struct TreeNode* cur = root;
    s1.push(root);
    while(!s1.empty())
    {
        struct TreeNode* temp = s1.top();
        s1.pop();
        s2.push(temp);
        if(temp->left)
            s1.push(temp->left);
        if(temp->right)
            s1.push(temp->right);
    }
    while(!s2.empty())
    {
        v.push_back(s2.top()->val);
        s2.pop();
    }
    return v;   
    }
};