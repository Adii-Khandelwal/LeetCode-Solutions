class Solution {
public:
    vector<int> nums,ret;
    
    Solution(vector<int>& nums) {
        this->nums=nums;
        this->ret=nums;
    }
    
    vector<int> reset() {
        return ret;
    }
    
    vector<int> shuffle() {
        next_permutation(nums.begin(),nums.end());
        return nums;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */