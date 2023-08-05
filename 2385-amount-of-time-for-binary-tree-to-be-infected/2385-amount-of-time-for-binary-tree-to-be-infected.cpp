class Solution {
     TreeNode * f(TreeNode * root ,int t,map<TreeNode * ,TreeNode * > &mpp){
        queue<TreeNode *>q;
        q.push(root);
        TreeNode * res;
        while(!q.empty()){
            TreeNode * node = q.front();
            q.pop();
            if(node->val == t){
                res = node;
            }
            if(node->left){
                mpp[node->left]=node;
                q.push(node->left);
            }
            if(node->right){
                mpp[node->right]=node;
                q.push(node->right);
            }
        }
        return res;
    }
public:
    int amountOfTime(TreeNode* root, int start) {
         map<TreeNode * ,TreeNode * > mpp;
        TreeNode * target = f(root,start,mpp);
        map<TreeNode*,int>vis;
        vis[target]=1;
        
        queue<TreeNode *>q;
        q.push(target);
        
        int lvl=0;
        
        while(!q.empty()){
            int size=q.size();
            int fl=0;
            
            for(int i=0; i<size;i++){
                TreeNode * node = q.front(); 
                q.pop();
                if(mpp[node] and !vis[mpp[node]]){
                    fl=1;
                    q.push(mpp[node]);
                    vis[mpp[node]] = 1;
                }
                if(node->left and !vis[node->left]){
                    fl=1;
                    q.push(node->left);
                    vis[node->left]=1;
                }
                if(node->right and !vis[node->right]){
                    fl=1;
                    q.push(node->right);
                    vis[node->right]=1;
                }
            }
            if(fl){
                    lvl++;
            }
            }
        return lvl;
    }
};