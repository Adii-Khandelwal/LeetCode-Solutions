class Solution {
public:
    int f(int ind,int amount,vector<int> &coins,vector<vector<int>> &dp)
    {
       if(ind==0)
       {
           if(amount%coins[0]==0)
               return amount/coins[0];
           return 1e9;
       }
        
        if(dp[ind][amount]!=-1)return dp[ind][amount];
        
        int nottake=f(ind-1,amount,coins,dp);
        int take=1e9;
        if(coins[ind]<=amount)
            take=1+f(ind,amount-coins[ind],coins,dp);
        
        return dp[ind][amount]= min(take,nottake);
    }
    
    
    
    
    
    int coinChange(vector<int>& coins, int amount) {
        
        int n=coins.size();
        vector<vector<int>>dp(n,(vector<int> (amount+1,-1)));
        int ans= f(n-1,amount,coins,dp);
        if(ans>=1e9)
            return -1;
        return ans;
        
//         int n=coins.size();
//         vector<vector<int>>dp(n,(vector<int> (amount+1,0)));
    
//         for(int i=0;i<n;i++)
//         {
//             dp[i][0]=0;
//         }
        
        
//         for(int ind=0;ind<n;ind++)
//             for(int x=amount;x>=0;x--)
//             {  int nottake=dp[ind+1][x];
//         int take=1e9;
//         if(coins[ind]<=amount)
//             take=1+dp[ind][x-coins[ind]];
        
//         dp[ind][amount]= min(take,nottake);
//             }
//         return dp[n-1][0];
    
    
    }
};