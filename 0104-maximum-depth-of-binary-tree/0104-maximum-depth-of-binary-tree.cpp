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
    int maxDepth(TreeNode* root) {
       if(root==NULL)return 0;
        vector<vector<int>>res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>ans;            
            int j=q.size();
            for(int i=0 ;i<j;i++)
            {
                auto p=q.front();
                q.pop();
                ans.push_back(p->val);
                if(p->left)q.push(p->left);
                if(p->right)q.push(p->right);
            }
            res.push_back(ans);
        }
        return res.size();
    }
};
// public:
// int maxDepth(TreeNode*root)
// {
// if(root==NULL)return 0;
// // int lh=maxDepth(root->left);
// int rh=maxDepth(root->right);
// int lh=maxDepth(root->left);
// return 1+max(lh,rh);
// }
// };