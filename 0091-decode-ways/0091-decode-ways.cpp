class Solution {
public:
    bool check(string str)
    {
        if(str.size()==0 || str.size()>2)return false;
        if(str.size()==2 and str[0]=='0')return false;
        if(str.size() and (stoi(str)<1 or stoi(str)>26))return false;
        return true;
    }
    
   int f(int ind, string s,vector<int>&dp){
        int n=s.size();
        
        if(ind==n) return 1;
        if(dp[ind]!=-1) return dp[ind];
        int count=0;
        for(int j=ind;j<n;j++){
            
            if(!check(s.substr(ind,j-ind+1))) break;
            count+=f(j+1,s,dp);
        }
        return dp[ind]=count;
    }
    //TABULATION
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n+1,-1);
        return f(0,s,dp);}
};