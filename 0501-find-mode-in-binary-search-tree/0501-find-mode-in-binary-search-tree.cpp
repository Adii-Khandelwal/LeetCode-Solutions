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
    vector<int> findMode(TreeNode* root) {
        int maxi=INT_MIN;
        map<int,int>mpp;
        queue<TreeNode*>q;
        q.push(root);
        vector<int>ans;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode*node=q.front();
                q.pop();
                maxi=max(maxi,++mpp[node->val]);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
        }
        for(auto it:mpp)
        {
            if(it.second==maxi)
                ans.push_back(it.first);
        }
        return ans;
        
    }
};