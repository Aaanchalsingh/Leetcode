const int mod = 1e9 + 7;
class Mat {
public:
    int size;
    vector<vector<int>> matrix;
    Mat(int s) {
        size = s;
        matrix = vector<vector<int>>(size, vector<int>(size, 0));
    }
    void print() {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++)
                cout << matrix[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }
    void identity() {
        for (int i = 0; i < size; i++)
            matrix[i][i] = 1;
    }
    Mat operator+(Mat B) {
        Mat res = Mat(size);
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                res.matrix[i][j] = matrix[i][j] + B.matrix[i][j];
            }
        }
        return res;
    }
    Mat operator*(Mat B) {
        Mat res = Mat(size);
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                for (int k = 0; k < size; k++)
                    res.matrix[i][j] += (matrix[i][k] * B.matrix[k][j]) % mod;
            }
        }
        return res;
    }

    // O(n^3)
    Mat operator*(int B) {
        Mat res = Mat(size);
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++)
                res.matrix[i][j] += (matrix[i][j] * B) % mod;
        }
        return res;
    }

    // O(log(b)*(2^3))
    Mat operator^(int b) {
        Mat a(*this);
        Mat res(size);
        res.identity();
        while (b) {
            if (b & 1)
                res = res * a;
            a = a * a;
            b >>= 1;
        }
        return res;
    }
};
class Solution {
public:
    int fib(int n) {
        if (n <= 1)
            return n;
        Mat T(2);
        T.matrix = {{1, 1}, {1, 0}};
        T = T ^ (n - 1);
        return T.matrix[0][0];
    }
};