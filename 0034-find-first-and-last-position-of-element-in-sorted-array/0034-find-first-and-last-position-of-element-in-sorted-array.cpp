class Solution {
public:
    int f(vector<int>& nums, int target)
    {
        int first=-1;
        int l=0;
        int h=nums.size()-1;
     
        while(l<=h)
        {
            int mid=(l+h)/2;
            
            if(nums[mid]==target)
            {
                first=mid;
                h=mid-1;
            }
            else if(nums[mid]>target)
                h=mid-1;
            else
                l=mid+1;
        }
        return first;
    }  
        
        int la(vector<int>& nums, int target)
    {
        int last=-1;
        int l=0;
        int h=nums.size()-1;
     
        while(l<=h)
        {
            int mid=(l+h)/2;
            
            if(nums[mid]==target)
            {
                last=mid;
                l=mid+1;
            }
            else if(nums[mid]>target)
                h=mid-1;
            else
                l=mid+1;
        }
            return last;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
       
//        int first=-1;
//         int last=-1;
        
//         int n = nums.size();
        
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]==target)
//             {
//                 if(first==-1)
//                     first=i;
//                 last=i;
//             }
//         }
//         return {first,last};
       
        return {f(nums,target),la(nums,target)};
        
    }
};