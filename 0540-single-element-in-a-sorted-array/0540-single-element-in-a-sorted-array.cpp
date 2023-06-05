class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        
        if(n==1)
            return nums[0];
        
        int low=0;
        int high=n-1;
        if(nums[0]!=nums[1])return nums[0];
        if(nums[n-1]!=nums[n-2])return nums[n-1];
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            if(nums[mid]!=nums[mid-1] and nums[mid]!=nums[mid+1])
                return nums[mid];
            
            // if element is after mid, the pairs will have index as (even,odd) and if element is before mid, pairs with mid will have index as (odd,even)
            
            if((mid%2==1 and nums[mid-1]==nums[mid]) or( mid%2==0 and nums[mid]==nums[mid+1]))
                low=mid+1; 
            else
                high=mid-1;
        }
        return -1;
    }
};