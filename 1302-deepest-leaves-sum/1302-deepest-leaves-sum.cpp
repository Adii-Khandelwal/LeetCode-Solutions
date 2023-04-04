/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        int deepestLeavesSum(TreeNode *root)
        {

            return ans(root);
        }

    int ans(TreeNode *root)
    {

        int ans = 0;

        queue<TreeNode*> q;

        q.push(root);
        int sum = 0;
         int cnt = 1;
        while (!q.empty())
        {
            int n = q.size();
            int height = ht(root);
           
            for (int i = 0; i < n; i++)
            {

                TreeNode *node = q.front();
                q.pop();

                if (cnt == height)
                    sum += node->val;
                
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            cnt++;
        }
        return sum;
    }
    int ht(TreeNode *root)
    {
        if (!root)
            return 0;

        int lh = ht(root->left);
        int rh = ht(root->right);

        return 1 + max(rh, lh);
    }

};