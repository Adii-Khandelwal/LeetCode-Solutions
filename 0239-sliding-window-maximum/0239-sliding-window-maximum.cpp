class Solution {
public:
    int maxElement(queue<int> q)
{
 
   
    if (q.empty())
        return -1;
 
   
    int maxx = INT_MIN;
 
   
    while (!q.empty()) {
   
        int temp = q.front();
   
        q.pop();
 
   
        maxx = max(maxx, temp);
    }
 
   
    return maxx;
}
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        
        // vector<int>ans;
        // int n=nums.size();
        // queue<int>q;
        // int firstmaxi=*max_element(nums.begin(),nums.begin()+k);
        // ans.push_back(firstmaxi);
        // for(int i=0;i<n;i++)
        // {
        //     if(q.size()<k)
        //     {
        //         q.push(nums[i]);
        //     }
        //     else
        //     {
        //         q.pop();
        //         q.push(nums[i]);
        //         int maxi=maxElement(q);
        //         ans.push_back(maxi);
        //     }
        // }
        // return ans;
         
        // create a priority queue (Max Heap) of pair of int
        // first of the pair is the element of the array
        // and second is the index
        priority_queue<pair<int,int>> p;
        // create a vector to store the result
        vector<int>res;
        // add all the elements in the first window to the PQ
        for(int i = 0; i < k; i++)
            p.push({arr[i],i});
        // add the max element of first window to the res vector
        res.push_back(p.top().first);
        // start iteration from the second window
        for(int i = k; i < arr.size(); i++)
        {
            // add the element into the PQ
            p.push({arr[i],i});
            // remove all the elments which are not in the current window
            // current window is from [i-k+1 , i]
            while(!(p.top().second > i-k))
                p.pop();
            // add the max element in the PQ to the res
            res.push_back(p.top().first);
        }
        // return the result
        return res;
        
        
        }
};