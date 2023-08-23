class Solution {
public:
    int maximumGap(vector<int>& nums) {
       
    // int n=nums.size();
        
         int maxi = -1, mini = INT_MAX, n = nums.size();
        if(n<2)return 0;
        
        for(auto u : nums) 
            maxi = max(maxi,u), mini = min(mini,u);
     
        
        int avg_gap = (int)ceil((double)(maxi-mini)/(n-1));
        // To handle cases where all the elements are same!!!
        if(avg_gap == 0) return 0;      
     
        vector <int> bucket_max(n,-1), bucket_min(n,INT_MAX);
        for(int i = 0; i<n; i++){
            int index = (nums[i]-mini)/avg_gap;
            bucket_min[index] = min(bucket_min[index],nums[i]);
            bucket_max[index] = max(bucket_max[index],nums[i]);
        }
        
        // After filling the min and max arrays, we just need to compare...
        int prev = mini, ans = 0;
        for(int i = 0; i<bucket_min.size(); i++){
            if(bucket_max[i] == -1) continue;
            ans = max(ans,bucket_min[i]-prev);
            prev = bucket_max[i];
        }
        // We need to compare with the last element which is maximum...
        ans = max(ans,maxi-prev);
        return ans;
        
        
    }
};