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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        stack<vector<int>>res1;
        vector<vector<int>>res;
        if(root==NULL)return res;
        
        queue<TreeNode*>temp;
        temp.push(root);
        while(!temp.empty())
        {
            vector<int>ans;
            int p=temp.size();
            for(int i=0;i<p;i++)
            {
               ans.push_back(temp.front()->val);
               if(temp.front()->left!=NULL)
               {
                    temp.push(temp.front()->left);
               }
               if(temp.front()->right!=NULL)
               {
                    temp.push(temp.front()->right);
               }
               temp.pop();
            }
            res1.push(ans);
        }
        while(!res1.empty())
        {
            res.push_back(res1.top());
            res1.pop();
        }
        return res;
    }
};
