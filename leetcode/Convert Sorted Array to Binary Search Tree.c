/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* constructTree(int* nums,int start, int end)
{
    if(start>end)
    {
            return NULL;
    }
    int mid = (start+end)/2;
    struct TreeNode *root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->val = nums[mid];
    root->left = constructTree(nums,start,mid-1);
    root->right = constructTree(nums,mid+1,end);
    return root;
        
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize){
     if(numsSize==0)
            return NULL;
        return constructTree(nums,0,numsSize-1);
        
}
    
    

