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

    vector<vector<int> > vs;
    vector<int> v;
    
    void pathsum2(TreeNode *root, int sum)
    {
        if(root->left==NULL && root->right==NULL && sum-root->val==0)
        {
            v.push_back(root->val);
            vs.push_back(v);
            return;
        }
        v.push_back(root->val);
        if(root->left!=NULL)
        {
            pathsum2(root->left,sum-root->val);
            v.pop_back();
        }
        if(root->right!=NULL)
        {
            pathsum2(root->right,sum-root->val);
            v.pop_back();
        }
        
    }
    vector<vector<int> > pathSum(TreeNode *root, int sum) {
        vs.clear();
        v.clear();
        if(root==NULL)
            return vs;
        
        pathsum2(root,sum);
        return vs;
    }
};