class Solution {
public:
    int solve(vector<int>& jd,int n,int ind, int d,vector<vector<int>>&dp)
    {
        if(d==1)
        {
            return *max_element(jd.begin()+ind,jd.end());
        }
        if(dp[ind][d]!=-1)return dp[ind][d];
        int maxD=INT_MIN;
        int finalR=INT_MAX;
        
        for(int i=ind;i<=n-d;i++)
        {
            maxD=max(maxD,jd[i]);
            
           int  result=maxD+solve(jd,n,i+1,d-1,dp);
            finalR=min(finalR,result);
        }
        return dp[ind][d]= finalR;
    }
    
    
    int minDifficulty(vector<int>& jd, int d) {
        
//         if(d>jd.size())
//             return -1;
//         if(d==jd.size())
//             return accumulate(jd.begin(),jd.end(),0);
        
        //(You want to schedule a list of jobs in d days. Jobs are dependent (i.e To work on the ith job, you have to finish all the jobs j where 0 <= j < i).)
//      
        // sort(jd.begin(),jd.end());   //cant sort
//         int sum=0;
//         for(int i=0;i<d-1;i++)
//         {
//             sum+=jd[i];
//         }
        
//         sum+=jd[jd.size()-1];
//         return sum;
        
        
         if(d>jd.size())
            return -1;
        if(d==jd.size())
            return accumulate(jd.begin(),jd.end(),0);
        int n=jd.size();
        vector<vector<int>>dp(301,vector<int>(11,-1));
        return solve(jd,n,0,d,dp);
    }
};