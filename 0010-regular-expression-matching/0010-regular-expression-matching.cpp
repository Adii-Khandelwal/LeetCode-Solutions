class Solution {
public:
    bool f(string &s,string &p,int i,int j)
    {
        if(j==p.size())
        {
            return i==s.size();
        }
        
        bool firstM= (i<s.size() and (s[i] == p[j] || p[j]=='.'));
                      
        if(j+1<p.length() && p[j+1]=='*')
        {
            return (f(s,p,i,j+2)|| (firstM && f(s,p,i+1,j) ));
        }
        else
        {
            return (firstM && f(s,p,i+1,j+1));
        }
        
        
    }
    
    
    
    bool isMatch(string s, string p) {
        return f(s,p,0,0);
    }
};