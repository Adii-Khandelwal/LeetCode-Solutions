class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty())return {};
        
     vector<string> pad = {"", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"};
        
        vector<string> res{""};
        
        for(auto d:digits)
        {
            vector<string> temp;
            for(auto p:pad[d-'0'])
            {
                for(auto i:res)
                {
                    temp.push_back(i+p);
                }
            }
            res.swap(temp);
        }
        return res;
        
        
        
        
    }
};