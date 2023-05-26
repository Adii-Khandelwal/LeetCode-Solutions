class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
//          vector<int> ans;
//             int n=nums.size();
//             for(int i=0;i<n;i++)
//             {
//                 for(int j=i+1;j<n;j++)
//                 {
//                     if(nums[i]==target-nums[j])
//                     {
//                         ans.push_back(i);
//                         ans.push_back(j);
//                     }
//                 }
//             }
        
//         return ans;
            int i;
            map<int,int> mpp;
            for (i = 0; i < nums.size(); i++)
            {
                mpp.emplace(nums[i], i);
            }
            vector<int> vec;
           	// int first=-1;
           	// auto second=-1;

            for (i = 0; i < nums.size(); i++)
            {
               	// first=i;
                if (mpp.find(target - nums[i]) != mpp.end())
                {
                    if (i != mpp[target - nums[i]])
                    {
                        vec.emplace_back(i);
                        vec.emplace_back(mpp[(target) - nums[i]]);

                        goto final;
                    }
                }
            }
           	// return vec;

            final: return vec;
            
        }
};