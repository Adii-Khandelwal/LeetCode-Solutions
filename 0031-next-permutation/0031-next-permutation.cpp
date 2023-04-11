class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
      int n=nums.size();
        
        int i=1;
        int ans=0;
        int lastg=-1;
        
        while(i<n)
        {
          if(nums[i]>nums[i-1])
              lastg=i;
            i++;
        }
        
        if(lastg==-1)
        {
            for(i=0;i<n/2;i++)
                swap(nums[i],nums[n-i-1]);
            return;
        }
        
        int index=lastg;
        
        for(int i=lastg;i<n;i++)
        {
            if(nums[i]>nums[lastg-1] && nums[i]<nums[index])
                index=i;
        }
        
        swap(nums[lastg-1],nums[index]);
        sort(nums.begin()+lastg,nums.end());
        
    }
};