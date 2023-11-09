class Solution {
public:
    int MOD=1e9+7;
    int countHomogenous(string s) {
        
//         map<string,int>mpp;
        
//         for(int i=0;i<s.size();i++)
//         {
//             for(int j=i;j<s.size();j++)
//             {
//                 if(s[i]==s[j])
//                 {  
//                     // cout << s.substr(i,j-i+1)<< endl; 
                    
//                     mpp[s.substr(i,j-i+1)]++%mod;
                    
//                 }    
//                 else
//                 {
//                     break;
//                 }
//             }
//         }
//             int cnt=0;
//         for(auto it:mpp)
//         {
//             // cout<< it.first << " "<< it.second<<endl;
//             cnt+=it.second%mod;
//         }
//         return cnt%mod;
       int ans = 0;
        int currStreak = 0;
        int MOD = 1e9 + 7;
        
        for (int i = 0; i < s.size(); i++) {
            if (i == 0 || s[i] == s[i - 1]) {
                currStreak++;
            } else {
                currStreak = 1;
            }
            
            ans = (ans + currStreak) % MOD;
        }
        
        return ans;
        
    }
};