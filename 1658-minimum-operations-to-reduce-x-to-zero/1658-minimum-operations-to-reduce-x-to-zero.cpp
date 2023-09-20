class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        //remove a subarray having sum= totalsum-x;
        
        int n=nums.size();
        int total=-x;
        for(int i=0;i<n;i++)total+=nums[i];
        if(total==0)return n;
        int left=0,right=0;
        int currSum=0,maxLen=0;
        for(right=0;right<n;right++){
            currSum+=nums[right];
            while(left<right && currSum>total){
                currSum-=nums[left];
                left++;
            }
            
            if(currSum==total){
               
                maxLen=max(maxLen,right-left+1);
            }
        }
        if(maxLen==0)return -1;
        return n-maxLen;
        
        
    }
};