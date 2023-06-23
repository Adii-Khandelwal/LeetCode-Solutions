class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
          int n = nums.size();
        for(int i=0;i<n-1;i++)
        {
            // select nums[i], and search other (target-nums[i]) in (i+1 to n-1) using Binary search
            int lo = i+1, hi = n-1;
            while(lo<=hi)
            {
                int mid = lo + (hi-lo)/2;
                int x = (target-nums[i]);
                if(nums[mid]==x) 
                    return {i+1, mid+1}; // returning the indices
                else if(nums[mid] > x) 
                    hi = mid-1;
                else 
                    lo = mid+1;
            }
            
        }
        return {}; // Target not found
    }
};