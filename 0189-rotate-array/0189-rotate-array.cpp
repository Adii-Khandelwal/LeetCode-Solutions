class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
//         if(n==0 || k<=0)
//             return;
        
//         vector<int> ans;
        
//         for(int i=0;i<n;i++)
//         {
//             ans.push_back(nums[i]);
//         }
        
//         for(int i=0;i<n;i++)
//         {
//             nums[(i+k)%n]=ans[i];
//         }
        
        k%=n;
        
        reverse(nums.begin(),nums.begin() + n - k);
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        
       
    }
};