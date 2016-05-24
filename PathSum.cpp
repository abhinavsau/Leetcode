/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

    bool hasPathSumUtil(TreeNode* root, int sum, int res) 
    {
        if(root==NULL)
            return false;
        if(root->left==NULL && root->right==NULL)
        {
            res=res+root->val;
            if(res == sum)
                return true;
        }
        
        //res=res+root->val;
        return hasPathSumUtil(root->left,sum,res+root->val) || hasPathSumUtil(root->right,sum,res+root->val);
    }
    bool hasPathSum(TreeNode* root, int sum) {
        
        int res=0;
        return hasPathSumUtil(root,sum,res);
        
    }
};