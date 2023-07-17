class Solution {
public:
//     bool isugly(int num)
//     {
//         for (int i=2; i<6 && num; i++)
//     while (num % i == 0)
//         num /= i;
// return num == 1;
//     }
    
    int nthUglyNumber(int n) {
        
//         int cnt=0;
//         int i=0;
//         while(cnt!=n)
//         {
//             if(isugly(i))
//                 cnt++;
//             i++;
            
//         }
//         return i-1;
         vector<int> dp(n);
        dp[0]=1;
        int x=0, y=0, z=0;
        for(int i=1; i<n; i++){
            dp[i] = min(dp[x]*2, min(dp[y]*3, dp[z]*5));
            if(dp[i] == 2*dp[x]) x++;
            if(dp[i] == 3*dp[y]) y++;
            if(dp[i] == 5*dp[z]) z++;
        }
        return dp[n-1];
    }
};