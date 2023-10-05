class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // int n=nums.size();
        
//         vector<int> ans;
//         map<int,int> mpp;
        
//         for(int i=0;i<n;i++)
//         {
//             mpp[nums[i]]++;
//         }
        
//         for(int i=0;i<n;i++)
//         {
//             if(mpp[nums[i]]>(n/3))
//             {
//             ans.push_back(nums[i]);
//             mpp[nums[i]]=0;
            
//             } 
//         }
//         return ans;
            
            
            
      int n=nums.size();
    int cnt1=0;
        int cnt2=0;
        int n1=-1;
        int n2=-1;
        
        for(int  i=0;i<n;i++)
        {
            if(nums[i]==n1)
                cnt1++;
            else if(nums[i]==n2)
                cnt2++;
            else if(cnt1==0)
            {
                n1=nums[i];
                cnt1=1;}
            else if (cnt2==0)
            {
                n2=nums[i];
                cnt2=1;
            }
            else
            {
                cnt1--;
                cnt2--;
            }}
            
            vector<int> ans;
            cnt1=cnt2=0;
            
            int s=nums.size()/3;
            for(int i=0;i<n;i++)
            {
                if(nums[i]==n1)
                    cnt1++;
                else if(nums[i]==n2)
                    cnt2++;
                
            }
            if(cnt1>s)
                ans.push_back(n1);
            if(cnt2>s)
                ans.push_back(n2);
            
            return ans;
        
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }
};