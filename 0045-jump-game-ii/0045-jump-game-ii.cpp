class Solution {
public:
    int f(int ind,vector<int> &nums,vector<int> &dp)
    {
        if(ind>=nums.size()-1)
            return 0;
        
        if(dp[ind]!=-1)return dp[ind];
       int mini=1e9;
        for(int i=1;i<=nums[ind];i++)
        {
            mini=min(mini,1+f(ind+i,nums,dp));
        }
        return dp[ind]= mini;
        
        
        
            
    }
    // https://leetcode.com/problems/jump-game-ii/discuss/1192401/Easy-Solutions-w-Explanation-or-Optimizations-from-Brute-Force-to-DP-to-Greedy-BFS
    
    int jump(vector<int>& nums) {
       
//         int n=nums.size();
//         vector<int>dp (n,-1);
//         return f(0,nums,dp);
        
        int i=0,maxreach=0,lastpos=0;
        int jump=0;
        int n=nums.size();
        while(lastpos<n-1)
        {
            maxreach=max(maxreach,i+nums[i]);
            if(i==lastpos)
            {
                lastpos=maxreach;
                jump++;
            }
            i++;
        }
        return  jump;
        
        
    }
};