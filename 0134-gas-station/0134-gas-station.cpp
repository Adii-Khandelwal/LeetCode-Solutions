class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // int n = gas.size();
        // for(int i = 0; i < n; i++){
        //     int totalFuel = 0;
        //     int Count = 0, j = i;
        //     while(Count < n){
        //         totalFuel += gas[j % n] - cost[j % n];
        //         if(totalFuel < 0) break; // whenever we reach -ve
        //         Count++;
        //         j++;
        //     }
        //     if(Count == n && totalFuel >= 0) return i; // cover all the stops & our fuel left is 0 or more than that
        // }
        // return -1;
        
        
        
        
        
        //////////////////////////
        int n=gas.size();
        
        int asum=0;
        int bsum=0;
        
        for(int i=0;i<n;i++)
        {
            asum+=gas[i];
            bsum+=cost[i];
        }
        
        if(bsum>asum)
            return -1;
        
        
        int pos=0;
        int ans=0;
        int sum=0;
        while(pos<n)
        {
            sum+=gas[pos]-cost[pos];
            if(sum<0)
            {
                ans=pos+1;
                ans%=n;
                sum=0;
                
                
            }
            pos+=1;
        }
        return ans;
    }
};