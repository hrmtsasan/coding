/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A)
{
    vector<int> ans;
    if(A==NULL)
    {
        ans.push_back(0);
        return ans;
    }
    queue<TreeNode*> q;
    q.push(A);
    while(!q.empty())
    {
        TreeNode* temp = q.front();
        ans.push_back(temp->val);
        q.pop();
        if(temp->right!=NULL)
            q.push(temp->right);
        if(temp->left!=NULL)
            q.push(temp->left);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
