class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        
        int n=nums.size();
        vector<int >ans;
        
        sort(nums.begin(),nums.end());
        
        vector<int> dp(n,1);
        vector<int>hash(n);
        
        int maxln=1;
        int lastin=0;
        for(int i=0;i<n;i++)
        {
            hash[i]=i;
            for(int j=0;j<i;j++)
            {
                if(nums[i]%nums[j]==0 and dp[i]<dp[j]+1)
                {
                    dp[i]=1+dp[j];
                    hash[i]=j;
                }
            }
            if(maxln<dp[i])
            {
                maxln=dp[i];
                lastin=i;
            }
        }
        
        ans.push_back(nums[lastin]);
        while(hash[lastin]!=lastin)
        {
            lastin=hash[lastin];
            ans.push_back(nums[lastin]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};