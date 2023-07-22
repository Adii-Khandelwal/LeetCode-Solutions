class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1 , high=*max_element(begin(nums),end(nums));
        while(low <= high) {
            int mid = low + (high-low)/2;

            if(isPossible(nums,mid,threshold)) high = mid-1;
            else low = mid+1;
        }
        return low;
    }

    bool isPossible(vector<int> &nums, int mid, int threshold) {
        int cnt = 0;
        for(int i=0 ; i<nums.size() ; i++) {
            cnt += (nums[i]+mid-1)/mid;
            if(cnt > threshold) return false;
        }
        return true;
    }
};