class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        vector<string>ans;
        int maxi=INT_MIN;
        for(int i=0;i<target.size();i++)
        {
            maxi=max(maxi,target[i]);
            
            
            
            
        }
        for(int i=1;i<=maxi;i++)
        {
            if(find(target.begin(),target.end(),i)!=target.end())
            {
                ans.push_back("Push");
            }
            else
            {
                ans.push_back("Push");
                ans.push_back("Pop");
            }
        }
        return ans;
        
    }
};