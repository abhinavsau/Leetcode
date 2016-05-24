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
void push_back_c(ListNode** headref,int val)
{
    ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
    ListNode* temp;
    newnode->val = val;
    if(*headref == NULL)
    {
        newnode->next = *headref;
        *headref = newnode;
    }
    else
    {
        temp = *headref;
        newnode->next = NULL;
        while(temp->next != NULL)
            temp = temp->next;;
        newnode->next = temp->next;
        temp->next = newnode;
    }
}
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        // Note: The Solution object is instantiated only once and is reused by each test case.
 if(l1==NULL)
        return l2;
    if(l2==NULL)
        return l1;
    ListNode* ans=NULL;
    int d,c=0;
    while(l1 && l2)
    {
        d=l1->val + l2->val + c;
        if(d>=10) {c=1;d=d-10;}
        else
            c = 0;
        push_back_c(&ans,d);
        l1=l1->next;
        l2=l2->next;
    }
    if(l1 == NULL && l2 != NULL)
    {
        while(l2)
        {
            int d2 = l2->val + c;
            if(d2>=10) {c=1;d2=d2-10;}
            else c = 0;
            push_back_c(&ans,d2);
            l2=l2->next;
            //c=0;
        }
    }
    else if(l2 == NULL && l1!=NULL)
    {
        while(l1)
        {
            int d1 = l1->val + c;
            if(d1>=10) {c=1;d1=d1-10;}
            else c = 0;
            push_back_c(&ans,d1);
            l1=l1->next;
            //c=0;
        }
    }
    if(l1 == NULL && l2 == NULL && c == 1)
        push_back_c(&ans,1);

    return ans;
        
    }
};