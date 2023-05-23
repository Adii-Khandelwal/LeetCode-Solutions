class Solution {
public:
    int strStr(string haystack, string needle) {
        
     int m=haystack.length();
        int n=needle.length();
        
        for(int window=0;window<=m-n;window++)
        {
            for(int i=0;i<m;i++)
            {
                if(needle[i]!=haystack[window+i]){
                    break;
                }
                if(i==n-1)
                    return window;
            }
        }
      return -1;  
    }
};