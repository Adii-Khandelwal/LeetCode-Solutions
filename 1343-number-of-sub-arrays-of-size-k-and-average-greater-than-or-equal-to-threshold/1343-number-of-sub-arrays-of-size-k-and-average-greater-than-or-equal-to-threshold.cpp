class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        
        int n=arr.size();
        
        int j=0;
        int i=0;
        
        int sum=0;
        int cnt=0;
        while(j<n)
        {
                sum+=arr[j];
                
            if(j-i+1<k)
            {
                j++;
                
            } 
            else
            {
            
                if(sum>=k*threshold)
            cnt++;
            
                sum-=arr[i++];
                j++;
            }
            
            
        }
      return cnt;  
    }
};