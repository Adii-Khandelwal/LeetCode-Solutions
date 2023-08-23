class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int low=0;
        int high=nums.size()-1;
        
        int ans=min(nums[0],nums[nums.size()-1]);
        
        
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            
            if(nums[low]==nums[mid] and nums[mid]==nums[high])
            {
                ans=min(ans, nums[low]);
                low++;
                high--;
                continue;
            }
            
            if(nums[low]<=nums[mid])
            {
                ans=min(ans,nums[low]);
                low=mid+1;
            }
            else
            {
                ans=min(ans,nums[mid]);
                high=mid-1;
            }
            
        }
      return min(ans,nums[0]);  
    }
};