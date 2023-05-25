class Solution {
public:
    int lengthOfLastWord(string s) {
        
        
        int tail=s.length()-1;
        int cnt=0;
        while(tail>=0 && s[tail]==' ')
            tail--;
        while(tail>=0 && s[tail]!=' ') 
        {
            
            
                tail--;
                cnt++;

            
            
            
        }
        
        return cnt;
    }
};