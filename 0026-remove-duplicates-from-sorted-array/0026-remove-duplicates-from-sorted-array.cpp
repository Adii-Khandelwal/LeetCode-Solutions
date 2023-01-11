class Solution
{
    public:
        int removeDuplicates(vector<int> &nums)
        {
    /// USING VECTOR TOOL
    //       int i,count=1;
    //     for(i=1;i<nums.size();)
    //     {
    //         if(nums[i]==nums[i-1])
    //         {
    //            nums.erase(nums.begin()+i);
    //         }
    //         else i++;
    //     }
    //     return i;
    // } 
        // WITHOUT USING VECTOR PROPERTY
        int i;
        int j=0;
        
        if(nums.size()==0 || nums.size()==1)
            return nums.size();
        
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                nums[j++]=nums[i];
            }
            
        }
        nums[j++]=nums[nums.size()-1];
        return j;
        }
    
};