class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
       int n=s1.size();
        int m=s2.size();
        if(n>m)return false;
       
        vector<int>str1(26,0);
        vector<int>str2(26,0);
        for(int i=0;i<n;i++)
        {
            str1[s1[i]-'a']++;
            str2[s2[i]-'a']++;
        }
        if(str1==str2)return true;
        
        for(int i=n;i<m;i++){
            str2[s2[i-n] - 'a']--;
            str2[s2[i] - 'a']++;
            
            if(str1 == str2) return true;
        }
        return false;
    }
};