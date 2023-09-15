class Solution {
public:
    int findParent(int u, vector < int > &parent){
        if(u == parent[u])
            return u;
        parent[u] = findParent(parent[u], parent);
        return parent[u];
    }
    
    void unionn(int u, int v, vector < int > &parent, vector < int > &rank){
         u = findParent(u, parent);
         v = findParent(v, parent);
        
        if(rank[u] < rank[v])
            parent[u] = v;
        else if(rank[v] < rank[u])
            parent[v] = u;
        else{
            parent[v] = u;
            rank[u] ++;
        }
    }
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        int nodes = points.size();
        vector < pair < int, pair <int,int> > > vect;
        
        for(int i = 0; i < nodes; i++){
            for(int j = i+1; j < nodes; j++){
                vect.push_back({abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]), {i,j}});
            }
        }
        
        sort(vect.begin(), vect.end());
        vector < int > parent(nodes);
        
        for(int i = 0; i < nodes; i++){
            parent[i] = i;
        }
        vector < int > rank(nodes, 0);
        
        int cost = 0;
        
        for(auto it : vect){
            if(findParent(it.second.first, parent) != findParent(it.second.second, parent)){
                cost += it.first;
                unionn(it.second.first, it.second.second, parent, rank);
            }
        }
        return cost;  
    }
};