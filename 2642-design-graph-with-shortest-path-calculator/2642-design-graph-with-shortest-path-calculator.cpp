class Graph {
public:
    vector<vector<pair<int,int>>>adj;
    
    Graph(int n, vector<vector<int>>& edges) {
        adj.resize(n);
        for(auto edge:edges)
        {
            adj[edge[0]].push_back({edge[1],edge[2]});
        }
    }
    
    void addEdge(vector<int> edge) {
           adj[edge[0]].emplace_back(edge[1], edge[2]);
    }
    
    int shortestPath(int node1, int node2) {
        
        return dijkstra(node1,node2);
        
    }
    private:
    int dijkstra(int start,int end)
    {
        int n=adj.size();
        vector<int>dist(n,INT_MAX);
        dist[start]=0;
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,start});
        while(!pq.empty())
        {
            int node=pq.top().second;
            int d=pq.top().first;
            pq.pop();
            
            if(d>dist[node])continue;
            
            if(node==end)return d;
            
            for(auto edge:adj[node])
            {
                int newnode=edge.first;
                int newd=edge.second;
                int newcost=newd+dist[node];
                
                if(newcost<dist[newnode])
                {
                    dist[newnode]=newcost;
                    pq.push({newcost,newnode});
                }
            }
        }
        return dist[end]==INT_MAX?-1:dist[end];
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */