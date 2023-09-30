class Solution {
public:
    bool find132pattern(vector<int>& nums) {
//         int n=nums.size();
//          for (int j = 0, mini = INT_MAX; j < n; j++) {
//          mini = min(nums[j], mini);
//          if (mini == nums[j]) continue;
         
//          for (int k = n - 1; k > j; k--) {
//              if (mini < nums[k] && nums[k] < nums[j]) return true;
//          }
//      }
     
//      return false;
         int n = nums.size(), top = n, third = INT_MIN;

    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] < third) return true;
        while (top < n && nums[i] > nums[top]) third = nums[top++];
        nums[--top] = nums[i];
    }
    
    return false;
        
        
    }
};