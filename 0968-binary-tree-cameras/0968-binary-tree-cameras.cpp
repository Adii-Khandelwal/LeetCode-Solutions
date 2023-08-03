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
    int count = 0;
    unordered_set<TreeNode*> covered;
    void dfs(TreeNode* root, TreeNode* parent) {
        if(!root)
            return;
        
        dfs(root->left, root); //look to left subtree
        dfs(root->right, root); //look to right subtree
        
        /*
                    root
                    /  \
                   /    \
                  /      \
                Left    Right    : Simply do a dry run in this to understand
        */
        
        if((parent == NULL && covered.find(root) == covered.end()) 
           ||
           (covered.find(root->left) == covered.end()) 
           ||             
           (covered.find(root->right) == covered.end())) {
            count++;
            
            covered.insert(parent); //parent
            covered.insert(root); //itself
            covered.insert(root->left); //left child
            covered.insert(root->right); //right child
            
        }
    }
    int minCameraCover(TreeNode* root) {
        //We put cameras on a node if
        /*
            -It doesn't have a camera
            -It's parent doesn't have a camera
            -It's left and right child doesn't have a camera
            i.e. it's not covered by any camera
            
            Note: I will never assign camera to a leaf node.
			It will be better if I assign camera to that leaf's
			parent node,because parent will cover both its
			child as well it's own parent as well.
        */
        
       
        covered.insert(NULL); //Read the 'Note:' above in the comment
                              //Because for leaf node, (covered.find(root->left) == covered.end()) is true
                              //But I don't want to assign camera here at leaf
        count = 0;
        TreeNode* parent = NULL; //root doesn't have a parent
        dfs(root, parent);
        
        return count;
    }
};