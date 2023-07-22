class Solution {
public:
    bool ispossible(vector<int>& bloomDay,int day, int m, int k)
    {
        int cnt=0,ans=0;
        
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i]<=day)
            {
                cnt++;
            }
            else
            {
                ans+=cnt/k;
                cnt=0;
            }
        }
        ans+=cnt/k;
        if(ans>=m)return true;
        return false;
    }
    
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        
//         int mini=1e9;
//         int maxi=-1e9;
        
//         for(int i=0;i<bloomDay.size();i++)
//         {   
//             mini=min(mini,bloomDay[i]);
//             maxi=max(maxi,bloomDay[i]);
            
            
//         }
        
//         for(int i=mini;i<=maxi;i++)
//         {
//             if(ispossible(bloomDay,i,m,k))
//             {
//                 return i;
//             }
//         }
//         return -1;
         int mini=1e9;
        int maxi=-1e9;
        if((long long)m*k>(long long)bloomDay.size())return -1;
        
        for(int i=0;i<bloomDay.size();i++)
        {   
            mini=min(mini,bloomDay[i]);
            maxi=max(maxi,bloomDay[i]);
            
            
        }
        
        int low=mini,high=maxi;
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            if(ispossible(bloomDay,mid,m,k))
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
        
    }
};