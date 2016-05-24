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
    ListNode* removeElements(ListNode* head, int val) {
        
        struct ListNode* dummy;
        dummy->next = head;
        struct ListNode* prev=dummy;
        struct ListNode* temp=head;
        
        while(temp!=NULL)
        {
            if(temp->val == val)
                prev->next = temp->next;
            else
                prev = temp;
            temp = temp->next;
        }
        
        return dummy->next;
    }
};