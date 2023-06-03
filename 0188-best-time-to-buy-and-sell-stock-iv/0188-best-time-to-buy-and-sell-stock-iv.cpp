class Solution {
public:
//     int f(int ind,int buy, int cap,vector<int> &prices,int n,vector<vector<vector<int>>> &dp)
//     {
//         if(ind ==n || cap==0)
//             return 0;
        
//         if(dp[ind][buy][cap]!=-1)return dp[ind][buy][cap]; 
        
//         int profit=0;
//         if(buy)
//         {
//             profit=max( -prices[ind]+f(ind+1,0,cap,prices,n,dp),0 + f(ind+1,1,cap,prices,n,dp) );
//         }
//         else
//         {
//             profit=max( prices[ind]+f(ind+1,1,cap-1,prices,n,dp),0 + f(ind+1,0,cap,prices,n,dp) );
//         }
//         return dp[ind][buy][cap]= profit;
//     }
    
    
    
    
    
    
    int maxProfit(int k, vector<int>& prices) {
         int n=prices.size();
        
//         vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        
//         return f(0,1,k,prices,n,dp);
        
        
        
         vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0)));
        
        for(int ind=n-1;ind>=0;ind--)
        {
            for(int buy=0;buy<2;buy++)
            {
                for(int cap=1;cap<=k;cap++)
                {
                 
                     
        if(buy)
        {
            dp[ind][buy][cap]=max( -prices[ind]+dp[ind+1][0][cap],0 + dp[ind+1][1][cap]);
        }
        else
        {
            dp[ind][buy][cap]=max( prices[ind]+dp[ind+1][1][cap-1],0 + dp[ind+1][0][cap] );
        }
       // dp[ind][buy][cap]= profit;
                }
            }
        }
        
        return dp[0][1][k];
        
        
        
        
        
    }
};