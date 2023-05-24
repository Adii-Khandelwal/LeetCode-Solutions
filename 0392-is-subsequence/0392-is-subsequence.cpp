class Solution {
public:
    bool issub(string s, string t,int m, int n)
    {
        if(m==0)
            return true;
        if(n==0)
            return false;
        
        if(s[m-1]==t[n-1])
            return issub(s,t,m-1,n-1);
        else
            return issub(s,t,m,n-1);
        
        
        
        
        
    }
    
    bool isSubsequence(string s, string t) {
        
    int x=s.length();
        int y=t.length();
    //     int cnt=0;
    //     int k=0;
    //     for(int i=0;i<y;i++)
    //     {
    //         if(s[k]==t[i])
    //         {
    //             cnt++;
    //             k++;
    //         }
    //     }
    //     // cout << cnt;
    //     if(cnt==x)
    //         return true;
    //     else
    //         return false;
        
        
        if(issub(s,t,x,y))
            return true;
        return false;
        
        
        
    }
};