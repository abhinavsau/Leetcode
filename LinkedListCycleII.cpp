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
    ListNode *detectCycle(ListNode *head) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        ListNode* first=head;
        ListNode* second=head;
        while(first!=NULL && second!=NULL && second->next!=NULL)
        {
            first=first->next;
            second = second->next->next;
            if(first == second)
                break;
        }
        if(first!=NULL && second!=NULL && second->next!=NULL && first == second)
        {
            first = head;
            while(first != second)
            {
                first=first->next;
                second=second->next;
            }
            return first;
        }
        else
            return NULL;
        
    }
};