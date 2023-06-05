class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int l=0;
        int h=nums.size()-1;
        int ans=INT_MAX;
        
        while(l<=h)
        {
            int mid=(l+h)/2;
            
            if(nums[mid]>=nums[l])
            {
                ans=min(ans,nums[l]);
                l=mid+1;
            }
            else
            {
                ans=min(ans,nums[mid]);
                h=h-1;
            }
        }
        return ans;
    }
};