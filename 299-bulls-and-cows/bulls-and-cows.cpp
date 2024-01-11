class Solution {
public:
     string getHint(string secret, string guess) {
        string ans = "";
        int bulls = 0, cow = 0, n = secret.size();
        unordered_map<char, int> p;
        for (int i = 0; i < n; i++) {
            if (secret[i] == guess[i]) {
                secret[i] = '@';
                bulls++;
            }
            else p[guess[i]]++;
        }
        for (int i = 0; i < n; i++) {
            if (p.count(secret[i])) {
                if (p[secret[i]] > 0) {
                    cow++;
                    p[secret[i]]--;
                }
            }
        }
        ans = to_string(bulls) + "A" + to_string(cow) + "B";
        return ans;
    }
};