class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
//         int n=nums.size();
    
//         if(n==1)
//             return 0;
        
//         // if()
        
        
//         if(nums[0]>nums[1])return 0;
//         if(nums[n-1]>nums[n-2])return n-1;
        
        
        
        
        
//         for(int i=1;i<=n-2;i++)
//         {
//             if(nums[i]>nums[i+1] && nums[i]>nums[i-1])
//                 return i;
//         }
//         return -1;
        ////////////////////////////////////////////////////
        //  for (int i = 0; i < nums.size( ) - 1; i++) {
        //     if (nums[i] > nums[i + 1])
        //         return i;
        // }
        // return nums.size( ) - 1;
        ////////////////////////////////////////////////////
        int n=nums.size();
        if(n == 0) return -1;
        if(n == 1) return 0;
       
        int lo = 0;
        int hi = n-1;

        while(lo <= hi){
            int mid = lo + (hi - lo)/2;
            bool left = false;
            bool right = false;
            
            if(mid == 0 || nums[mid] > nums[mid-1]){
                left = true;
            }
            
            if(mid == n - 1 || nums[mid] > nums[mid+1]){
                right = true;
            }
            
            if(left == true && right == true) return mid;
            if(left == true) lo = mid + 1;
            else hi = mid - 1;
        }
        return -1;
        
        
        
        
    }
};