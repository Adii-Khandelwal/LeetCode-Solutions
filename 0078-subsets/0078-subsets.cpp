class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> vec;
        vector<int> v;
        sub(0,nums,vec,nums.size(),v);
    return vec;        
    }
    
    void sub(int i,vector<int>&nums,vector<vector<int>> &vec ,int n,vector<int> &v)
    {
        if(i==n)
        {
            vec.push_back(v);
            return;
                
        }
        
        v.push_back(nums[i]);
        sub(i+1,nums,vec,n,v);
        v.pop_back();
        sub(i+1,nums,vec,n,v);
    }
};