class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();
        
        
        if(n==1)
        {
            return nums[0];
        }
//         int i=0;
//         int j=i+1;
//         int k=0;
        
//         int sum=0;
//         int maxi=-1e9;
//         for(i=0;i<n;i++)
//         {
//            sum=0;
//             for(j=i;j<n;j++)
//             {
                
//                 // for(k=i;k<=j;k++)
//                 {
                    
//                     sum+=nums[j];
//                     maxi=max(maxi,sum);
//                 }  
//             }
//         }
        
//         return maxi;
        
        int sum=0;
        int maxi=-1e9;
        for(int i=0;i<n;i++)
        {
            // sum+=nums[i];
            // maxi=max(maxi,sum);
            // if(sum<0)
            //     sum=0;
            
            sum=max(nums[i],sum+nums[i]);
            maxi=max(maxi,sum);
            
        }
        return maxi;
        
        
        
    }
};