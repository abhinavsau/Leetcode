/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseKGroupUtil(struct ListNode* head, int k,int n) {
    
    struct ListNode* cur = head;
    struct ListNode* prev = NULL;
    struct ListNode* next = NULL;
    int count=0;
    if(n<k)
        return head;
    
    while(cur!=NULL && count<k)
    {
        next = cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
        count++;
    }
    
    if(next)
        head->next = reverseKGroupUtil(next,k,n-k);
    
    return prev;
    
}
 
struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    
    int n=0;
    struct ListNode* temp=head;
    while(temp)
    {
        n++;temp=temp->next;
    }
    
    return reverseKGroupUtil(head,k,n);
}