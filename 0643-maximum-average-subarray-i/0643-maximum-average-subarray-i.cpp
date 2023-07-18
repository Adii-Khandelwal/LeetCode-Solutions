class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        
        double ans=0.0;
        int i=0,j=0;
        double sum=0;
        double maxi=INT_MIN;
        while(j<n)
        {
            if(j-i+1<k)
            {
                sum+=nums[j];
                j++;
            }
            else
            {
                sum+=nums[j];
                maxi=max(maxi,(sum/(double)k));
                sum-=nums[i];
                i++;
              j++;
            }
        }
        return maxi;
    }
};