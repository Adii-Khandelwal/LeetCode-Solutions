class Solution {
public:
    int trap(vector<int>& height) {
       
  //       vector<int> arr=height;
  //       int n = arr.size();
  // int waterTrapped = 0;
  // for (int i = 0; i < n; i++) {
  //   int j = i;
  //   int leftMax = 0, rightMax = 0;
  //   while (j >= 0) {
  //     leftMax = max(leftMax, arr[j]);
  //     j--;
  //   }
  //   j = i;
  //   while (j < n) {
  //     rightMax = max(rightMax, arr[j]);
  //     j++;
  //   }
  //   waterTrapped += min(leftMax, rightMax) - arr[i];
  // }
  // return waterTrapped;
////////////////////////////////////////////////////////
//         int n=height.size();
//         vector<int> pre(n);
//         vector<int> suf(n);
        
//         int maxi=INT_MIN;
//         for(int i=0;i<n;i++)
//         {
//             maxi=max(maxi,height[i]);
//             pre[i]=maxi;
//         }
//         maxi=INT_MIN;
//         for(int i=n-1;i>=0;i--)
//         {
//              maxi=max(maxi,height[i]);
//            suf[i]=maxi;
//         }
//         int ans=0;
//         for(int i=0;i<n;i++)
//         {
         
//             ans+=min(pre[i],suf[i])-height[i];
//         }return ans;
 /////////////////////////////////////////////////////////
        
        int h=height.size();
        int l=0;
        int r=h-1;
        int res;
        int lmax=0;
        int rmax=0;
        
        while(l<=r)
        {
            if(height[l]<=height[r])
            {
                if(height[l]>=lmax)lmax=height[l];
                else res+=lmax-height[l];
                l++;
                    
            }
            else
            {
                if(height[r]>=rmax)rmax=height[r];
                else res+=rmax-height[r];
                r--;
            }
        }
        return res;
    }
    
};