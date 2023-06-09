class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
//         int n=nums.size();
//         int ans=0;
//         for(int i=0;i<n;i++)
//         {
//                 int maxi=nums[i];
//                 int mini=nums[i];
//             for(int j=i;j<n;j++)
//             {
                
//                     maxi=max(maxi,nums[j]);
//                     mini=min(mini,nums[j]);
                    
                
//                     if(maxi-mini<=limit)
//                         ans=max(ans,j-i+1);
                
                
//             }
//         }
//         return ans;
         multiset<int> cnts;
        int j(0), ans(0);
        for (int i = 0; i < nums.size(); ++i) {
            cnts.insert(nums[i]);
            while (*cnts.rbegin() - *cnts.begin() > limit)
                cnts.erase(cnts.find(nums[j++]));
            ans = max(ans, i - j + 1);
        }
        return ans;
        
    }
};