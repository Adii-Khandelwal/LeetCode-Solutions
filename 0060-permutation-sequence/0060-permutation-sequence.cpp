class Solution {
public:
//     void f(string &nums, vector<string>&res, int ind)
//     {
//         if(ind==nums.size())
//         {
//             res.push_back(nums);
//             return;
//         }
        
//         for(int i=ind;i<nums.size();i++)
//         {
//             swap(nums[ind],nums[i]);
//             f(nums,res,ind+1);
//             swap(nums[ind],nums[i]);
//         }
//         return;
//     }
    
    
    
    string getPermutation(int n, int k) {
//        string nums;
//         for(int i=1;i<=n;i++)
//         {
//             nums.push_back(i+'0');
//         }
//         vector<string>res;
        
//         f(nums,res,0);
//         sort(res.begin(),res.end());
//         auto it=res.begin()+k-1;
//         return *it;
       
        int fact=1;
        vector<int>nums;
        for(int i=1;i<n;i++)
        {
            fact*=i;
            nums.push_back(i);
        }
        nums.push_back(n);
        k=k-1;
        string ans="";
        while(true)
        {
            ans+=to_string(nums[k/fact]);
            nums.erase(nums.begin()+k/fact);
            if(nums.size()==0)break;
            k=k%fact;
            fact=fact/nums.size();
            
        }    
            
        return ans;
    }
};