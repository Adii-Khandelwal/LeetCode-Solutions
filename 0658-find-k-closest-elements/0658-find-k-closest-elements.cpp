class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        priority_queue<pair<int,int>> q;
        vector<int >ans;
        for(int i=0;i<arr.size();i++)
        {
            q.push({abs(arr[i]-x),arr[i]});
            if(q.size()>k)
                q.pop();
        }
        
        while(q.size()>0)
        {
            int a=q.top().second;
            q.pop();
            ans.push_back(a);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};