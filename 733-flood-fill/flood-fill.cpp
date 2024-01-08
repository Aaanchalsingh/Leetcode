class Solution {
public:
    void dfs(int i, int j, int row, int col, vector<vector<int>>& image,int color,int prev) {
        if (i >= 0 && j >= 0 && i < row && j < col && image[i][j] == prev) {
            image[i][j] = color;
            dfs(i + 1, j, row, col, image,color,prev);
            dfs(i - 1, j, row, col, image,color,prev);
            dfs(i, j + 1, row, col, image,color,prev);
            dfs(i, j - 1, row, col, image,color,prev);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,int color) {  
        if(sr<image.size()&&sc<image[0].size()&&image[sr][sc]!=color){
            int prev=image[sr][sc];
            dfs(sr, sc,image.size(),image[0].size(), image,color,prev);
        }
        return image;
    }
};