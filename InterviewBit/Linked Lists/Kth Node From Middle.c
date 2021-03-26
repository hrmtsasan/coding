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
 * @input B : Integer
 * 
 * @Output Integer
 */
int solve(listnode* A, int B)
{
    int len=0;
    struct ListNode* temp=A;
    while(temp!=NULL)
    {
        len++;
        temp = temp->next;
    }
    int mid = (len/2)+1;
    int pos = mid-B;
    if(pos<=0)
    {
        return -1;
    }
    
    int i;
    temp=A;
    for(i=0;i<pos-1;i++)
    {
        temp = temp->next;
    }
    return temp->val;
}
