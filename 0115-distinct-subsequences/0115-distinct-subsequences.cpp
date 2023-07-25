class Solution {
public:
//     int solve(string& s, string& t, vector<vector<int>>& dp, int idxS, int idxT, const int& n, const int& m)
// {
// 	if(idxT == m) return 1;
// 	if(idxS == n) return 0;

// 	if(dp[idxS][idxT] != -1) return dp[idxS][idxT];

// 	if(s[idxS] == t[idxT])
// 		return dp[idxS][idxT] = solve(s, t, dp, idxS+1, idxT+1, n, m) + solve(s, t, dp, idxS+1, idxT, n, m);


// 	return dp[idxS][idxT] = solve(s, t, dp, idxS+1, idxT, n, m);
// }

// int numDistinct(string s, string t) {
// 	int n = s.size(), m = t.size();
// 	vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
// 	return solve(s, t, dp, 0, 0, n, m);
// }
// };
    int numDistinct(string s, string t) {
	static int MOD = (int)1e9 + 7;            // To avoid Integer Overflow on some cases
	int n = s.size(), m = t.size();
	vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

	for(int i=0; i<n; i++) dp[i][0] = 1;

	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++)
		{
			if(s[i-1] == t[j-1])
				dp[i][j] = (dp[i-1][j] + dp[i-1][j-1]) % MOD;
			else 
				dp[i][j] = dp[i-1][j];
		}
	}

	return dp[n][m];
}};