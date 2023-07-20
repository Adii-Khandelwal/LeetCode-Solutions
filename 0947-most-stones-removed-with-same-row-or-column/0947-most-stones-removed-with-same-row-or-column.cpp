class DisjointSet {
public:
    vector<int> parent, size;
    DisjointSet(int n) {
        parent.resize(n + 1);
        size.resize(n + 1);

        for (int i = 0; i <= n; ++i) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int findPar(int node) {
        if (node == parent[node]) return node;
        return parent[node] = findPar(parent[node]);
    }

    void unionBySize(int u, int v) {
        int up = findPar(u);
        int vp = findPar(v);
        if (up == vp) return;
        if (size[up] > size[vp]) {
            parent[vp] = up;
            size[up] += size[vp];
        } else {
            parent[up] = vp;
            size[vp] += size[up];
        }
    }
};
class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int n = 0;
        int m = 0;
        for (auto &s : stones) {
            n = max(n, s[0]);
            m = max(m, s[1]);
        }

        DisjointSet ds(n + m + 1);
        unordered_map<int, int> hashmap;

        for (auto &s : stones) {
            int row = s[0];
            int col = s[1] + n + 1;
            ds.unionBySize(row, col);
            hashmap[row] = 1;
            hashmap[col] = 1;
        }

        int cnt = 0;
        for (auto &it : hashmap) {
            if (ds.findPar(it.first) == it.first) cnt++;
        }

        return stones.size() - cnt;
    }
};