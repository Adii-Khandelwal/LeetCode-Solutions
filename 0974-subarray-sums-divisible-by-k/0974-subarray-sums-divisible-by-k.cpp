class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        
        // int sum=0;
        // int n=nums.size();
        // int cnt=0;
        // for(int i=n-1;i>=0;i-- )
        // {
        //     sum=0;
        //     for(int j=i;j<n;j++)
        //     {
        //         sum+=nums[j];
        //         if(sum%k==0)cnt++;
        //     }
        // }
        // return cnt;
         vector<int> count(K);
        count[0] = 1;
        int prefix = 0, res = 0;
        for (int a : A) {
            prefix = (prefix + a % K + K) % K;
            res += count[prefix]++;
        }
        return res;
        
    }
};