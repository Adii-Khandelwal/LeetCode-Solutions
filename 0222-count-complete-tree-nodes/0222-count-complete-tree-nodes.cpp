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
    int countNodes(TreeNode* root) {
        
        if(!root)
            return 0;
        
        int cnt=0;
        if(root->left)
        {
            cnt+=countNodes(root->left);
        }
        if(root->right)
            cnt+=countNodes(root->right);
        
        return 1+cnt;
        
        
//         TreeNode *left=root,*right=root;
        
//         int l=0,r=0;
//         while(left)
//         {
//             l++;
//             left=left->left;
//         }
//         while(right)
//         {
//             r++;
//             right=right->right;
//         }
//         if(l==r)return pow(2,l)-1;
//         return 1+countNodes(root->left)+countNodes(root->right);
    }
};