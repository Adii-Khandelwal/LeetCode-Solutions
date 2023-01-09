class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
       

        
       
//                 i++; int i=0,j=0,temp;
//         if(m==0)
//                 nums1[i++]=nums2[j++];

        
//         while(i<m+n && j<n)
//         { 
//             if(nums1[i]<=nums2[j] && i<m) 
//             {
                
//             continue;}
//             else if(nums1[i]>nums2[j])
//             {
//                 // if(nums1[i]!=0)
//                 { temp=nums1[i];
//                 nums1[i++]=nums2[j];
//                 nums2[j]=temp;
//                 sort(nums2.begin(),nums2.end());
//                  }
                
                
//             }
//             // cout << i << " "<< j <<endl;
        
//              if(nums1[i]==0 && i>=m)
//              nums1[i++]=nums2[j++];
            
            // if(m==0)
            //     nums1[i++]=nums2[j++];
                
            // }
                    //////////////////////////////////////////////////
//         int i=0,j=0;
//         int x=m+n;
//         int nums3[x];
//         int k=0;
        
//         while(i<m && j<n)
//         {
//             if(nums1[i]<nums2[j])
//                 nums3[k++]=nums1[i++];
//             else nums3[k++]=nums2[j++];
//         }
        
        
//         for(;i<m;i++)
//             nums3[k++]=nums1[i];
        
//           for(;j<n;j++)
//             nums3[k++]=nums2[j];
        
//         for(i=0;i<m+n;i++)
//         {
//             nums1[i]=nums3[i];
//         }
   ///////////////////////////////////////////////////////////
//     int i=m-1;
//         int j=nums2.size()-1;
//         int k=nums1.size()-1;
        
//         while(i>=0 && j>=0 && k>=0)
//         {
//             if(nums1[i]>nums2[j])
//                 nums1[k--]=nums1[i--];
//             else
//                 nums1[k--]=nums2[j--];
//         }
        
        int i;
        for(i=0;i<n;i++)
            nums1[m++]=nums2[i];
        
        sort(nums1.begin(),nums1.end());
            
    
    
    
    
    }
    };
    
        
        
        
    
        
    
