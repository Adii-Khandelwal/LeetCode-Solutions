class Solution {
public:
      int f(vector<int>& nums) {
            int n=nums.size();
       
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
    
    
    
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        
        vector<int> temp1,temp2;
        
        
        if(n==1)
            return nums[0];
        for(int i=0;i<n;i++)
        {
            if(i!=0)temp1.push_back(nums[i]);
            if(i!=n-1)temp2.push_back(nums[i]);
        }
        
        return max(f(temp1),f(temp2));
    }
};