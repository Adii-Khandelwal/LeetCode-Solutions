class Solution {
public:
    int reverse(int x) {
        
       long long int r=0;
        
        int k=abs(x);
        
        
        while(k>0)
        {
            r=r*10+k%10;
            k=k/10;
            
        
            
        }
        
        if(r>INT_MAX || r<INT_MIN)
            return 0;
        if(x<0)
        return -r;
        else
            return r;
        
      
    }
};