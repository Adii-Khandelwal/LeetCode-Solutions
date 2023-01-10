class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // int i;
        // int n=nums.size();
        ////////////////////////////////////////////////
//         vector<int> vec;
//                                 // BRUTE FORCE
//         for(i=0;i<n;i++)
//         {
//             if(nums[i]!=0)
//                 vec.push_back(nums[i]);
//         }
        
//         for(i=0;i<vec.size();i++)
//         {
//             nums[i]=vec[i];
//         }
//         for(i=vec.size();i<nums.size();i++)
//         {
//             nums[i]=0;
//         }
     ////////////////////////////////////////////////////////
//         int zero=0; // OPTIMISED APPROACH
        
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]!=0)
//             {
//                 swap(nums[i],nums[zero]);
//                 zero++;
//             }
//         }
      //////////////////////////////////////////////////////////////////  
        stable_partition(nums.begin(),nums.end(),[] (int x){return x;});
        //one line code if you know STL
        
        
    }
};