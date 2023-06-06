class Solution {
public:
    bool rot(string s, string goal , int rot)
    {
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=goal[(i+rot)%s.length()])
                return false;
        }
        return true;
    }
    
    
    
    bool rotateString(string s, string goal) {
        
       if(s.empty())
           return false;
        
        if(s.length()!=goal.length())
            return false;
        
        for(int i=0;i<s.length();i++)
        {
            if(rot(s,goal,i))
                return true;
        }
       return false; 
    }
    
     
    
    
    
    
};