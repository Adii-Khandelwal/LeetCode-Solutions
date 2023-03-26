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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        
        if(root==NULL )
            return false;
      
        
   // TreeNode
        
        if(trav(root,subRoot))
        return trav(root,subRoot);
        
            return  isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
        
    }
    
    bool trav(TreeNode *node,TreeNode *subRoot)
    {
        if(node==NULL || subRoot==NULL)
            return node==subRoot;
        
        return (node->val==subRoot->val) && trav(node->left,subRoot->left)&& trav(node->right,subRoot->right);
        
    }
};