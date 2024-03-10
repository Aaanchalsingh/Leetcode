class Solution {
public:
    vector<int> intersection(vector<int>& v1, vector<int>& v2) {
        vector<int> ans;
        set<int> st;
        int j=0;
        for(int i=0;i<v1.size();i++){
            st.insert(v1[i]);
        }
        while(j<v2.size()){
            if(st.count(v2[j])>0){
                ans.push_back(v2[j]);
                st.erase(v2[j]);
            }
            j++;
        }
        return ans;
    }
};