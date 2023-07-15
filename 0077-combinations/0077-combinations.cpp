class Solution {
public:
     void f(int ind,vector<int>&temp,
           vector<vector<int>>&ans,int k,int n)
    {
        if(temp.size()==k)
        {
          
            ans.push_back(temp);
            return;
        }
        
        for(int i=ind;i<=n;i++)
        {
           
            temp.push_back(i);
            f(i+1,temp,ans,k,n);
            temp.pop_back();
            
        }         
       
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        f(1,temp,ans,k,n);
        return ans;
    }
};