class Solution {
public:
    void dfs(int i,int j,vector<vector<char>>& v){
        int m=v.size(),n=v[0].size();
        if(i>=0&&i<m&&j>=0&&j<n&&v[i][j]=='1'){
            v[i][j]='0';
            dfs(i+1,j,v);
            dfs(i,j+1,v);
            dfs(i-1,j,v);
            dfs(i,j-1,v);
        }
    }
    int numIslands(vector<vector<char>>& v) {
        int m=v.size(),n=v[0].size(),c=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]=='1'){
                   dfs(i,j,v);
                   c++;
                }
            } 
        }
        return c;
    }
};