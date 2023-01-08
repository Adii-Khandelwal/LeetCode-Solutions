class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
           	//          int i,j;
           	//         vector<int> ans;
           	//         for(i=0;i < nums.size();i++)
           	//         {         	for(j=i+1;j < nums.size();j++)
           	//             {
           	//                 if(nums[i]+nums[j]==target)
           	//                 {
           	//                     ans.push_back(i);
           	//                     ans.push_back(j);
           	//                     goto final;
           	//             }

           	//     }}
           	//         final: return ans;

            unordered_map<int, int> mpp;
            int i;
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