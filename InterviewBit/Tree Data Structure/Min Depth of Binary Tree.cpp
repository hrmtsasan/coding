/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* A) 
{
    if(A==NULL)
        return 0;
    if(A->left and A->right)
        return 1 + min(minDepth(A->left), minDepth(A->right));
    else if(A->left)
        return 1+minDepth(A->left);
    else
        return 1+minDepth(A->right);
}
