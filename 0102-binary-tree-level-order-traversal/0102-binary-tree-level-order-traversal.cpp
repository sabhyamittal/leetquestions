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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return {};
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>res;
            int j=q.size();
            for(int i=0 ;i<j ;i++)
            {
                auto p=q.front();
                q.pop();
                res.push_back(p->val);
                //if(p->right)q.push(p->right);
                if(p->left)q.push(p->left);
                if(p->right)q.push(p->right);
            }
            ans.push_back(res);
        }
        return ans;
    }
};