class Solution {
public:
   int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length();
        int n=text2.length();
        if(m==0 or n==0)
            return 0;
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(text1[i-1]==text2[j-1])
                {
                    int a = text1[i-1];
                    dp[i][j]=a + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    }
    int minimumDeleteSum(string s1, string s2) {
        int sum=0;
        for(char c:s1){
            int x = c;
            sum+=x;
        }
        for(char c:s2){
            int x = c;
            sum+=x;
        }
        int lcsValue = longestCommonSubsequence(s1,s2);
        return sum - (2*lcsValue);
    }
};