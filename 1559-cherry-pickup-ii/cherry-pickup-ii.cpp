class Solution {
public:
    bool isInside(int y1, int y2, int c) {
        return (y1 >= 0 && y1 < c && y2 >= 0 && y2 < c);
    }

    int cherryPickup(vector<vector<int>>& grid) {
        int r = grid.size(), c = grid[0].size();
        vector<int> dy({-1, 0, 1});
        vector<vector<vector<int>>> dp(r + 1, vector<vector<int>>(c, vector<int>(c, 0)));
        for(int x = r - 1; x >= 0; x--) {
            for(int y1 = 0; y1 < c; y1++) {
                for(int y2 = 0; y2 < c; y2++) {
                    int currScore = (y1 == y2 ? grid[x][y1] : grid[x][y1] + grid[x][y2]);
                    for(int i = 0; i < 3; i++) {
                        int curry1 = y1 + dy[i];
                        for(int j = 0; j < 3; j++) {
                            int curry2 = y2 + dy[j];
                            dp[x][y1][y2] = max(dp[x][y1][y2], currScore + (isInside(curry1, curry2, c) ? dp[x + 1][curry1][curry2] : 0));
                        }
                    }
                }
            }
        }
        return dp[0][0][c - 1];
    }
};