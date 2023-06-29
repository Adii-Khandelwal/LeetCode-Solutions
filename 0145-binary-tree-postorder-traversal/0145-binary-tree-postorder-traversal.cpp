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
    
    //RECURSIVE WAY
//     vector<int> postorderTraversal(TreeNode* root) {
        
//         vector<int> nodes;
//         postorder(root,nodes);
//         return nodes;
        
//     }
    
//     void postorder(TreeNode * root,vector<int>& nodes)
//     {
//         if(root==NULL)
//             return;
        
//         postorder(root->left,nodes);
//         postorder(root->right,nodes);
//         nodes.push_back(root->val);
//     }
    
    
    //ITERATIVE WAY
    vector<int> postorderTraversal(TreeNode* root)
    {
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        vector<int> postorder;
        if(!root)return postorder;
        s1.push(root);
        while(!s1.empty())
        {
            TreeNode* node=s1.top();
            s1.pop();
            s2.push(node);
            if(node->left!=NULL)
                s1.push(node->left);
            if(node->right)
                s1.push(node->right);
            
        }
        while(!s2.empty())
        {
            postorder.push_back(s2.top()->val);
            s2.pop();
        }        
        return postorder;
        
    }
    
    
    
    
    
    
    
    
    
};