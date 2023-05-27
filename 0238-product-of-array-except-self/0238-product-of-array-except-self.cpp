class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        
//         int n=nums.size();
//        vector<int> ans;
        
//         for(int i=0;i<n;i++)
//         {
//             int prod=1;
//             for(int j=0;j<n;j++)
//             {
//                 if(i==j)
//                     continue;
//                 else
//                 {
//                     prod*=nums[j];
//                 }
//             }
//             ans.push_back(prod);
//         }
//         return ans;
        
        int n=nums.size();
        
        vector<int> pre(n,1);
        vector<int> pos(n,1);
        
        vector<int> ans;
       // pre[0]=1;
       //  pos[n-1]=1;
        
        for(int i=1;i<n;i++)
        {
          pre[i]=pre[i-1]*nums[i-1];  
        }
        for(int i=n-2;i>=0;i--)
        {
            pos[i]=pos[i+1]*nums[i+1];
        }
        
        for(int i=0;i<n;i++)
        {
            ans.push_back(pre[i]*pos[i]);
        }
        
        return ans;
        
        
        
        
        
        
    }
};