class Solution {
public:
    int f(int m,int n,vector<vector<int>> &dp)
    {
        if(m==0 && n==0)
            return dp[m][n]=1;
        else if(m<0 or n<0)
        {
        return 0;
        }
        
        if(dp[m][n]!=-1)return dp[m][n];
        int up=f(m-1,n,dp);
        int left=f(m,n-1,dp);
        
        return dp[m][n]= up+left;
        
            
    }
    
    
    
    
    
    int uniquePaths(int m, int n) {
        
        
        // vector<vector<int>> dp(m,vector<int>(n,-1));
        // return f(m-1,n-1,dp);
        
        vector<vector<int>> dp(m,vector<int> (n,0));
        
        
        
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                if(i ==0 && j==0)
                    dp[i][j]=1;
                else
                {
                    int up=0;
                    int left=0;
               if(i>0)up=dp[i-1][j];
        if(j>0)left=dp[i][j-1];
        
         dp[i][j]= up+left;
                }
            }
        
        return dp[m-1][n-1];
        
        
    }
};