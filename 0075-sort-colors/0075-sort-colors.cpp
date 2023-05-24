class Solution {
public:
    void sortColors(vector<int>& nums) {
       
        int n=nums.size();
        
        int zero=0,one=0,two=0;
        
        for(int i=0;i<n;i++)
        {
            
            if(nums[i]==0)
                zero++; 
            if(nums[i]==1)
                one++;
            if(nums[i]==2)
                two++;
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            
            if(cnt<zero)
                nums[i]=0;
            if(cnt >= zero && cnt<zero+one)
                nums[i]=1;
            
            if(cnt>=zero+one)
                nums[i]=2;
            cnt++;
        }
    
    
    
    
    }
};