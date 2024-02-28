class Solution {
public:
    string makeup(int target,map<int, string>& mp) {
        string ans = "";
        auto it = mp.upper_bound(target);
        while (it != mp.begin()) {
            --it;
            int cur = it->first;
            while (cur <= target) {
                ans += it->second;
                target -= cur;
            }
        }
        return ans;
    }

    string intToRoman(int num) {
        int k=0;
        map<int, string> mp = {
            {1, "I"},
            {4, "IV"},
            {5, "V"},
            {9, "IX"},
            {10, "X"},
            {40, "XL"},
            {50, "L"},
            {90, "XC"},
            {100, "C"},
            {400, "CD"},
            {500, "D"},
            {900, "CM"},
            {1000, "M"}
        };
        
        string ans="";
        ans=makeup(num, mp);
        return ans;
    }
};
