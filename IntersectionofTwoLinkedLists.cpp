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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL)
            return NULL;
        int a = 0;
        int b = 0;
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA!=NULL)
        {
                a++;
                tempA= tempA->next;
        }
        while(tempB!=NULL)
        {
                b++;
                tempB= tempB->next;
        } 
        if(a > b)
        {
            int diff = a-b;
            while(diff--)
                headA=headA->next;
        }
        else if( b > a)
        {
            int diff = b-a;
            while(diff--)
                headB=headB->next;
        }
        while(headA && headB && headA!=headB)
        {
            headA=headA->next;
            headB=headB->next;
        }
        
        if(headA == headB)          
            return headA;
        else
            return NULL;
    }
};