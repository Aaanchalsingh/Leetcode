class Solution {
public:
    void dfs(int i, int j,vector<vector<int>>& image, int color,int sr){
        int n=image.size();
        int m=image[0].size();
        if(i<0||j<0) return;
        if(i>=n||j>=m) return ;
        if(image[i][j]!=sr) return;
        image[i][j]=color; 
        dfs(i-1,j,image,color,sr);
        dfs(i+1,j,image,color,sr);
        dfs(i,j-1,image,color,sr);
        dfs(i,j+1,image,color,sr);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(sr>=0&&sr<image.size()&&sc>=0&&sc<image[0].size()){
            if(image[sr][sc]==color) return image;
            dfs(sr,sc,image,color,image[sr][sc]);
        }
        return image;
    }
};