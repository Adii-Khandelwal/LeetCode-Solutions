class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> mpp;
        
        int n=fruits.size();
        
        int i=0;
        int j=0;
        
        int maxi=0;
        
        while(i<n)
        {
            mpp[fruits[i]]++;
            i++;
            while(mpp.size()>2)
            {
                mpp[fruits[j]]--;
                if(mpp[fruits[j]]==0)
                    mpp.erase(fruits[j]);
                j++;
            }
            
            maxi=max(maxi,i-j);
        }
     return maxi;   
    }
};