class Solution {
public:
  
    
    
    
    vector<vector<int>> generate(int numRows) {
        
        
        int n=numRows;
        vector<vector<int>> ans(n);
        
        ans[0].push_back(1);
        for(int i=1;i<n;i++)
        {
            ans[i]=vector<int> (i+1,1);
            
            for(int j=1;j<i;j++)
            {
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
            }
        }
        return ans;
        
        
        
        
        
       
        
        
    }
};