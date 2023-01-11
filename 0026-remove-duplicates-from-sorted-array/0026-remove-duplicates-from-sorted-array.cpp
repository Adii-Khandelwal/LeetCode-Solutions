class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    
        for(int i=0;i<nums.size()-1;)
        {
            if(nums[i+1]==nums[i])
            {  
               auto it=nums.begin()+i;
                nums.erase(it);
             

            }
            else
            {
                i++;
            }

        }
        
    return nums.size();
    }    
        
};