class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> arr(nums1.size()+nums2.size(),0);
        double ans=0;
        int i=0;
        int j=0;
        int k=0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<=nums2[j])
            {
                arr[k++]=nums1[i++];
            }
            else
            {
                arr[k++]=nums2[j++];
            }
        }
        while(i<nums1.size())
        {
            arr[k++]=nums1[i++];
        }
        while(j<nums2.size())
        {
            arr[k++]=nums2[j++];
        }
          
        // for(int i=0;i<(nums1.size()+nums2.size());i++)
        // cout << arr[i];
        
        if(arr.size()%2)
            return (double)arr[arr.size()/2];
        else
        {
            return ((double)(arr[arr.size()/2]+arr[arr.size()/2-1])/2);
        }
            
        
        return ans; 
    }
};