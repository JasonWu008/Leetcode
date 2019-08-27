/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArray(nums,0,nums.size()-1);
    }
    TreeNode* sortedArray(vector<int>&nums,int left,int right)
    {
        if(left>right)return NULL;
        int mid=(left+right)/2;
        TreeNode*cur=new TreeNode(nums[mid]);
        cur->left=sortedArray(nums,left,mid-1);
        cur->right=sortedArray(nums,mid+1,right);
        return cur;
    }
};
