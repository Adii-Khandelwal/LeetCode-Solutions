class DisjointSet {
    vector<int> rank, parent, size; 
public: 
    DisjointSet(int n) {
        rank.resize(n+1, 0); 
        parent.resize(n+1);
        size.resize(n+1); 
        for(int i = 0;i<=n;i++) {
            parent[i] = i; 
            size[i] = 1; 
        }
    }

    int findUPar(int node) {
        if(node == parent[node])
            return node; 
        return parent[node] = findUPar(parent[node]); 
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUPar(u); 
        int ulp_v = findUPar(v); 
        if(ulp_u == ulp_v) return; 
        if(rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v; 
        }
        else if(rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u; 
        }
        else {
            parent[ulp_v] = ulp_u; 
            rank[ulp_u]++; 
        }
    }

    void unionBySize(int u, int v) {
        int ulp_u = findUPar(u); 
        int ulp_v = findUPar(v); 
        if(ulp_u == ulp_v) return; 
        if(size[ulp_u] < size[ulp_v]) {
            parent[ulp_u] = ulp_v; 
            size[ulp_v] += size[ulp_u]; 
        }
        else {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v]; 
        }
    }

    int getSizeOfComponent(int node){
        return size[findUPar(node)];
    }
}; 
class Solution {
private:
    bool isValid(int x, int y, int n){
        return x>=0 and y>=0 and x<n and y<n;
    }
    int flatten(int x, int y, int n){
        return x*n + y;
    }
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size(), maxComponentSize=0;
        DisjointSet ds(n*n);
        int dx[4] = {-1, 0, 1, 0};
        int dy[4] = {0, 1, 0, -1};
        int maxSize = 0;
        // 1. Add all nodes into DS
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                if(grid[i][j]==0) continue;
                for(int k = 0; k<4; ++k){
                    int x = i + dx[k], y = j + dy[k];
                    if(isValid(x, y, n) and grid[x][y]){
                        // (i, j) and (x, y) belong to the same component
                        ds.unionBySize(flatten(x, y, n), flatten(i, j, n));
                    }
                }
                 maxSize = max(maxSize, ds.getSizeOfComponent(flatten(i, j, n)));
            }
        }

        // 2. Now we have all the components, flip 0 with 1 and find the max island
          for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                if(grid[i][j]==1) continue;
                unordered_set<int> connectedNodes; 
                for(int k = 0; k<4; ++k){
                    int x = i + dx[k], y = j + dy[k];
                    if(isValid(x, y, n) and grid[x][y]==1){
                        // Take (x, y) in the same component
                        connectedNodes.insert(ds.findUPar(flatten(x, y, n)));
                    }
                }
                int currentComponentSize=1;

                // Get the size of all the adj component
                for(int adj: connectedNodes){
                    currentComponentSize += ds.getSizeOfComponent(adj);
                }
                maxSize = max(maxSize, currentComponentSize);
            }
        }

        return maxSize;

    }
};