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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)return 0;
        int res=0;
        dfs(root->left,0,res);
        dfs(root->right,1,res);
        return res;
    }
    void dfs(TreeNode*root,int pos,int& res)
    {
        if(root==NULL)return;
        else if(root->left==NULL && root->right==NULL && pos==0) res+=root->val;
        else
        {
            dfs(root->left,0,res);
            dfs(root->right,1,res);
        }
    }
};
