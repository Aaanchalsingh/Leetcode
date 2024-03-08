class Solution {
public:
    int dfs(int root, int par, int dist, vector<vector<pair<int, int>>>& graph,int& signalSpeed) {
        int count = (dist % signalSpeed)? 0: 1; 
        for (auto [n, w] : graph[root]) {
            if (n != par)
                count += dfs(n, root, dist + w, graph, signalSpeed);
        }
        return count;
    }

    vector<int> countPairsOfConnectableServers(vector<vector<int>>& v,int signalSpeed) {
        vector<vector<pair<int, int>>> graph(v.size() + 1);
        for (auto x : v) {
            graph[x[0]].push_back({x[1], x[2]});
            graph[x[1]].push_back({x[0], x[2]});
        }

        vector<int> ans;
        for (int i = 0; i <= v.size();++i) { 
            int nodeCount = 0, res = 0;
            for (auto [n, w] :graph[i]) { 
                int t = dfs(n, i, w, graph, signalSpeed);
                res += nodeCount * t;
                nodeCount += t; 
            }
            ans.push_back(res);
        }
        return ans;
    }
};