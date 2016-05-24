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
    ListNode *rotateRight(ListNode *head, int k) {
    ListNode* temp=head;
    ListNode* temp1=NULL;
    ListNode* prev=NULL;
    ListNode* prev1=NULL;
    int count=0,diff;

    if(head == NULL || k == 0)
        return head;

    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }

    if(count == k || count == 1)
        return head;

    if(count < k && (k % count == 0))
        return head;
    else
        k= k % count;

    temp=head;
    diff=count - k;
    while(diff--)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    temp1=head;
    head=temp;

    while(temp!=NULL)
        {prev1=temp;temp=temp->next;}
    prev1->next=temp1;

    return head;

    }
};
