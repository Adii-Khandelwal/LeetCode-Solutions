class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
       //BRUTE FORCE
        
        
//         int x=0;
        
//         for(int i=0;i<nums.size();i++)
//         {
          
//             nums[i]=pow(nums[i],2);
           
//         }
//         sort(nums.begin(),nums.end());
//         return nums;
        
        vector<int> v(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=pow(nums[i],2);
        }
        
        int i=0;
        int j=nums.size()-1;
        int k=nums.size()-1;
        
        while(j>=i && k>=0)
        {
            if(nums[i]>nums[j])
            {
                v[k--]=nums[i++];
            }
            else
            {
                v[k--]=nums[j--];
            }
            
        }
        return v;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};