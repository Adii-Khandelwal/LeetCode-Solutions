class Solution {
public:
//   int moves[4][2] = { {-1,0},{1,0},{0,-1},{0,1} };  
    
// int longestIncreasingPath(vector<vector<int>>& matrix) {
// 	int longestPath = 1; 
    
//     // atleast one cell can always be selected in the path
// 	// explore each cell of matrix to find longest path achievable from that cell and finally return the maximum
//     int m=matrix.size(),n=matrix[0].size();
//     vector<vector<int>>dp(m,vector<int>(n,-1));
// 	for(int i = 0; i < size(matrix); i++)
// 		for(int j = 0; j < size(matrix[0]); j++)
// 			longestPath = max(longestPath, solve(matrix, i, j,dp));		        
// 	return longestPath;
// }
 
// int solve(vector<vector<int>>& mat, int i, int j,vector<vector<int>>&dp){
// 	int MAX = 1;  
    
//     // max length of path starting from cell i,j of matrix
// 	// choosing all the 4 moves available for current cell
//     if(dp[i][j]!=-1)return dp[i][j];
//     dp[i][j]=1;
//     // minimum path from each cell is always atleast 1
// 	// choosing each possible move available to us
    
// 	for(int k = 0; k < 4; k++){
// 		int new_i = i + moves[k][0], new_j = j + moves[k][1];
		
// 		if(new_i < 0 || new_j < 0 || new_i >= size(mat) || new_j >= size(mat[0]) || mat[new_i][new_j] <= mat[i][j]) continue;
		
// 		dp[i][j] = max(dp[i][j], 1 + solve(mat, new_i, new_j,dp));
// 	}         
// 	return dp[i][j];
// }
    
    
    
    
    int dp[200][200]; // constraints are small enough that we can just set them to MAX
int cnt, n, m;
int longestIncreasingPath(vector<vector<int>>& matrix) {
	cnt = 0, n = size(matrix), m = size(matrix[0]);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cnt = max(cnt, solve(matrix, i, j, -1));            
	return cnt;
}
int solve(vector<vector<int>>& mat, int i, int j, int prev){
	if(i < 0 || j < 0 || i >= n || j >= m || mat[i][j] <= prev) return 0;
	if(dp[i][j]) return dp[i][j];
	return dp[i][j] = 1 + max({ solve(mat, i + 1, j, mat[i][j]),
							    solve(mat, i - 1, j, mat[i][j]),
							    solve(mat, i, j + 1, mat[i][j]),
							    solve(mat, i, j - 1, mat[i][j]) });       
}
};