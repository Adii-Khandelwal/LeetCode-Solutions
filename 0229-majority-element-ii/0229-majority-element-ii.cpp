class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        
        vector<int> ans;
        map<int,int> mpp;
        
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        
        for(int i=0;i<n;i++)
        {
            if(mpp[nums[i]]>(n/3))
            {
                
                // auto it=find(ans.begin(),ans.end(),nums[i]);
                // if(it==ans.end());
                ans.push_back(nums[i]);
            mpp[nums[i]]=0;
            
            
            
            
            } }
        return ans;
    }
};