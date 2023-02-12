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
    
    TreeNode * ans;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        if(original==NULL)
            return NULL;
        
        
        if(original->val==target->val)
            ans= cloned;
        //SEE HOW TO RETURN A RECURSIVE FUNCTION HERE
        
        if(original->left)
      getTargetCopy(original->left,cloned->left,target);
     if(original->right)
         getTargetCopy(original->right,cloned->right,target);
        
       return ans; 
      
        
        
    }
};