class Solution {
public:
    int longestSubstring(string s, int k) {
        
       int n=s.length();
        
        if(n==0 or k>n)return 0;
        if(k<=1)return n;
        unordered_map<char,int> mpp;
    for(auto i:s)mpp[i]++;
        
    int l=0;
        while(l<n && mpp[s[l]]>=k)l++;
        
        if(l>=n-1)return l;
        
        int l1=longestSubstring(s.substr(0,l),k);
        while(l<n && mpp[s[l]]<k)l++;
        int l2= (l<n) ? longestSubstring(s.substr(l),k) : 0;
        
        return max(l1,l2);
        
        
    }
};