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
    
    int count=0;
    int ans;
    int kthSmallest(TreeNode* root, int k) {
        
        // vector<TreeNode*> vec;
        // int count=0;
        
       
        
       
         trav(root,k);
       return ans;
        
        
         
        
    }
    
 void trav(TreeNode* root,int &k)
    {
        if(!root)
            return  ;
        
       
        trav(root->left,k);
        
       
       if(++count==k)
            ans= root->val;
       
        trav(root->right,k);
            
       return ;
    }
};