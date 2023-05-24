class Solution {
public:
    bool isSubsequence(string s, string t) {
        
    int x=s.length();
        int y=t.length();
        int cnt=0;
        int k=0;
        for(int i=0;i<y;i++)
        {
            if(s[k]==t[i])
            {
                cnt++;
                k++;
            }
        }
        // cout << cnt;
        if(cnt==x)
            return true;
        else
            return false;
    }
};