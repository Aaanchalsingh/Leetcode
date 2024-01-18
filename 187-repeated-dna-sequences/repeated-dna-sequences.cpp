class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        set<string> st;
        int n = s.size();
        if (n < 10) return {};
        vector<string> v;
        for (int i = 0; i < n; i++) {
            string p = s.substr(i, 10);
            if (st.count(p) > 0) {
                st.erase(p);
                if(find(v.begin(),v.end(),p)==v.end()) 
                    v.push_back(p);
            }
            else st.insert(p);
        }
        return v;
    }
};