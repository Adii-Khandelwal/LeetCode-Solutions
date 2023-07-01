class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        
        map<string,vector<string>> mpp;
        for(int i=0;i<strs.size();i++)
        {
            string s=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mpp[strs[i]].push_back(s);
        }
        
        for(auto i:mpp)
        {
            ans.push_back(i.second);
        }
                return ans;
        
       
    }
};