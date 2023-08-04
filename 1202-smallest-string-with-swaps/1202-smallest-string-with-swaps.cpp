class DisjointSet
{
    public:
    vector<int>rank,parent;

    DisjointSet(int n)
    {
        rank.resize(n+1,0);
        parent.resize(n+1,0);
        for(int i=0;i<=n;i++)
        {
            parent[i]=i;
        }

    }

    int findParent(int node)
    {
        if(node==parent[node])
        {
            return node;
        }

        return parent[node]=findParent(parent[node]);

    }

    void UnionByRank(int u,int v)
    {
        int ulp_u=findParent(u);
        int ulp_v=findParent(v);

        if(ulp_u==ulp_v)
        {
            return;
        }

        if(rank[ulp_u]<rank[ulp_v])
        {
            parent[ulp_u]=ulp_v;
        }

        else if(rank[ulp_u]>rank[ulp_v])
        {
            parent[ulp_v]=ulp_u;
        }

        else
        {
            parent[ulp_v]=ulp_u;
            rank[ulp_v]++;

        }

    }

    
};
class Solution {
public:

    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) 
    {
        int n=s.size();

        DisjointSet ds(n);// 
        
        for(auto it: pairs)
        {
            ds.UnionByRank(it[0],it[1]);      
        }
        
        unordered_map<int,priority_queue<char,vector<char>,     greater<char>>>mp; // created map(int ,min-heap)
        
// why min heap=alphabets come out in ascending order.        
        for(int i=0;i<n;i++)
        {
            //for every index of s,store char at that index in pq with parent[index] as key 
            mp[ds.findParent(i)].push(s[i]);
        }
        
        string ans="";
        for(int i=0;i<n;i++)
        {
            // for every index find their parent[index] in map and   put pq.top()(which is char) at that index in string ans
            ans+=mp[ds.parent[i]].top();

            mp[ds.parent[i]].pop();
                          
            
            
        }
        
        return ans;
        
    }
};