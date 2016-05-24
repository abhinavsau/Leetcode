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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode* ptr1 = head;
    ListNode* ptr2 = head;
    ListNode* prev = NULL;
    ListNode* prev1 = NULL;
    
    if(ptr1->next == NULL && ptr2->next == NULL && n==1) // check for 1 element in list and n=1
        return NULL;

    while(n--) // if n > number of nodes in list
    {
        if(ptr1 == NULL)
            return head;
        prev1=ptr1;
        ptr1=ptr1->next;
    }

//printf("%d %d\n",prev1->data,ptr2->data);
    if(ptr1==NULL && ptr2==head) //check for 2 elements in list and removing head
    {
        head=ptr2->next;
            return head;
        //return head;
    }
    
    //printf("%d\n",ptr1->data);
    while(ptr1!=NULL)
    {
        prev=ptr2;
        //printf("%d ",prev->data);
        ptr2=ptr2->next;
        //printf("%d ",ptr2->data);
        ptr1=ptr1->next;
        //printf("%d\n",ptr1->data);
    }
    if(ptr1==NULL)
    {
        prev->next=ptr2->next;
        return head;
    }
    }
};