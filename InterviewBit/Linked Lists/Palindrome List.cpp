/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) 
{
    ListNode *p = A;
    vector<int> v;
    while(p!=NULL)
    {
        v.push_back(p->val);
        p = p->next;
    }
    vector<int> org=v;
    reverse(v.begin(),v.end());
    if(org==v)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
