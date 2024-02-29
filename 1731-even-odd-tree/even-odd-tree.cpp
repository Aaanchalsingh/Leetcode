class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> v;
        if (!root)
            return true;
        vector<int> ans;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            while (n--) {
                TreeNode* p = q.front();
                q.pop();
                ans.push_back(p->val);
                if (p->left)
                    q.push(p->left);
                if (p->right)
                    q.push(p->right);
            }
            v.push_back(ans);
            ans.clear();
        }
        for (auto x : v) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }
        int n = v.size();

        for (int i = 0; i < n; i++) {
            if (i & 1) {
                if (v[i][0] & 1)
                    return false;

                for (int j = 1; j < v[i].size(); j++) {
                    if ((v[i][j] >= v[i][j - 1]) || (v[i][j] & 1) ||
                        (v[i][j - 1] & 1))
                        return false;
                }

            } else {
                if (v[i][0] % 2 == 0)
                    return false;
                for (int j = 1; j < v[i].size(); j++) {
                    if ((v[i][j] <= v[i][j - 1]) || (v[i][j] % 2 == 0) ||
                        (v[i][j - 1] % 2 == 0))
                        return false;
                }
            }
        }
        return true;
    }
};