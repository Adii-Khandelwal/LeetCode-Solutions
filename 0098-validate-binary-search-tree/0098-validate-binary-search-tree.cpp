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
    bool isValidBST(TreeNode* root) {
        
        return isV(root,LONG_MIN,LONG_MAX);
        
    }
    
    bool isV(TreeNode* root, long long int x,long long int y)
    {
        if(!root)
            return true;
        
        if(root->val <= x || root->val >= y)
            return false;
        
        return isV(root->left,x,root->val) && isV(root->right,root->val,y);
    }
};