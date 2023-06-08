class Solution {
public:
    int expressiveWords(string s, vector<string>& words) {
        
        int res=0;
        
        for(auto &w:words)
        if(w.size()<=s.size())
        { int i,j;
            for(i=0, j=0;j<s.size();j++)
            {
                if(w[i]==s[j])
                    i++;
                else if(j>0 && s[j]==s[j-1] && s[j]==s[j+1]);
                else if(!(j>1 && s[j]==s[j-1] && s[j]==s[j-2]))
                    break;
            }   
            if(i==w.size() && j==s.size())
                res++;
        }
          
            
        
        return res;
        
    }
};