class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& v1, vector<int>& v2) {
        stack<int> st;vector<int> ans(v1.size(),-1);
        map<int,int> mp;
        for(int i=0;i<v2.size();i++){
            while(!st.empty()&&v2[i]>st.top()){
                mp[st.top()]=v2[i];
                st.pop();
            }
            st.push(v2[i]);
        }
        for(int i=0;i<v1.size();i++){
            if(mp.find(v1[i])!=mp.end()) ans[i]=mp[v1[i]];
        }
        return ans;
    }
};