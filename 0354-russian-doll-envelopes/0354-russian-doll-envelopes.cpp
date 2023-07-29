class Solution {
public:
     static bool comp(vector<int> &a, vector<int> &b){
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    int binarySearch(vector<int>& dp, int val) {
        int lo = 0, hi = dp.size() - 1, res = 0;
        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            if (dp[mid] < val) {
                res = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        return res + 1;
    }

    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(),comp );

        vector<int> LIS(envelopes.size() + 1, INT_MAX);
        LIS[0] = INT_MIN;
        int ans = 0;

        for (int i = 0; i < envelopes.size(); i++) {
            int val = envelopes[i][1];
            int insertIndex = binarySearch(LIS, val);
            ans = max(ans, insertIndex);
            if (LIS[insertIndex] >= val) {
                LIS[insertIndex] = val;
            }
        }

        return ans;
    }
};