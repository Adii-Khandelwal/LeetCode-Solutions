class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.size();
        vector<int> ans;
        map<char,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[s[i]]=i;
        }
        int start=0;
        int end;
        while(start<n)
        {
            end=mpp[s[start]];
            for(int i=start;i<=end;i++)
            {
                end=max(end,mpp[s[i]]);
            }
            ans.push_back(end-start+1);
            start=end+1;
        }
        return ans;
        
        
        
        
    }
};