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
    int kthSmallest(TreeNode* root, int k) {
        
        vector<TreeNode*> vec;
        
        trav(root,vec);
        
       int x=vec[k-1]->val;
        return x;
        
    }
    
    void trav(TreeNode* root,vector<TreeNode*> &vec)
    {
        if(!root)
            return ;
        
        trav(root->left,vec);
        
        vec.push_back(root);
        
        trav(root->right,vec);
            
    }
};