class Solution {
public:
    string frequencySort(string s) {
        
      unordered_map<char,int> mp;
        priority_queue<pair<int,char>> pq;
        
        //count frequency of characters in string
        for(char c: s)
        {
            mp[c]++;
        }
        
        // add everything in the priority queue
        for(auto x:mp)
        {
            pq.push({x.second,x.first});
        }
        
        
        string res="";
        while(!pq.empty())
        {
            
            int freq = pq.top().first;
            char c = pq.top().second;
            
            for(int i=0;i<freq;i++){
                res += c;
            }
            pq.pop();
        }
        return res;
        
    }
};