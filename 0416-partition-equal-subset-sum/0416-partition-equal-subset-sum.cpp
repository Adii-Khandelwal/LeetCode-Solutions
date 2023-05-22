class Solution {
public:
    bool f(int ind,int target,vector<int>& nums,vector<vector<int>> &dp)
    {
        if(target==0)return true;
        if(ind==0) return dp[ind][target]= (nums[0]==target);
        
        if(dp[ind][target]!=-1)return dp[ind][target];
        bool nottake=f(ind-1,target,nums,dp);
        
        bool take=false;
        if(target>=nums[ind])
            take = f(ind-1,target-nums[ind],nums,dp);
        
        return dp[ind][target]= take || nottake;
    }
    
    
    
    bool canPartition(vector<int>& nums) {
        int ind=nums.size()-1;
        int target=accumulate(nums.begin(),nums.end(),0);
// vector<vector<int>> dp(n,vector<int>(target/2,-1));
        if(target%2!=0)
            return false;
        vector<vector<int>> dp(nums.size(),vector<int>(target/2+1,-1));
        return f(ind,target/2,nums,dp);
    }
};