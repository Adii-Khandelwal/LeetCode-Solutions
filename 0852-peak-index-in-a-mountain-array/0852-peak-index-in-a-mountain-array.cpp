class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        
//         for(int i=0;i<arr.size();i++)
//         {
//             if(arr[i]>arr[i+1])
//                 return i;
//         }
//         return -1;
         int l = 0, r = A.size() - 1, mid;
        while (l < r) {
            mid = (l + r) / 2;
            if (A[mid] < A[mid + 1])
                l = mid + 1;
            else
                r = mid;
        }
        return l;
    }
};