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
    void path(TreeNode* root, int sum,vector<int> &paths,vector<vector<int>> & ans)
    {
        
        if(!root)
           return;
        paths.push_back(root->val);
        if(!root->left && !root->right && root->val==sum)
             ans.push_back(paths);
       
        path(root -> left, sum - root -> val, paths, ans);
        path(root -> right, sum - root -> val, paths, ans);
        paths.pop_back();
        
        
    }
    
        
        
        
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        vector<vector<int>> ans;
        
        vector<int> paths;
        
        
       path(root,targetSum,paths,ans);
        return ans;
        
        
    }
};