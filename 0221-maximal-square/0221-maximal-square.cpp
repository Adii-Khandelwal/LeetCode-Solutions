class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        if(n==0)
            return 0;
        
        int maxi=INT_MIN;
        vector<vector<int>> dp(n,vector<int> (m,0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!i || !j ||matrix[i][j]=='0')
                    dp[i][j]=matrix[i][j]- '0';
                else
                {
                    dp[i][j]=min({dp[i-1][j],dp[i-1][j-1],dp[i][j-1]})+1;
                }
            maxi=max(maxi,dp[i][j]);
            }
        }
    
        return maxi*maxi;
        
    }
};