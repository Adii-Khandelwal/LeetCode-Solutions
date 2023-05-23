class Solution {
public:
    bool isHappy(int n) {
        
        unordered_map<int,int> mpp;
        
        while(n!=1)
        {
            if(mpp.find(n)==mpp.end())
                mpp[n]++;
            else
                return false;
            
            int sum=0;
            while(n>0)
            {
                sum+=pow(n%10,2);
                n=n/10;
            }
            n=sum;
        }
        
return true;
        
       
        
    }
};