class Solution {
public:
    int f(int i,int j,vector<vector<int>>& dungeon,vector<vector<int>>&dp)
    {
        int n=dungeon.size();
        int m=dungeon[0].size();
        if(i>=n || j>=m)
            return 1e9;
        
       
        if(i==n-1 && j==m-1)
        {
            return dp[i][j]= (dungeon[i][j] <= 0) ? -dungeon[i][j] + 1 : 1;
        }
        if(dp[i][j]!=1e9)return dp[i][j];
        
        int right=f(i,j+1,dungeon,dp);
        int down=f(i+1,j,dungeon,dp);
  int minHealth= min(right,down)-dungeon[i][j];
        
        return dp[i][j]=(minHealth<=0)?1:minHealth;
        
    }
    
    
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
         int n=dungeon.size();
        int m=dungeon[0].size();
     vector<vector<int>>dp(n,vector<int> (m,1e9));
     return f(0,0,dungeon,dp);
        
    }
};