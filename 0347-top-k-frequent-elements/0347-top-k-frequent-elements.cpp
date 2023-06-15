class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;
        map<int,int> mpp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        
        
        
        for(auto i=mpp.begin();i!=mpp.end();i++)
        {
            q.push({i->second,i->first});
            if(q.size()>k)
                q.pop();
        }
            while(q.size()>0)
        {
            ans.push_back(q.top().second);
            q.pop();
        }
        return ans;
    }
};