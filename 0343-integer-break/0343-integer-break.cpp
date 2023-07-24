// class Solution {
// public:
//     int f(int n,int ind)
//     {
//         if(n==0 or ind==0)return 1;
        
        
//         if(ind > n) return f(n, ind - 1);
//         return max(ind*f(n-ind,ind),f(n,ind-1));
        
//     }
    
    
    
//     int integerBreak(int n) {
       
//         return f(n,n-1);
        
//     }
// };
class Solution {
public:
    int dp[59][58];
    
    int helper(int n, int idx)
    {
       if(n == 0 or idx == 0) return 1;
        
       if(dp[n][idx] != -1) return dp[n][idx];
        
       if(idx > n) return dp[n][idx] = helper(n, idx - 1);
      
       return dp[n][idx] = max((idx * helper(n - idx, idx)), helper(n , idx - 1));
    }
    
    int integerBreak(int n)
    {
        for(int i = 0; i < n + 1; i++)
        {
            for(int j = 0; j < n; j++)
                dp[i][j] = -1;
        }
        
        return helper(n, n - 1);
    }
};