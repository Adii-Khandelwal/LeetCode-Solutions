class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int h=nums.size()-1;
        int l=0;
        int mid=0;
       int ans=nums.size();
        while(l<=h)
        {
            mid=(h+l)/2;
            
            if(nums[mid]>=target)
            {ans=mid;
             
                h=mid-1;
        }
            else{
                l=mid+1;
            }}
        return ans;
        
    }
};