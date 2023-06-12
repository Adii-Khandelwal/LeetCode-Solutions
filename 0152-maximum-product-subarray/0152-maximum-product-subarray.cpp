class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
//         int i=0;
//         int j=0;
//         int n = nums.size();
        
//         int maxi=INT_MIN;
//         int prod=1;
        
//         for(int i=0;i<n;i++)
//         {
//             prod=1;
//             for(int j=i;j<n;j++)
//             {
//                 prod*=nums[j];
//                 if(maxi<prod)
//                     maxi=prod;
//             }
//         }
        
//     return maxi;   
          int prod = 1;
        int ans =INT_MIN;
        for(int i = 0; i<nums.size(); i++){
            prod = prod*nums[i];
            ans = max(ans, prod);
            if(prod ==0){
                prod = 1;
            }
            
        }
        prod = 1;
        for(int i = nums.size()-1; i>=0; i--){
            prod = prod*nums[i];
            ans = max(ans, prod);
            if(prod ==0){
                prod = 1;
            }  
        }
        
        return ans;
        
    }
};