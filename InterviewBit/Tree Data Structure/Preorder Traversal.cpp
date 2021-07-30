/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> ans;
void solve(TreeNode* A)
{
    if(A)
    {
        ans.push_back(A->val);
        solve(A->left);
        solve(A->right);
    }
}
vector<int> Solution::preorderTraversal(TreeNode* A) 
{
    ans.clear();
    solve(A);
    return ans;
}
