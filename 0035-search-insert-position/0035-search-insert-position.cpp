class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int h=nums.size()-1;
        int l=0;
        int mid;
        
        if(nums.size()==0)
            return 0;
        
        if(nums.size()==1)
        {  if(nums[0]==target)
                return 0;
        if(nums[0]>target)
            return 0;
         else return 1;
         }
        
        
        if(target>nums[nums.size()-1])
            return nums.size();
        if(target<nums[0])
            return 0;
       
        int flag=0;
       
        
        while(h>=l)
        {
            mid=(l+h)/2;
            if(target==nums[mid])
                return mid;
            else if(target<nums[mid])
                
            h= mid-1;
            
            // if(h==l)
            //     return mid;}
            else if(target>nums[mid])
            l=mid+1;
            
             // if(h==l)
             //     return mid;}
            
        }
        return l;
//         if(flag==1)
//         return h+1;
//         if(flag==2)
//             return h;
        
//         return -1;
    }
};