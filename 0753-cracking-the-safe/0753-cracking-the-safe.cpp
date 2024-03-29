class Solution {
public:
    string crackSafe(int n, int k) {
        
        unordered_map<string,int>mpp;
        string ans;
        for(int i=0;i<n-1;i++)
        {
            ans+="0";
        }
        
        for(int i=0;i<pow(k,n);i++)
        {
            string temp=ans.substr(ans.size()-n+1,n-1);
            mpp[temp]=(mpp[temp]+1)%k;
            ans.push_back('0'+mpp[temp]);
        }
        return ans;
        
        
        }
};