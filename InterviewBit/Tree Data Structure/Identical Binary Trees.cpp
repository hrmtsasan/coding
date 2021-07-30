/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int solve(TreeNode* A, TreeNode* B)
{
    if(A==NULL and B==NULL)
        return 1;
    if((A!=NULL and B==NULL) or (A==NULL and B!=NULL))  
        return 0;
    if(A->val!=B->val)
        return 0;
    return solve(A->left, B->left) and solve(A->right, B->right);
    
}
int Solution::isSameTree(TreeNode* A, TreeNode* B) 
{
   return solve(A,B);
}
