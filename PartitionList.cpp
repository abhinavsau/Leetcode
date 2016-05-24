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
    ListNode* partition(ListNode* head, int x) {
        
        if(head==NULL)
        return NULL;

    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next=head;
    struct ListNode* start=dummy;
    struct ListNode* prev;
    struct ListNode* temp;
    struct ListNode* xyz;
    prev=dummy;
    temp=head;
    while(temp)
    {
        if(temp->val < x)
        {
            prev->next=temp->next;
            xyz=start->next;
            start->next=temp;
            temp->next=xyz;
            start=start->next;
        }
        prev=temp;
        temp=temp->next;
    }
    
    head=dummy->next;
    return head;
    }
};