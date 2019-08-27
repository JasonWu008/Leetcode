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
    bool isSymmetric(TreeNode* root) {
        return isMirro(root,root);
    }
    bool isMirro(TreeNode*root1,TreeNode*root2)
    {
        if(root1==NULL&&root2==NULL)
        {
            return true;
        }
        if(root1==NULL||root2==NULL)
        {
            return false;
        }
        return (root1->val==root2->val)
            &&(isMirro(root1->left,root2->right))
            &&(isMirro(root2->left,root1->right));
    }
};
