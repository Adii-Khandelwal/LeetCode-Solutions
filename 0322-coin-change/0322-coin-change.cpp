class Solution {
public:
    int f(int ind,int n, int amount,vector<int> &coins,vector<vector<int>> &dp)
    {
        if(amount==0)
            return 0;
        if(ind>n)
            return 1e9;
        
        if(dp[ind][amount]!=-1)return dp[ind][amount];
        
        int nottake=f(ind+1,n,amount,coins,dp);
        int take=1e9;
        if(coins[ind]<=amount)
            take=1+f(ind,n,amount-coins[ind],coins,dp);
        
        return dp[ind][amount]= min(take,nottake);
    }
    
    
    
    
    
    int coinChange(vector<int>& coins, int amount) {
        
        int n=coins.size();
        vector<vector<int>>dp(n,(vector<int> (amount+1,-1)));
        int ans= f(0,n-1,amount,coins,dp);
        if(ans>=1e9)
            return -1;
        return ans;
    }
};