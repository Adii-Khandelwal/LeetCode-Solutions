class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
       
        int x=0;
        
        for(int i=0;i<nums.size();i++)
        {
          x=nums[i];
            x=pow(x,2);
            nums[i]=x;
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};