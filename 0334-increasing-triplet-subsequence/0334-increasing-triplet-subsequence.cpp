class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3)
            return false;
       // int n=nums.size();
       //  for(int i=0;i<n;i++)
       //  {
       //      for(int j=i+1;j<n;j++)
       //      {
       //          for(int k=j+1;k<n;k++)
       //          {
       //              if(nums[i]< nums[j] and nums[j]< nums[k])
       //                  return true;
       //          }
       //      }
       //  }
       //  return false;
        
        int f1=INT_MAX,f2=INT_MAX;
        
        for(auto s:nums)
        {
            if(s<=f1)
                f1=s;
            else if(s<=f2)
                f2=s;
            else
                return true;
            
                
        }
            return false;
    }
};