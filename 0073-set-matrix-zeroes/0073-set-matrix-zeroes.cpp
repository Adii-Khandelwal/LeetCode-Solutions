class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        
        //BRUTE FORCE
        
//         int m=matrix.size();
//         int n=matrix[0].size();
        
//         vector<vector<int>> visited=matrix;
        
//        for(int i=0;i<m;i++)
//            for(int j=0;j<n;j++)
//            {
//                if(matrix[i][j]==0)
//                {
//                    for(int k=0;k<m;k++)
//                        visited[k][j]=0;
                       
//                }
//            }
//        for(int i=0;i<m;i++)
//            for(int j=0;j<n;j++)
//            {
//                if(matrix[i][j]==0)
//                {
//                    for(int k=0;k<n;k++)
//                        visited[i][k]=0;
                       
//                }
//            }
        
//         for(int i=0;i<m;i++)
//            for(int j=0;j<n;j++)
//            {
//                matrix[i][j]=visited[i][j];
//            }
        
//         Time Complexity : O((N*M)*(N+M)), Where N is the number of row and M is number of column of matrix. Here
//     nested loops creates the time complexity. O(N*M) for traversing through each element and (N+M) for traversing
//     to row and column of elements having value 0.

//     Space Complexity : O(N*M), visited matrix space.

//     Solved using Matrix with Extra space.
        
        
         int m=matrix.size();
        int n=matrix[0].size();
        
        // vector<vector<int>> visited=matrix;
        
       for(int i=0;i<m;i++)
           for(int j=0;j<n;j++)
           {
               if(matrix[i][j]==0)
               {
                   for(int k=0;k<m;k++)
                       if(matrix[k][j]!=0)
                           matrix[k][j]=-9999;
                       
               }
           }
       for(int i=0;i<m;i++)
           for(int j=0;j<n;j++)
           {
               if(matrix[i][j]==0)
               {
                   for(int k=0;k<n;k++)
                       if(matrix[i][k]!=0)
                           matrix[i][k]=-9999;
                       
               }
           }
        
        for(int i=0;i<m;i++)
           for(int j=0;j<n;j++)
           {
               if(matrix[i][j]==-9999)
                    matrix[i][j]=0;
               }
        
        
        
        
       
    }
};