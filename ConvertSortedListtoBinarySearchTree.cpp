/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    int countListNodes(struct ListNode* head)
    {
        int count = 0;
        struct ListNode* temp = head;
        while(temp)
        {
            count++;
            temp = temp->next;
        }
        
        return count;
    }
    struct TreeNode* sltobst(struct ListNode **head_ref,int n)
    {
        if(n<=0)
            return NULL;
        
        struct TreeNode* left = sltobst(head_ref,n/2);
        
        struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
        root->val = (*head_ref)->val;
        root->left = left;
        
        *head_ref = (*head_ref)->next;
        
        root->right=sltobst(head_ref,n-n/2-1);
        
        return root;
    }
    TreeNode *sortedListToBST(ListNode *head) {
       if(head == NULL)
        return NULL;
        
        int n = countListNodes(head);
        return sltobst(&head,n);
    }
};