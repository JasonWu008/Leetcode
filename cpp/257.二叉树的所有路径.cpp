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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        if(!root)return res;
        binaryPaths(root,res,to_string(root->val));
        return res;
    }
    
    void binaryPaths(TreeNode* root,vector<string>&result,string temp)
    {
        if(!root->left&&!root->right)
        {
            result.push_back(temp);
            return;
        }
        if(root->left) binaryPaths(root->left,result,temp+"->"+to_string(root->left->val));
        if(root->right) binaryPaths(root->right,result,temp+"->"+to_string(root->right->val));
        return;
    }
};
