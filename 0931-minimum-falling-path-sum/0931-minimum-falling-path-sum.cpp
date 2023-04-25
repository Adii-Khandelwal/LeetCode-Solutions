class Solution {
public:
    int f(int i,int j,int n,vector<vector<int>>& matrix,vector<vector<int>>& dp)
    {
        if(j<0 || j>=n)
            return 1e9;
        
        if(i==0)
            return matrix[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int s=matrix[i][j]+f(i-1,j,n,matrix,dp);
        int ld=matrix[i][j]+f(i-1,j-1,n,matrix,dp);
        int rd=matrix[i][j]+f(i-1,j+1,n,matrix,dp);
        
        return dp[i][j]=   min(s,min(ld,rd));
        
    }
    
    
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        vector<vector<int>> dp(m,vector<int>(n,-1));
        // return f(m-1,n-1,n,matrix);
        
        int mini=1e9;
        
        for(int j=0;j<n;j++)
        {
            mini=min(mini,f(m-1,j,n,matrix,dp));
        }
        
        return mini;
    }
};