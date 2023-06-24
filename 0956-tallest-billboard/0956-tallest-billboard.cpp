class Solution {
public:
    int f(int idx, int diff, vector<int>& rods, vector<vector<int>> &dp){
       
        if(idx == rods.size()){
            if(diff == 0){
                return 0;
            }
            return -1e9;
        }

       
        if(dp[idx][diff + 5000] != -1) {
            return dp[idx][diff + 5000];
        }
        int stand1 = rods[idx] + f(idx + 1, diff + rods[idx], rods, dp);
        int stand2 = f(idx + 1, diff - rods[idx], rods, dp);
        int reject = f(idx + 1, diff, rods, dp);

        return dp[idx][diff + 5000] = max({stand1, stand2, reject});
    }
    int tallestBillboard(vector<int>& rods) {
        int n = rods.size();
        vector<vector<int>> dp(n + 1, vector<int>(10001, -1));
        return f(0, 0, rods, dp);
    }
};