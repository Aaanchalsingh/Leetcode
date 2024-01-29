class Solution {
public:
    void solve(vector<string> v, string input, int i, vector<string>& ans,
               string output) {
        if (i == input.size()) {
            ans.push_back(output);
            return;
        }
        int a = input[i] - '0';
        if (a == 0)
            return solve(v, input, i + 1, ans, output);
        for (auto x : v[a]) {
            solve(v, input, i + 1, ans, output + x);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        vector<string> v{"","",    "abc",  "def", "ghi", "jkl",
                         "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans;
        solve(v, digits, 0, ans, "");
        return ans;
    }
};