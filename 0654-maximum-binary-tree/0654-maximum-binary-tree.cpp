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
    int findInd(vector<int> &nums,int i,int j)
    {
        int ans=INT_MIN;
        int ind=0;
        for(int it=i;it<=j;it++)
        {
            if(nums[it]>ans)
            {
                ans=nums[it];
                ind=it;
            }
        }
        return ind;
    }    
    TreeNode* f(vector<int> &nums,int i,int j)
    {
        if(i>j)
            return NULL;
        
        int ind=findInd(nums,i,j);
        TreeNode* node=new TreeNode(nums[ind]);
        node->right=f(nums,ind+1,j);
        node->left=f(nums,i,ind-1);
        return node;
    }
    
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int n=nums.size();
        
        return f(nums,0,n-1);
        
        
        
    }
};