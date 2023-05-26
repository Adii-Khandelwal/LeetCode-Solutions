class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        
//         map<int,int> mpp;
        
//         for(int i=0;i<n;i++)
//         {
//             mpp[nums[i]]++;
//         }
        
//         for(int i=0;i<n;i++)
//         {
//             if(mpp[nums[i]]>n/2)
//                 return nums[i];
//         }
//         return 0;
        ////////////////////////////////////////////
//         sort(nums.begin(),nums.end());
        
//         return nums[n/2];
        //////////////////////////////////////////
        
        int majority=nums[0];
        int cnt=1;
        
        for(int i=1;i<n;i++)
        {
            if(cnt)
            {
                if(nums[i]==majority)
                    cnt++;
                else
                    cnt--;
            }
            else
            {
                majority=nums[i];
                cnt=1;
            }
        }
        
        return majority;
        
        
        
        
    }
};