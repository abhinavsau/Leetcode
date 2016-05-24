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
    void rightViewUtil(TreeNode *root, int level, int *max_level,vector<int> &v)
    {
        // Base Case
        if (root==NULL)  return;
     
        // If this is the last Node of its level
        if (*max_level < level)
        {
            v.push_back(root->val);
            //printf("%d\t", root->val);
            *max_level = level;
        }
     
        // Recur for right subtree first, then left subtree
        rightViewUtil(root->right, level+1, max_level,v);
        rightViewUtil(root->left, level+1, max_level,v);
    }
    vector<int> rightSideView(TreeNode *root) {
        
        vector<int> v;
        int max = 0;
        rightViewUtil(root,1,&max,v);
        
        return v;
        
    }
};