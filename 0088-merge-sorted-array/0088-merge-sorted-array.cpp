class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        
//         for(int i=m;i<m+n;i++)
//         {
//             nums1[i]=nums2[i-m];
//         }
        
//         sort(nums1.begin(),nums1.end());
        
        int i=m+n-1;
        int k=m-1;
        int j=n-1;
       while(k>=0 && j>=0)
        {
            if(nums2[j]>nums1[k])
            {
                nums1[i--]=nums2[j--];
            }
            else
            {
                nums1[i--]=nums1[k--];
            }
        }
        
        while(j>=0)
        {
            nums1[i--]=nums2[j--];
        }
       
        
        
        
    }
};