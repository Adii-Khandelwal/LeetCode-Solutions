class Solution {
public:

    bool isable(string s1,string s2,unordered_map<string, bool> &dp)
    {
         if(s1==s2) return dp[s1+s2]= true;
        unordered_map<char,int> strmap;
        int length=s1.size();
        if(dp.count(s1+s2))return dp[s1+s2];
        
        for(int i=0;i<length;i++)
        {
            strmap[s1[i]]++;
            strmap[s2[i]]--;
        }
        for(int i=0;i<length;i++)
        {
            if(strmap[s1[i]]!=0 )
            return dp[s1+s2]= false;
        }
        for(int i=1;i<length;i++)
        {
            if(isable(s1.substr(0,i),s2.substr(0,i),dp) && isable( s1.substr(i),s2.substr(i) ,dp)  )
            return dp[s1+s2]= true;
            if(isable( s1.substr(0,i),s2.substr(length-i),dp ) && isable( s1.substr(i),s2.substr(0,length-i),dp )  )
            return dp[s1+s2]= true;
        }
        return dp[s1+s2]= false;
    }
    
    
    
    
    bool isScramble(string s1, string s2) {
         unordered_map<string, bool> dp;
        return isable(s1,s2,dp);
        
    }
};