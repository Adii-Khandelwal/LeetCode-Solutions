class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<k)
                ans++;
        }
        for(int i=0;i<n;i++)
        {
            int prod=nums[i];
            for(int j=i+1;j<n;j++)
            {
                prod*=nums[j];
                if(prod<k)ans++;
                else break;
            }
        }
        return ans;
//          if (k == 0) return 0;
//         int cnt = 0;
//         int pro = 1;
//         for (int i = 0, j = 0; j < nums.size(); j++) {
//             pro *= nums[j];
//             while (i <= j && pro >= k) {
//                 pro /= nums[i++];
//             }
//             cnt += j - i + 1;
//         }
//         return cnt;
        
        
        
    }
};