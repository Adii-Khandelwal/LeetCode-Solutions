class Solution {
public:
//     void recurse(vector<int> &nums, vector<int >&temp,vector<vector<int>> & ans, vector<int> &path)
//     {
//         if(temp.size()==nums.size())
//         {
//             ans.push_back(temp);
//             return ;
//         }
        
//         for(int i=0;i<nums.size();i++)
//         {
//             if(path[i]!=1)
//             {
//                 path[i]=1;
//                  temp.push_back(nums[i]);
//                 recurse(nums,temp,ans,path);
//                 path[i]=0;
//                 temp.pop_back();
//             }
//         }
    
    
    void f(int ind,vector<int> &nums,vector<vector<int>> &ans)
    {
        if(ind==nums.size())
        {
            ans.push_back(nums);
        }
        
        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[ind],nums[i]);
            f(ind+1,nums,ans);
            swap(nums[ind],nums[i]);
        }
    }
        
        
    
    
    vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>> ans;
//         vector<int> temp;
//         vector<int> path(nums.size(),0);
        
//      recurse(nums,temp,ans,path);
//         return ans;
        
           vector<vector<int>> ans;
        f(0,nums,ans);
        return ans;
        
        
    }
};