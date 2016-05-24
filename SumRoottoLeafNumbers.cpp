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

    int calc(TreeNode *root,int data,int &res)
    {
        if(root==NULL)
            return 0;
        if(root->left==NULL && root->right==NULL)
        {
            res+= data*10+root->val;
            return res;
        }
        calc(root->left,data*10+root->val,res);
        calc(root->right,data*10+root->val,res);
    }
    int sumNumbers(TreeNode *root) {
        
        int res=0;
        calc(root,0,res);
        return res;
    }
};