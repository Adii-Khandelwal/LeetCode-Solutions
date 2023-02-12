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
    int minDepth(TreeNode* root) {
        
        
        //NOT EXACTLY LIKE MAX DEPTH QUESTION
     
        if(root==NULL)
            return 0;
        
        int lh=minDepth(root->left);
        int rh=minDepth(root->right);
        
        return min(lh,rh)? 1+min(lh,rh):1+max(lh,rh);
        
        
        
        
        
        
    }
};