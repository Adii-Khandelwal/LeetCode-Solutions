class Solution {
public:
    int f(int n,int ind)
    {
        if(n==0 or ind==0)return 1;
        
        
        if(ind > n) return f(n, ind - 1);
        return max(ind*f(n-ind,ind),f(n,ind-1));
        
    }
    
    
    
    int integerBreak(int n) {
        return f(n,n-1);
        
    }
};