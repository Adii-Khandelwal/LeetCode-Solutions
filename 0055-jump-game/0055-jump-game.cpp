class Solution {
public:
    bool jump(vector<int> & nums,int ind,vector<int> &dp)
    {
        if(ind==nums.size()-1)
            return dp[ind]=true;
        
        if(nums[ind]==0)
            return dp[ind]=false;
        
        if(dp[ind]!=-1)return dp[ind];
        
        int reach=ind+nums[ind];
        
        for(int j=ind+1;j<=reach;j++)
        {
            if(jump(nums,j,dp))
                return dp[ind]=true;
        }
        return dp[ind]=false;
    }
    
    
    
    
    
    bool canJump(vector<int>& nums) {
        
        vector<int>dp(nums.size(),-1);
        return jump(nums,0,dp);
        
        
        
    }
};