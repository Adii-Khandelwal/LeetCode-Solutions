class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=nums[0];
        vector<int> v={sum};
        
        for(int i=1;i<nums.size();i++)
            
        {
            sum+=nums[i];
            v.push_back(sum);    
            
        }
        
       return v; 
    }
};