class Solution {
public:
     string getHint(string secret, string guess) {
        int bulls = 0, cow = 0, n = secret.size();
        vector<int> p(10,0);
        for (int i = 0; i < n; i++) {
            if (secret[i] == guess[i]) {
                secret[i] = '!';
                bulls++;
            }
            else p[guess[i]-'0']++;
        }
        for (int i = 0; i < n; i++) {
            if (isdigit(secret[i]) && p[secret[i] - '0'] > 0) {
                p[secret[i]-'0']--;
                cow++;
            }
        }
        return to_string(bulls) + "A" + to_string(cow) + "B";;
    }
};