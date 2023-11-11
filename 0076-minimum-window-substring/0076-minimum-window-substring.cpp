class Solution {
public:
    string minWindow(string s, string t) {
        
    map<char,int>mpp;
        for(auto s:t)
        {
            mpp[s]++;
        }
        
        int start=0,end=0,d=INT_MAX;
        int cnt=t.size();
        int here;
        while(end<s.size())
        {
            if(mpp[s[end++]]-->0)cnt--;
            while(cnt==0)
            {
                if(d>end-start)
                d=end-(here=start);
                if(mpp[s[start++]]++==0)cnt++;
            }
        }
        return d==INT_MAX?"":s.substr(here,d);
        
        
        
        
    }
};