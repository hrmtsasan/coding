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
    struct ListNode* odd=A;
    struct ListNode* even=NULL;
    struct ListNode* temp=NULL;
    
    // if 3 or less elements in the linked list nothing to be done
    if(odd==NULL || odd->next==NULL || odd->next->next==NULL || odd->next->next->next==NULL)
    {
        return A;
    }
    while(odd!=NULL && odd->next!=NULL)
    {
        temp = odd->next;
        odd->next = temp->next;
        temp->next = even;
        even = temp;
        odd = odd->next;
    }
    odd=A;
    // Add the reversed elements of the even list to the odd list.
    while(even!=NULL)
    {
        temp = even->next;
        even->next = odd->next;
        odd->next = even;
        odd = odd->next->next;
        even = temp;
    }
    return A;
}