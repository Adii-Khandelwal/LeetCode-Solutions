class Solution {
public:
    int f(vector<int>& weights, int cap)
    {
    int days=1,load=0;
        for(int i=0;i<weights.size();i++)
        {
            if(weights[i]+load>cap)
            {
                days=days+1;
                load=weights[i];
            }
            else
            {
                load+=weights[i];
            }
        }
        return days;
    }
    
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        int mini=*max_element(weights.begin(),weights.end());
        int maxi=accumulate(weights.begin(),weights.end(),0);
      
        
        // for(int i=mini;i<=maxi;i++)
        // {
        //     int daysreq=f(weights,i);
        //     if(daysreq<=days)
        //     {
        //         return i;
        //     }
        // }
        // return -1;
       int low=mini;
        int high=maxi;
        while (low <= high) {
        int mid = (low + high) / 2;
        int numberOfDays = f(weights, mid);
        if (numberOfDays <= days) {
            //eliminate right half
            high = mid - 1;
        }
        else {
            //eliminate left half
            low = mid + 1;
        }
    }
    return low;
    }
};