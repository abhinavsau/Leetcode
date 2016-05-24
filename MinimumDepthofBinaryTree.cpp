/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    
    if(root == NULL)
            return 0;
        
        int lh = minDepth(root->left);
        int rh = minDepth(root->right);
        
        if(! (lh && rh))
            return (lh | rh)+1;
        
        if(lh < rh)
            return lh+1;
        else
            return rh+1;
}