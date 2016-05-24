/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        if(head == NULL)
        return head;
       ListNode* cur=head;
    ListNode* next=head->next;
    
    while(cur!=NULL && next!=NULL)
    {
        if(cur->val == next->val)
        {
            cur->next=next->next;
            next=cur->next;
        }
        else
            cur=cur->next;
    }
    return head;
        
    }
};