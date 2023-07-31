class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        
        //BRUTE FORCE
        
//         int i;
//         int ans=0;
        
        
//     sort(nums.begin(),nums.end());
//         for(i=0;i<nums.size();i++)
    
//         {
//             if(nums[i]==nums[i+1])
//             {ans= nums[i];
//              break;
//             }
//         }
//         return ans;
      
//         map<int,int> mpp;
//         int x;
//         for(int i=0;i<nums.size();i++)
//         {
//             mpp[nums[i]]++;
//             if(mpp[nums[i]]==2)
            
//             {
//                 x=nums[i];
//                 return x;
//             }
                
//         }
        
       
        
//     return -1;    
         int len = nums.size();
        int low = 1;
        int high = len - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            int cnt = 0;
            for (int i = 0; i < len; i++) {
                if (nums[i] <= mid) {
                    cnt++;
                }
            }

            if (cnt <= mid) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }

        return low;
        /*// Lets say there is an separate array containing numbers 
        [1, 2, 3, 4, .... N]
// we will apply binary search on "this" array! & shrink in the direction of repeated number
// Let's say n=10 and I select mid=5. Then I count all the numbers in the array which are less than equal mid.
// If there are more than 5 numbers that are less than 5, one of them has occurred more than once. So I shrink the search space from [1 10] to [1 5].
// Otherwise the duplicate number is in the second half so for the next step the search space would be [6 10].*/
        
    }
};