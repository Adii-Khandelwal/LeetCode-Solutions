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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        
        recursion(root,0,res);
        return res;
    }
    
    void recursion(TreeNode *root, int level, vector<int> &res)
    {
        if(!root)return;
        
        if(res.size()==level)res.push_back(root->val);
        recursion(root->right,level+1,res);
        recursion(root->left,level+1,res);
    }
    
//     vector<int> rsv(TreeNode * root)
//     {
//         queue<TreeNode*> q;
//         vector<int>ans;
//         if(!root)
//             return ans;
//         q.push(root);
// //         insert a break statement lets say a null to denote that the level has ended
//         q.push(NULL);
//         while(!q.empty()){
//             TreeNode* current_node=q.front();
//             q.pop();
            
//             if(current_node->left){
//                 q.push(current_node->left);
//             }
//             if(current_node->right){
//                 q.push(current_node->right);
//             }
//             if(q.front()==NULL)
//             {
//                 q.pop();
//                 ans.push_back(current_node->val);
//                 if(!q.empty())
//                 q.push(NULL);
//             }           
//         }
//         return ans;
//     }
        
//     vector<int> rightSideView(TreeNode* root) {
//         return rsv(root);
    // }
};