class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
//     vector<vector<int>> temp=matrix;
//         int m=matrix.size();
//         int n=matrix[0].size();
//         for(int i=0;i<m;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(matrix[i][j]==0)
//                 {
//                     for(int k=0;k<n;k++)
//                     {
//                         temp[i][k]=0;
//                     }
//                     for(int k=0;k<m;k++)
//                         temp[k][j]=0;
//                 }
//             }
//         }
        
//         for(int i=0;i<m;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 matrix[i][j]=temp[i][j];
//             }
//         }
          int n = matrix.size();
        int m = matrix[0].size();
        unordered_set<int> setRows; 
        unordered_set<int> setColumns; 
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    setRows.insert(i);
                    setColumns.insert(j);
                }
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(setRows.count(i) > 0 || setColumns.count(j) > 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        
       
    }
};