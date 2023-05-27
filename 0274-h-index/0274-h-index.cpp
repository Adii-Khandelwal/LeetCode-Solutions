class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        int n=citations.size();
        
        
        
        
        if(n==1)
        {
            if(citations[0]>=1)
                return 1;
            else return 0;
            
            
        }
        
       sort(citations.begin(),citations.end());
        int maxi=0;
        int mini;
        for(int i=0;i<n;i++)
        {
            if(citations[i]>=n-i)
            {
                mini=min(n-i,citations[i]);
                maxi=max(maxi,mini);   
            } 
        }
        
        return maxi;
        }
};