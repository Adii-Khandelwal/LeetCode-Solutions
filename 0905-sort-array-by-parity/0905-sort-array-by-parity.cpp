class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
    // vector<int >ans;
    //     int n=nums.size();
    //     for(int i=0;i<n;i++)
    //     {
    //         if(!(nums[i]%2))
    //         {
    //             ans.push_back(nums[i]);
    //         }
    //     }
    //     for(int i=0;i<n;i++)
    //     {
    //         if((nums[i]%2))
    //         {
    //             ans.push_back(nums[i]);
    //         }
    //     }
    //     return ans;
         for (int i = 0, j = 0; j < nums.size(); j++)
            if (nums[j] % 2 == 0) swap(nums[i++], nums[j]);
        return nums;
    }
};