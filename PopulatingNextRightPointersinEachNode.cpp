/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if (root == NULL)
        return;

    queue<struct TreeLinkNode*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty() && q.front()!= NULL)
    {
        struct TreeLinkNode* temp = q.front();
        q.pop();

        if(temp)
            q.push(temp->left);
        if(temp)
            q.push(temp->right);

        struct TreeLinkNode* top = q.front();

        if(top == NULL)
        {
            temp->next = NULL;
            q.pop();
            q.push(NULL);
        }
        else
            temp->next = top;
      }
    }
};