class Solution
{
    public:
        vector<vector < int>> kClosest(vector<vector < int>> &points, int k)
        {

            priority_queue<pair<int, pair<int, int>>> pq;
            for (int i = 0; i < points.size(); i++)
            {
                long long int temp = (points[i][0]) *(points[i][0]) + (points[i][1]) *(points[i][1]);
                pq.push({ temp,
                    {
                        points[i][0],
                        points[i][1]
                    } });
                if (pq.size() > k) pq.pop();
            }
            vector<vector < int>> ans;
            while (!pq.empty())
            {
                auto x = pq.top().second;
                pq.pop();
                ans.push_back({ x.first,
                    x.second });
            }
            return ans;
        }
};