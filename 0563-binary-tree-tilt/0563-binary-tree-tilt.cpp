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
    int findTilt(TreeNode* root) {
        
        
//         if(!root)
//             return 0;
        int ans=0;
        sum(root,ans);
        
        
        return ans;
    }
    
    int sum(TreeNode *root, int & ans)
    {
        if(!root)
            return 0;
        
        
        int lh=sum(root->left,ans);
        int rh=sum(root->right,ans);
        
        ans+=abs(lh-rh);
        
        
        return root->val + lh+rh;
       
        
    }
    
    
};