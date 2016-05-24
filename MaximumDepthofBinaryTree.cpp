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

    int max(int x,int y)
    {
        if(x > y)
            return x;
        else
            return y;
    }
    int maxDepth(TreeNode *root) {
        
        if(root == NULL)
            return 0;
        
        return 1 + max(maxDepth(root->left),maxDepth(root->right));
    }
};