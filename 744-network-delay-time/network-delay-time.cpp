class Solution {
public:
    int networkDelayTime(vector<vector<int>>& edges, int V, int k) {
        vector<int> distance(V,1e9);
        distance[k-1]=0;
        for(int i=0;i<V-1;i++){
            for(auto x:edges){
                int sr = x[0]-1;
                int des= x[1]-1;
                int dis= x[2];
                if(distance[sr]!=1e9&&distance[sr]+dis<distance[des]){
                    distance[des]=distance[sr]+dis;
                }
            }
        }
        sort(distance.begin(),distance.end(),greater<int>());
        if(distance[0]==1e9) return -1;
        return distance[0];
    }
};