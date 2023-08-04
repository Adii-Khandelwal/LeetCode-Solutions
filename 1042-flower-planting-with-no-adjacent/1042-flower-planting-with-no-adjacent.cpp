class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
       map<int,vector<int>>adj;
        vector<int>ans(n);
        for(auto it:paths)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        for(int i=1;i<=n;i++)
        {
            vector<int>color(5,0);
            for(auto it:adj[i])
            {
                color[ans[it-1]]=1;
            }
            for(int j=1;j<=4;j++)
            {
                if(color[j]==0)
                { ans[i-1]=j;
                break;}
            }
        }
        return ans;
    }
};