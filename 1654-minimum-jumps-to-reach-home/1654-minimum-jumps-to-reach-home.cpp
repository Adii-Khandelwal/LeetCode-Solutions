class Solution {
public:
    
    unordered_map<int,int>m;
    int dp[7001][2];
    int solve(int i,bool back,int a,int b,int x)
    {
       
        if(i == x)return 0;
        
        if( i < 0 || m.find(i)!= m.end() || i>6000 )
            return 1e9;
        
        
        if(dp[i][back]!=-1)return dp[i][back];
        int forward = 0;
       
        dp[i][back] = 1 + solve(i+a,0,a,b,x);
       
        
        if(!back)
        {
            dp[i][back] = min(dp[i][back],1 + solve(i-b,1,a,b,x));
        }
      
        return dp[i][back];
    }
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        
        for(int i = 0 ; i<forbidden.size();i++)
            m[forbidden[i]] = 1;
        
        memset(dp,-1,sizeof(dp));
        int ans = solve(0,0,a,b,x);
        if(ans > 1e9)return -1;
        return ans;
    }
};