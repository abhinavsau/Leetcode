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

    bool isBal(TreeNode *root,int *height)
    {
        if(root == NULL)
        {
            *height = 0;
            return true;
        }
        
        int lh = 0,rh=0;
        int l=0,r=0;
        
        l = isBal(root->left,&lh);
        r = isBal(root->right,&rh);
        
        *height = (lh > rh ? lh : rh) + 1;
        
        if(abs(lh-rh) > 1)
            return false;
            
        return l&&r;    
    }
    bool isBalanced(TreeNode *root) {
        
        int height = 0;
        return isBal(root,&height);
    }
};