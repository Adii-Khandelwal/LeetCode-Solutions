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
    vector<vector<int>> f(TreeNode *root,vector<vector<int >> &ans,queue<TreeNode *> &st)
    {
        while(!st.empty())
        { 
            int s=st.size();
        vector<int> level;
            for(int i=0;i<s;i++)
            { 
                TreeNode *node=st.front();
                st.pop();
        
                
            
            if(node->left)
                    st.push(node->left);
        
                 if(node->right)
                    st.push(node->right);
          level.push_back(node->val);
                
            
            } 
            ans.push_back(level);
          
        }
        return ans;
        
    }
    
    
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int >> ans;
        queue<TreeNode*> st;
        st.push(root);
        if(!root)
            return ans;
        f(root,ans,st);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};