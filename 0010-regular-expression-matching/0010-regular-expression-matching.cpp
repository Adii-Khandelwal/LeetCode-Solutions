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
       // vector<vector<int>> dp(s.length()+1,vector<int>(p.length(),-1));
        // return f(s,p,0,0,dp);
         vector<vector<int>> dp(s.length()+1,vector<int>(p.length()+1,0));
        
        dp[s.size()][p.size()]=1;
        
        for(int i=s.size();i>=0 ;i--)
            for(int j=p.size()-1;j>=0 ;j--)
            {
                bool firstM= (i<s.size() and (s[i] == p[j] || p[j]=='.'));
            bool ans=0;          
        if(j+1<p.length() && p[j+1]=='*')
        {
          dp[i][j]= (dp[i][j+2]|| (firstM && dp[i+1][j] ));
        }
        else
        {
          dp[i][j]= (firstM &&dp[i+1][j+1]);
        }
     
            }
            
            
         return dp[0][0];
        
        
        
    }
};