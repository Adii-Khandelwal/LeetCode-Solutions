class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
//         int n=nums.size()
//         vector<int> v[pow(n),2)];
        
//         map<int,int> mpp;
        
//         int i,j;
        
//         for(i=0;i<n;i++)
//             for(j=0;j<n;j++)
//             {
//                 v[i]=nums[i]+nums[j];
//             }
        
        int n = nums.size();
        set<vector<int>> v;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++){
            int j = i + 1;
            int k = n - 1;
            while(j<k){
                if(nums[j]+nums[k]+nums[i]>0){
                    k--;
                }
                else if(nums[j]+nums[k]+nums[i]<0){
                    j++;
                }
                else{
                    v.insert({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
            }
        }
        return vector<vector<int>>(v.begin(),v.end());
        
    }
};