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

    bool isBST(TreeNode *root,long long int min,long long int max)
    {
        if(!root)
            return true;
        
        if(root->val <= min || root->val >= max)
            return false;
        
        return isBST(root->left,min,root->val) && isBST(root->right,root->val,max);
    }
    bool isValidBST(TreeNode *root) {
        
        return isBST(root,(long long int)INT_MIN-1,(long long int)INT_MAX+1);
    }
};