class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& v, vector<int>& newInterval) {
            v.push_back(newInterval);
            sort(v.begin(),v.end());
            stack<pair<int,int>> st;
            st.push({v[0][0],v[0][1]});
            
            for(int i = 1; i < v.size(); i++) {
                auto top = st.top();
                int end  = top.second;
                if(v[i][0] <= end)
                    st.top().second = max(end,v[i][1]);
                else st.push({v[i][0], v[i][1]});
            }
            vector<vector<int>> result;
            while (!st.empty()) {
                result.push_back({st.top().first, st.top().second});
                st.pop();
            }
            reverse(result.begin(), result.end());
            return result;
        }
};