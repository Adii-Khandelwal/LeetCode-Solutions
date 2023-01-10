class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
//      int i;
//         for(i=0;i<n;i++)
//             nums1[m++]=nums2[i];
        
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
    
        
        
        
    
        
    
