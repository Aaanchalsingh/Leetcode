class Solution {
public:
    int dfs(int root, int par, int dist, vector<vector<pair<int, int>>>& graph, int& signalSpeed) {
        int count = (dist % signalSpeed) ? 0 : 1; 
        for (const pair<int, int>& neighbor : graph[root]) {
            int n = neighbor.first;
            int w = neighbor.second;
            if (n != par)
                count += dfs(n, root, dist + w, graph, signalSpeed);
        }
        return count;
    }

    vector<int> countPairsOfConnectableServers(vector<vector<int>>& v, int signalSpeed) {
        vector<vector<pair<int, int>>> graph(v.size() + 1);
        for (const vector<int>& x : v) {
            int node1 = x[0];
            int node2 = x[1];
            int weight = x[2];
            graph[node1].push_back(make_pair(node2, weight));
            graph[node2].push_back(make_pair(node1, weight));
        }

        vector<int> ans;
        for (int i = 0; i <= v.size(); ++i) { 
            int nodeCount = 0, res = 0;
            for (const pair<int, int>& neighbor : graph[i]) { 
                int n = neighbor.first;
                int w = neighbor.second;
                int t = dfs(n, i, w, graph, signalSpeed);
                res += nodeCount * t;
                nodeCount += t; 
            }
            ans.push_back(res);
        }
        return ans;
    }
};
