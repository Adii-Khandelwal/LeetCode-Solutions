class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        
        int mini=*min_element(dist.begin(),dist.end());
        int maxi=*max_element(dist.begin(),dist.end());
        int low=0;
        int high=1e7;
        int n=dist.size();
        double ans=0;
        while(low<=high)
        {
            double mid=(low+high)/2;
            double hr=0;
            for(int i=0;i<n-1;i++)
            {
                hr+=ceil((double)dist[i]/mid);
            }
            hr+=(double)dist[n-1]/mid;
            
            if(hr<=hour)
            {
                ans=mid;
                high=mid-1;
            }
            if(hr>hour)
            {
                low=mid+1;
            }
        }
        if(ans!=0)
        return ans;
        else return -1;
        
    }
};