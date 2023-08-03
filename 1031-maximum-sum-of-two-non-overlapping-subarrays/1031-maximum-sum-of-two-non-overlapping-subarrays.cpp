class Solution {
public:
    int f(vector<int>& arr, int firstLen, int secondLen)
    {
        int n = arr.size();
        vector<int> firstPrefixSum(n, 0), secondSuffixSum(n, 0);
        
        int runningSum = accumulate(arr.begin(), arr.begin() + firstLen, 0);
        firstPrefixSum[firstLen - 1] = runningSum;
        
        for(int i = firstLen, j = 0; i < n; i++){
            runningSum += arr[i] - arr[j++];
            firstPrefixSum[i] = max(firstPrefixSum[i - 1], runningSum);
        }
        
        runningSum = accumulate(arr.rbegin(), arr.rbegin() + secondLen, 0);
        secondSuffixSum[n - secondLen] = runningSum;
        
        for(int i = n - secondLen - 1, j = n - 1; i >= 0; i--){
            runningSum += arr[i] - arr[j--];
            secondSuffixSum[i] = max(secondSuffixSum[i + 1], runningSum);
        }
        
        int maximumSum = 0;
        
        for(int i = 0; i < n - 1; i++){
            maximumSum = max(maximumSum, firstPrefixSum[i] + secondSuffixSum[i + 1]);
        }
        return maximumSum;
    }
    
    
    
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
      
        int sum1=f( nums,  firstLen,  secondLen);
        reverse(nums.begin(),nums.end());
        int sum2=f( nums,  firstLen,  secondLen);
      
        return max(sum1,sum2);
        
    }
};