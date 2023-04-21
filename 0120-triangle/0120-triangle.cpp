class Solution {
public:
//     int f(int i,int j,int n,vector<vector<int>>& triangle,vector<vector<int>> &dp)
//     {

//         if(i==n-1)
//             return triangle[n-1][j];
        
//         if(dp[i][j]!=-1)
//             return dp[i][j];
        
//         int d=triangle[i][j]+f(i+1,j,n,triangle,dp);
//         int dr=triangle[i][j]+f(i+1,j+1,n,triangle,dp);
        
//         return dp[i][j]= min(d,dr);
//     }
    
    
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        // int sum=0;
        int n=triangle.size();
        vector<vector<int>> dp(n,vector<int> (n,0));
        // return f(0,0,n,triangle,dp);

        for(int i=0;i<n;i++)
        {
            dp[n-1][i]=triangle[n-1][i];
        }
        
        for(int i=n-2;i>=0;i--)
        {for(int j=i;j>=0;j--)
        {
            int d=triangle[i][j]+dp[i+1][j];
            int dr=triangle[i][j]+dp[i+1][j+1];
        
            dp[i][j]=min(d,dr);
        }
        }        
    return dp[0][0];
    }
};