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
    
    
   
    int f(TreeNode *root,int curr)
    {
        if(!root)
            return 0;
        curr=curr*10+root->val;
        if(!root->left && !root->right)
        {
            return curr;
        }
        return f(root -> left, curr) + f(root -> right, curr); 
       
    
    return f(root -> left, curr) + f(root -> right, curr); 
    }
    
    
    
    int sumNumbers(TreeNode* root) {
        
      
        return f(root,0);
            // return curr;    
        
        
    }
};