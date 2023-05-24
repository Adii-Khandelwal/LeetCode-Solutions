class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
     int n=nums.size();
        
        int lastg=-1;
        int i=1;
      while(i<n)
        {
            if(nums[i]>nums[i-1])
            {
                lastg=i;
            }
            i++;
        }
        
        if(lastg==-1)
        {
            for(int i=0;i<n/2;i++)
            swap(nums[i],nums[n-i-1]);
            return;
        }
        
        int ind=lastg;
        
        for(int i=lastg;i<n;i++)
        {
            if(nums[lastg-1]<nums[i] and nums[ind]>nums[i])
                ind=i;
        }
        swap(nums[lastg-1],nums[ind]);
        sort(nums.begin()+lastg,nums.end());
        
        
        
        
    }
};