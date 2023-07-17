class Solution {
private:
    // int keepsOndividingUntilPossible(int dividend, int divisor){
    //     while(dividend % divisor == 0){
    //         dividend /= divisor;
    //     }
    //     return dividend;
    // }
public:
    
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        //   int i=0, count=0;
        // while(count < n){
        //     int isUgly = i+1;
        //     for(auto factor : primes){
        //         isUgly = keepsOndividingUntilPossible(isUgly, factor);
        //     }
        //     if(isUgly == 1){
        //         count++;
        //     }
        //     i++;
        // }
        // return i;
        vector<int>pointers(primes.size(),1);
        vector<long long>dp(n+1);
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            long long mini=INT_MAX;
            for(int j=0;j<primes.size();j++)
            {
                mini=min(mini,dp[pointers[j]]*primes[j]);
            }
            dp[i]=mini;
            for(int j=0;j<primes.size();j++)
            {
                if(dp[pointers[j]]*primes[j]==mini)
                {
                    pointers[j]++;
                }
            }
        }        
        return dp[n];

        
        
        
        
    }
};