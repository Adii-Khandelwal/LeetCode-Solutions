class Solution {
public:
    int binarySearch(vector<int> v,int l,int h,int key)
    {
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(key==v[mid])
                return mid;
            else if(key < v[mid])
                h=mid-1;
            else
                l=mid+1;
        }
        return -1;
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
       
       int first=-1;
        int last=-1;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                if(first==-1)
                    first=i;
                last=i;
            }
        }
        return {first,last};
    }
};