/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int solve(TreeNode* B, TreeNode* C)
{
    if(B==NULL and C==NULL)
        return 1;
    if((B==NULL and C!=NULL) or (B!=NULL and C==NULL))
        return 0;
    if(B->val!=C->val)
        return 0;
    return solve(B->left, C->right) and solve(B->right, C->left);
}
int Solution::isSymmetric(TreeNode* A) 
{
    TreeNode* B = A->left;
    TreeNode* C = A->right;
    return solve(B,C);
}
