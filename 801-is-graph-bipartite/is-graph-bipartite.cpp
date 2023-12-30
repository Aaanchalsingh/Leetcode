class Solution {
public:
    bool bfs(int i,int col,vector<int> &color,vector<vector<int>>& graph){
        queue<int> q;
        q.push(i);
        color[i]=0;
        while(!q.empty()){
            int t=q.front();
            q.pop();
            for(auto x:graph[t]){
                if(color[x]==-1){
                   color[x]=!color[t];
                   q.push(x);
                }
                else if(color[x]==color[t]) return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int r=graph.size();
        vector<int> color(r+1,-1);
        for(int i=0;i<r;i++){
            if(color[i]==-1)
                if(!bfs(i,0,color,graph)) return false;
        }
        return true;
    }
};