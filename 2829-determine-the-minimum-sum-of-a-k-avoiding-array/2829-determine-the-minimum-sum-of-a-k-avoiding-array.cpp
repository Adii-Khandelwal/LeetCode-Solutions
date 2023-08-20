class Solution {
public:
    int minimumSum(int n, int k) {
        unordered_map<int,int>mp;
     int p=n;
     int sum=(n*(n+1))/2;
 	
     for(int i=1;mp.size()<p;i++)
   { 
         auto it=mp.find(k-i);
         if(it!=mp.end())
         {
             sum= sum+(n+1)-i;
             mp.erase(i);
              n++;     
         }
         else
                 mp[i]++;
     }
    
     return sum;
    }
};