class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // int i,j;
        // int n=prices.size();
        // int min=INT_MIN;
        // int flag=0;
        // for(i=n-1;i>=0;i--)
        //     for(j=i-1;j>=0;j--)
        //     {
        //         if(prices[i]-prices[j]>min)
        //         {min=prices[i]-prices[j];
        //         flag=1;}
        //     }
        // if(min>=0)
        // return min;
        // else return 0;
        
        //BRUTE FORCE GAVE TLE.
        
        
        int i;
        int min=INT_MAX;
        int profit=0;
        for(i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
                min=prices[i];
            
            if(prices[i]-min>profit)
                profit=prices[i]-min;
        }
        return profit;
        
        
        
        
    }
};