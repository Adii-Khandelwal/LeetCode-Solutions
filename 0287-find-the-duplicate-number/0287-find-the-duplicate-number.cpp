class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        
        //BRUTE FORCE
        
//         int i;
//         int ans=0;
        
        
//     sort(nums.begin(),nums.end());
//         for(i=0;i<nums.size();i++)
    
//         {
//             if(nums[i]==nums[i+1])
//             {ans= nums[i];
//              break;
//             }
//         }
//         return ans;
      
        map<int,int> mpp;
        int x;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
            if(mpp[nums[i]]==2)
            
            {
                x=nums[i];
                return x;
            }
                
        }
        
       
        
    return -1;    
        
        
    }
};