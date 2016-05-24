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
    bool hasCycle(ListNode *head) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        ListNode* first=head;
        ListNode* second=head;
        while(first!=NULL && second!=NULL && second->next!=NULL)
        {
            first=first->next;
            second = second->next->next;
            if(first == second)
                return true;
        }
        return false;
    }
};