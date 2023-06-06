class Solution {
public:
    int maxDepth(string s) {
        
        stack<char> st;
        
        int n=s.length();
        int cnt=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(s[i]);
                cnt++;
                
            }
            else if(s[i]==')')
            { st.pop();
             cnt--;
            }
            maxi=max(maxi,cnt);
        }
        
        return maxi;
        
    }
};