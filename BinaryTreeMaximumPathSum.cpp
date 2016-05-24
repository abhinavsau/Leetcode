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
    
    int maxi(int a,int b)
    {
        return a>b?a:b;
    }
    
    int maxSum(TreeNode* root,int* max) {
        
        if(root==NULL)
            return 0;
        
        int l=maxSum(root->left,max);
        int r=maxSum(root->right,max);
        
        int max1 = maxi(maxi(l,r)+root->val,root->val); 
        int max2 = maxi(max1,root->val+l+r);
        
        *max = maxi(max2,*max);
        
        return max1;
    }

    int maxPathSum(TreeNode* root) {
        
        int max = INT_MIN;
        maxSum(root,&max);
        
        return max;
        
    }
};