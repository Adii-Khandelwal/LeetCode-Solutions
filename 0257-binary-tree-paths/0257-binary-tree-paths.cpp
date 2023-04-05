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
    void binary(vector<string> &res,TreeNode *root , string s)
    {
        if(!root->left && !root->right)
            res.push_back(s);
        
        
        if(root->left)
            binary(res,root->left,s+ "->" + to_string(root->left->val));
        if(root->right)
        binary(res,root->right,s+ "->" + to_string(root->right->val));
        
    }
    
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
       
        
        vector<string> res;
        
        string s;
        // s.inser
        if(!root)
            return res;
        
        binary(res, root,to_string(root->val));
       
        return res;
        
        
    }
    
    
};