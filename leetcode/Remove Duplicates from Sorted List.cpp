/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    if(head == NULL)
    {
        return NULL;
    }
    struct ListNode* p;
    struct ListNode* q;
    p= head;
    q= head->next;
    while(q!=NULL)
    {
        if(p->val == q->val)
        {
            p->next = q->next;
            q->next = NULL;
            q = p->next;
        }
        else
        {
            p = p->next;
            q = q->next;
        }
    }
    return head;

}