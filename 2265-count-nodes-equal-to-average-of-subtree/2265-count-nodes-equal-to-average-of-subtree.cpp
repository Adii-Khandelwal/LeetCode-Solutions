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
     int ans=0;
    int averageOfSubtree(TreeNode* root) {
        
       
      
        solve(root);
        
        return ans;
    }
    
    int sum(TreeNode * root,int & count)
    {
        
        if(!root)
            return 0;
        count++;
        int lh=sum(root->left,count);
        int rh=sum(root->right,count);
        
        return lh+rh+root->val;
    }
    
    int solve(TreeNode *root)
    {
        if(!root)
            return 0;
        
        int count=0;
        
        int avg=sum(root,count)/count;
       
        
        if(avg==root->val)
        ans++;
        
        solve(root->left);
        solve(root->right);
        
        return ans;
    }
};