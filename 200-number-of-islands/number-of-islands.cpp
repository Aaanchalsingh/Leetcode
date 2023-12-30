class Solution {
public:
    void dfs(int i,int j,int r,int c,vector<vector<char>>& grid){
        if(i>=0&&i<r&&j<c&&j>=0&&grid[i][j]=='1'){
            grid[i][j]='0';
            dfs(i-1,j,r,c,grid);
            dfs(i+1,j,r,c,grid);
            dfs(i,j+1,r,c,grid);
            dfs(i,j-1,r,c,grid);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size(),c=grid[0].size(),count=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='1'){
                    dfs(i,j,r,c,grid);
                    count++;
                }
            }
        }
        return count;
    }
};