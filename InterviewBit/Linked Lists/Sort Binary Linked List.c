/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
listnode* solve(listnode* A) 
{
    int c0=0,c1=0;
    struct ListNode* p = A;
    while(p!=NULL)
    {
        if(p->val==1)
        {
            c1++;
        }
        else
        {
            c0++;
        }
        p = p->next;
    }
    struct ListNode* temp=A;
    int i;
    for(i=0;i<c0;i++)
    {
        temp->val = 0;
        temp=temp->next;
    }
    for(i=0;i<c1;i++)
    {
        temp->val=1;
        temp=temp->next;
    }
    return A;
}
