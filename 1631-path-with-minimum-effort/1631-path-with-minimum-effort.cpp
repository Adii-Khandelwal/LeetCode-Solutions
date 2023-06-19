class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        int n=heights.size();
        int m =heights[0].size();
        
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> q;
        q.push({0,{0,0}});
        vector<vector<int>> dist(n,vector<int> (m,1e9));
        dist[0][0]=0;
         int dr[]={-1,0,1,0};
            int dc[]={0,1,0,-1};
        while(!q.empty())
        {
            auto it=q.top();
            q.pop();
            int diff=it.first;
            int row=it.second.first;
            int col=it.second.second;
            
           
            
            if(row==n-1 and col==m-1) return diff;
            
            for(int i=0;i<4;i++)
            {
                int newr=row+dr[i];
                int newc=col+dc[i];
                
                if(newr>=0 and newr<n and newc>=0 and newc<m )
                {
                    int newEfforts=max(abs(heights[row][col]-heights[newr][newc]),diff);
                    if(newEfforts<dist[newr][newc])
                    {
                        dist[newr][newc]=newEfforts;
                        q.push({newEfforts,{newr,newc}});
                    }
                }
            }
        }
      return 0;  
    }
};