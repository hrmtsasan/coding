/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL)
            return true;
        return isMirror(root->left,root->right);
        
    }
    bool isMirror(TreeNode* leftroot,TreeNode* rightroot)
    {
        if(leftroot && rightroot)
        {
            return leftroot->val == rightroot->val && 
                isMirror(leftroot->left,rightroot->right) &&
                isMirror(leftroot->right, rightroot->left);
        }
        return leftroot == rightroot;
    }
};