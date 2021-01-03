/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

//iterative method
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *curr,*prev,*next;
    curr = head;
    prev = NULL;
    while(curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;

}