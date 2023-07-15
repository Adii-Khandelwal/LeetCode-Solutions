class Solution {
public:
    void f(int ind,vector<int>&temp,
           vector<vector<int>>&ans,int k,int n)
    {
        if(temp.size()==k and n==0)
        {
          
            ans.push_back(temp);
            return;
        }
        
        for(int i=ind;i<=9;i++)
        {
           
            temp.push_back(i);
            f(i+1,temp,ans,k,n-i);
            temp.pop_back();
            
        }         
       
    }
    
    
    
    
    vector<vector<int>> combinationSum3(int k, int n) {
  
        vector<int>temp;
        vector<vector<int>>ans;
        
        f(1,temp,ans,k,n);
        return ans;
    }
};