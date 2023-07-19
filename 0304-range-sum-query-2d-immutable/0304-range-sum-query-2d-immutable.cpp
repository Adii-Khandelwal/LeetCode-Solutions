class NumMatrix {
public:
    // vector<vector<int>> mat;
    // NumMatrix(vector<vector<int>>& matrix) {
    //     int m = matrix.size(),n = matrix[0].size();
    //     for(int i = 0 ; i < m; i++){
    //         vector<int> row(n);
    //         row[0] = matrix[i][0];
    //         for(int j = 1 ; j < n; j++){
    //             row[j] = row[j-1] + matrix[i][j];
    //         }
    //         mat.push_back(row);
    //     }
    // }
     vector<vector<int>> dp;
    NumMatrix(vector<vector<int>>& matrix) {
        int  r = matrix.size();
        int c = matrix[0].size();
        dp.resize(r+1,vector<int>(c+1,0));
      
        for(int i=1;i<r+1;i++){
            for(int j=1;j<c+1;j++){
                dp[i][j] = dp[i-1][j]+dp[i][j-1] - dp[i-1][j-1] + matrix[i-1][j-1];
            }
        }
    }
    
    // int sumRegion(int row1, int col1, int row2, int col2) {
    //     int sum = 0,minus = 0;
    //     for(int i = row1 ; i <= row2; i++){
    //         sum += mat[i][col2];
    //         if(col1 > 0)
    //             minus += mat[i][col1-1];
    //     }
    //     return sum - minus;
     int sumRegion(int row1, int col1, int row2, int col2) {
         row1++;
         col1++;
         row2++;
         col2++;
         return dp[row2][col2]-dp[row1-1][col2]-dp[row2][col1-1]+dp[row1-1][col1-1];
    }
};