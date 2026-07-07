class Solution {
public:
/**
s - cht
     i
t - chat
      j
*/

   bool isSubs(string &s, string &t){
    int i=0,j=0;

    while(i<s.size() && j<t.size()){
        if(s[i]==t[j]) i++;
        j++;
    }

    return i==s.size();
}
    bool canMakeSubsequence(string s, string t) {
        int n = s.size();
        int m = t.size();
        // if(n>m)return false;

        // for(int i=0;i<n;i++)
        // {
        //     int temp = s[i];
        //     for(char ch = 'a';ch<='z';ch++)
        //     {
        //         s[i] = ch;
        //         if(isSubs(s,t)){
        //             return true;
        //         }
        //     }
        //     s[i]=temp;
        // }
        // return false;

        vector<int>pre(n,-1),suf(n,-1);
        int j=0;
        for(int i=0;i<n;i++)
        {
            while(j<m && s[i]!=t[j])j++;
            if(j==m)break;

            pre[i]=j;
            j++;
        }
        if(pre[n-1]!=-1)return true;
         j=m-1;
        for(int i=n-1;i>=0;i--)
        {
            while(j>=0 && s[i]!=t[j])j--;
            if(j<0)break;
            suf[i]=j;
            j--;
        }

        for(int i=0;i<n;i++)
        {
            int left = ((i==0) ? -1 : pre[i-1]);
            int right = ((i==n-1) ? m : suf[i+1]);

            if(i>0 and left==-1)continue;
            if(i<n-1 && right == -1)continue;
            if(right>left+1)return true;
        }
        return false;


    }
};