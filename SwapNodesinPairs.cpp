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
    ListNode *swapPairs(ListNode *head) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
        if(head == NULL)
        return NULL;
    if(head->next == NULL)
        return head;
    ListNode* cur=head;
    ListNode* temp1=NULL;
    ListNode* temp2=NULL;
    ListNode* newhead=NULL;
    ListNode* prev=NULL;
    int count=1;
    //while(cur->next!=NULL && cur->next->next!=NULL)
    while(cur!=NULL && cur->next!=NULL)
    {
        //printf("(%d %d)",cur->data,cur->next->data);
        //printf("hi");
        temp1=cur->next;
        temp2=cur->next->next;
        cur->next->next=cur;
        cur->next=temp2;
        cur=temp1;
        //printf("(%d %d %d)",cur->data,cur->next->data,cur->next->next->data);
        if(count)
        {newhead=cur;count--;}
        if(prev!=NULL)
            prev->next=temp1;
        prev=cur->next;
        cur=cur->next->next;
        //printf("(%d %d)",cur->data,cur->next->data);
    }

    return newhead;
        
    }
};