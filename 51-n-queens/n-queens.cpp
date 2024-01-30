class Solution {
public:
    vector<vector<string>> v;
    bool isSafe(vector<vector<int>> &board, int row, int col, int n)
    {
        int i = 0, j = 0;
        for (int i = 0; i < row; i++)
        {
            if (board[i][col] == 1)
                return false;
        }
        // DIAGNOL
        i = row - 1;
        j = col - 1;
        while (i >= 0 && j >= 0)
        {
            if (board[i][j] == 1)
                return false;
            i--;
            j--;
        }
        // ANTI DIAGONAL
        i = row + 1;
        j = col - 1;
        while (i < n && j >= 0)
        {
            if (board[i][j] == 1)
                return false;
            i++;
            j--;
        }
        i = row - 1;
        j = col + 1;
        while (i >= 0 && j < n)
        {
            if (board[i][j] == 1)
                return false;
            i--;
            j++;
        }

        return true;
    }
    void print(vector<vector<int>> &board)
    {
        vector<string> temp;
        string str="";
        for (auto row : board)
        {
            str="";
            for (auto ele : row){
                if(ele==1) str+="Q";
                else str+=".";
            }
            temp.push_back(str);
        }
            v.push_back(temp);
    }
    void solve(vector<vector<int>> &board, int i, int n)
    {
        if (i == n)
        {
            print(board);
            return;
        }
        for (int j = 0; j < n; j++)
        {
            if (isSafe(board, i, j, n))
            {
                board[i][j] = 1;
                solve(board, i + 1, n);
                board[i][j] = 0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int>> board(n, vector<int>(n, 0));
        solve(board, 0, n);
        return v;
    }
};