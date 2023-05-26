class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        int j=m-1;
    
        
        for(int i=0;i<m;i++)
        {
             if(matrix[i][0]==target)
                return true;
        }
        for(int i=0;i<m-1;i++)
        {
           
            if(matrix[i][0]<target && target<matrix[i+1][0])
            {
              j=i;  
                break;
            }
        }
        int f=0;
        cout << j<< endl;
        for(int i=1;i<n;i++)
        {
            
           
            if(matrix[j][i]==target)
            { 
                f=2;
                return true;
            }
             // cout << f;
        }
        return false;
    }
};