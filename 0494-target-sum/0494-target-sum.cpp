class Solution {
public:
    int f(int ind,int t,vector<int> &nums)
    {
        if(ind==0)
        {
           if(t==0 && nums[0]==0)
               return 2;
            if(t==0 || t==nums[0])
                return 1;
            else return 0;
        }
        int nottake=f(ind-1,t,nums);
        int take=0;
        if(nums[ind]<=t)
            take+=f(ind-1,t-nums[ind],nums);
        
        return take+nottake;
        
        
            
    }
    
    
    
    
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int n=nums.size();
        
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
        }
        
        if(s-target<0 || (s-target)%2!=0)
            return 0;
        int t=(s-target)/2;
            
        
        return f(n-1,t,nums);
        
        
    }
};