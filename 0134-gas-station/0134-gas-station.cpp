class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
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