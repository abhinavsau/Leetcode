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
    vector<vector<int> > levelOrderBottom(TreeNode *root) {
        vector<vector<int> > vs;
        vector<int> v;
        if(root==NULL)
            return vs;
        
        queue<TreeNode*> myq;
        myq.push(root);
        myq.push(NULL);
        v.push_back(root->val);
        vs.push_back(v);
        v.clear();
        //int count=0;
        while(!myq.empty())
        {
            //count++;
            struct TreeNode *temp = myq.front();
            myq.pop();
            if(temp!=NULL)
            {
                if(temp->left)
                    myq.push(temp->left);
                if(temp->right)
                    myq.push(temp->right);
                if(temp->left)
                    v.push_back(temp->left->val);
                if(temp->right)
                    v.push_back(temp->right->val);
            }
            else
            {
                if(!myq.empty())
                    myq.push(NULL);
                if(v.size())
                {
                    vector<vector<int> >::iterator it;
                    it=vs.begin();
                    //vs.push_back(v);
                    vs.insert(it,v);
                }
                v.clear();
            }
            //if(count > 10000)
              //  return vs;
        }
        return vs;
    }
};