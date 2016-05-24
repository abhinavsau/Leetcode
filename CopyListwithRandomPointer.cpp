/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
    
    if(head == NULL)
        return head;
    RandomListNode* temp;
    temp = head;
    while(temp)
    {
        RandomListNode* tempnode = (RandomListNode*) malloc(sizeof(RandomListNode));
        tempnode->label = temp->label;
        tempnode->next = temp->next;
        tempnode->random = NULL;
        temp->next = tempnode;
        temp = tempnode->next;
    }

    temp = head;
    while(temp)
    {
        if(temp->random && temp->next)
            temp->next->random = temp->random->next;
            
        temp = temp->next->next;
    }

    temp = head;
    RandomListNode* copyhead = temp->next;
    RandomListNode* copyh = copyhead;

    while(temp)
    {
        temp->next = temp->next->next;
        if(copyhead->next)
            copyhead->next=copyhead->next->next;
        if(temp)
            temp = temp->next;
        if(copyhead)
            copyhead = copyhead->next;
    }
    
    return copyh;
    }
};