class Solution {
public:
    int f(int start,int end,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(start>end)
            return 0;
        if(dp[start][end]!=-1)return dp[start][end];
    int maxi=INT_MIN;
        for(int i=start;i<=end;i++)
        {
            int coins=nums[start-1]*nums[i]*nums[end+1]+
                f(start,i-1,nums,dp)+f(i+1,end,nums,dp);
            maxi=max(maxi,coins);
        }
        return dp[start][end]= maxi;
    }
    
    
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        nums.push_back(1);
        nums.insert(nums.begin(),1);
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return  f(1,n,nums,dp);
    }
};