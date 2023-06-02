class Solution {
public:
    
    
//     int f(int ind,vector<int>& nums,vector<int> &dp)
//     {
//         if(ind==0)
//             return dp[ind]= nums[0];
//         if(ind <0)
//             return 0;
        
//         if(dp[ind]!=-1)return dp[ind];
        
//        int notpick=0+f(ind-1,nums,dp);
//       // int pick=INT_MIN;
      
//         int pick=nums[ind]+f(ind-2,nums,dp);
            
//         return dp[ind]= max(pick,notpick);
//     }
    
    
    int rob(vector<int>& nums) {
            int n=nums.size();
        // vector<int> dp(n+1,0);
        
//         dp[0]=nums[0];
//         for(int ind=1;ind<n;ind++)
//         {
//               int notpick=0+dp[ind-1];
//       int pick=nums[ind];
      
//             if(ind>=2)
//         pick+=dp[ind-2];
            
//      dp[ind]= max(pick,notpick);
//         }
//         
        // return dp[n-1];
        
        int prev2=0;
        int prev=nums[0];
        // int curr=nums[0];
        
        
        for(int ind=1;ind<n;ind++)
        {
              int notpick=   prev;
      int pick=nums[ind];
      
            if(ind>=2)
        pick+=prev2;
          
           int curr=max(pick,notpick);
     prev2=prev;
        prev=curr;
        }
        
        return prev;
        
        
        
    }
};