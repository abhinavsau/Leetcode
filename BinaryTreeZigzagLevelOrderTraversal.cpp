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
    vector<vector<int> > zigzagLevelOrder(TreeNode *root) {
        
    stack<struct TreeNode*> s1;
    stack<struct TreeNode*> s2;
    vector<vector<int> > v;
    if(root == NULL)
    {
        return v;   
    }
    s1.push(root);
    while(!s1.empty() || !s2.empty())
    {
        vector<int> v1;
        vector<int> v2;
        while(!s1.empty())
        {
            struct TreeNode* temp = s1.top();
            s1.pop();
            v1.push_back(temp->val);
            //cout << temp->val << endl;
            if(temp->left)// && temp->left->val!='#')
                s2.push(temp->left);
            if(temp->right)//&& temp->right->val!='#')
                s2.push(temp->right);
        }
        if(v1.size()!=0)
            v.push_back(v1);
        while(!s2.empty())
        {
            struct TreeNode* temp = s2.top();
            s2.pop();
            v2.push_back(temp->val);
            //cout << temp->val << endl;
            if(temp->right)//&& temp->right->val!='#')
                s1.push(temp->right);
            if(temp->left)//&& temp->left->val!='#')
                s1.push(temp->left);
        }
        if(v2.size()!=0)
            v.push_back(v2);
    }
    return v;
    }
};