class Solution {
public:
    double myPow(double x, int n) {
        
        // double ans=x;
        if(n<0)
        {
            n=abs(n);
            x=1/x;
        }
        
        
        if(n==0)
            return 1;
        
        
        
        if(n==1)
            return x;
        
    
            // x=x*(x);
            if(n%2==0)
           return myPow(x*x,n/2);
            else
                return x*myPow(x*x,n/2);
        
        // return ans;
    }
};