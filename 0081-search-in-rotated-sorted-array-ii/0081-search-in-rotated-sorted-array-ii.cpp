class Solution {
public:
   
    int f(vector<int> &nums,int target,int n)
    {
        int l=0;
        int h=n-1;
        // int ans;
        
        while(l<=h)
        {
            int mid=(h+l)/2;
            
            if(nums[mid]==target)
            {
                return true;}
            if(nums[l]==nums[mid] && nums[mid]==nums[h])
            {
                l=l+1;
                h=h-1;
                continue;
            }
            
                //if left sorted
            if(nums[l]<=nums[mid])
            {
                if(nums[l]<=target and nums[mid]>=target)
                    h=mid-1;
                else l=mid+1;
                
            }   
            else //right sorted
            {
                if(nums[mid]<=target and nums[h]>=target)
                    l=mid+1;
                else h=mid-1;
            }

    }
        return false;
    }
    
    
  
    bool search(vector<int>& nums, int target) {
        return f(nums,target,nums.size());
    }
};