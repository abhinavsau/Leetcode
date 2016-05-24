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
    void flatten(TreeNode *root) {
        
        stack<TreeNode*> st;
        
        while(root!= NULL || !st.empty())
        {
            if(root->right)
                st.push(root->right);
            if(root->left)
            {
                root->right = root->left;
                root->left = NULL;
            }
            else if(!st.empty())
            {
                TreeNode* temp = st.top();
                st.pop();
                root->right = temp;
            }
            
            root=root->right;
        }
    }
};