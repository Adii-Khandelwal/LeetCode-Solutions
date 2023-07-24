class Solution {
public:
    // O(3^(max(m,n)) and space complexity is O(max(m,n)
   
    bool f(string &s,string &p,int i,int j,vector<vector<int>>&dp)
    {
        if(j==p.size())
        {
            return i==s.size();
        }
        
        if(dp[i][j]!=-1)return dp[i][j];
        
        bool firstM= (i<s.size() and (s[i] == p[j] || p[j]=='.'));
            bool ans=0;          
        if(j+1<p.length() && p[j+1]=='*')
        {
           ans=  (f(s,p,i,j+2,dp)|| (firstM && f(s,p,i+1,j,dp) ));
        }
        else
        {
            ans= (firstM && f(s,p,i+1,j+1,dp));
        }
        dp[i][j]=ans;
        return ans;
        
    }
    
    
    
    bool isMatch(string s, string p) {
       vector<vector<int>> dp(s.length()+1,vector<int>(p.length(),-1));
        return f(s,p,0,0,dp);
    }
};