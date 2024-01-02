class Solution {
public:
    using ll = long long;
    ll mod = 1e9 + 7;
    ll fact[100005];

    ll power(ll a, ll b) {
        ll res = 1;
        a = a % mod;
        while (b > 0) {
            if (b & 1){
                res = (res * a) % mod;
                b--;
            }
            else{
                b = b >> 1;
                a = (a * a) % mod;
            }
        }
        return res;
    }

    int count(string s) {
        ll n = s.size(), c = 1;
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++)
            mp[s[i]]++;

        for (auto x : mp) {
            c = (c * fact[x.second]) % mod;
        }
        return c % mod;
    }

    int countAnagrams(string s) {
        ll n = s.size(), ans = 1;
        string st = "";
        fact[0] = 1;

        for (int i = 1; i < 100005; i++)
            fact[i] = (i * fact[i - 1]) % mod;

        for (int i = 0; i < n; i++) {
            if (s[i] == ' ') {
                ll si = st.size();
                ll k = (fact[si] * power(count(st), mod - 2)) % mod;
                ans = (ans * k) % mod;
                st = "";
            } else if (i == n - 1) {
                st += s[i];
                ll si = st.size();
                ll k = (fact[si] * power(count(st), mod - 2)) % mod;
                ans = (ans * k) % mod;
            } else {
                st += s[i];
            }
        }
        return ans % mod;
    }
};
