class Solution {
public:
    bool dfs(int i,int col,vector<int> &color,vector<vector<int>>& graph){
        color[i]=col;
        for(auto x:graph[i]){
            if(color[x]==-1){
               if(!dfs(x,!col,color,graph)) return false;
            }
            else if(color[x]==col) return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int r=graph.size();
        vector<int> color(r+1,-1);
        for(int i=0;i<r;i++)
            if(color[i]==-1){
                if(!dfs(i,0,color,graph)) return false;
            
        }
        return true;
    }
};