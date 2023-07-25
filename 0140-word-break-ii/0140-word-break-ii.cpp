class Solution {
public:
    void f(string s,vector<string>&res,vector<string>&temp,unordered_set<string>&st)
    {
        if(s.size()==0)
        {
            string str="";
            for(auto it:temp)
            {
                str+=it+" ";
            }
            str.pop_back();
            res.push_back(str);
            return;
        }
        
       for(int i=0;i<s.length(); i++){
            if(st.count(s.substr(0, i+1))){
                temp.push_back(s.substr(0, i+1));
                f(s.substr(i+1), res, temp,st);
                temp.pop_back();
            }
        
        
    }}
    
    
    
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string>res, temp;
        unordered_set<string>st(wordDict.begin(), wordDict.end());
        
        f(s, res, temp,st);
        return res;
    }
};