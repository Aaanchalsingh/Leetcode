class Solution {
public:
    vector<int> singleNumber(vector<int>& v) {
        vector<int> final;
        int ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            ans ^= v[i];
        }
        int og =ans;
        int i = 0, key = 0;
        while (ans)
        {
            if (ans & 1)
            {
                key = i;
                break;
            }
            ans = ans >> 1;
            i++;
        }
        for (int j = 0; j < v.size(); j++)
        {
            if ((v[j] >> i) & 1)
            {
                final.push_back(v[j]);
            }
        }
        ans = 0;
        for (int i = 0; i < final.size(); i++)
        {
            ans ^= final[i];
        }
        return {ans,og^ans};
    }
};