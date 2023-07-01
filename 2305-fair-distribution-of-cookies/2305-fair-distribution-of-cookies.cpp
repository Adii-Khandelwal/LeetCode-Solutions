class Solution {
public:
    int ans=1e9;
  void backtr(int ind,vector<int>&cookies,int k,vector<int>&c)
    {
        if(ind==cookies.size())
        {
            int maxi=0;
            for(auto i:c)maxi=max(maxi,i);
            ans=min(ans,maxi);
            return;
        }
        
        for(int i=0;i<k;i++)
        {
            c[i]+=cookies[ind];
            backtr(ind+1,cookies,k,c);
            c[i]-=cookies[ind];
        }
      return ;
        
    }
    
    
    
    
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> c(k,0);
        backtr(0,cookies,k,c);
        return ans;
    }
};