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
        
        // vector<int>dp(nums.size(),-1);
        // return jump(nums,0,dp);
        int n=nums.size();
        
        
        vector<int> dp(nums.size(),-1);
        
        dp[n-1]=1;
        
        for(int ind=n-2;ind>=0;ind--)
        {
            if(nums[ind]==0)
            { dp[ind]=0;
            continue;
            }
        
        
        
       
            int reach=ind+nums[ind];
            int f=0;
            for(int j=ind+1;j<=reach;j++)
        {
            if(dp[j])
            {dp[ind]=true;
            f=1;
             break;
            }
        }
            if(f==1)
                continue;
            
        dp[ind]=false;
        
        
        }

        return dp[0];
        
    }
};