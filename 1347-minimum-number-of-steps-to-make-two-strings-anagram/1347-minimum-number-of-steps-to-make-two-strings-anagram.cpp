class Solution {
public:
    int minSteps(string s, string t) {
       
     int cnt=0;
        
        int alpha[26]={0};
        
        for(int i=0;i<s.size();i++)
        {
            alpha[s[i]-'a']++;
            alpha[t[i]-'a']--;
        }
        
        for(auto it:alpha)
        {
            if(it>0)
                cnt+=it;
                
        }
        
        return cnt;
        
        
        
    }
};