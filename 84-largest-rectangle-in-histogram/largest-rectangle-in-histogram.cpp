class Solution {
public:
    int largestRectangleArea(vector<int>& v) {
        int n=v.size(),ans=0;
        stack<int> st;
        for(int i=0;i<=n;i++){
            while(!st.empty()&&(i==n||v[st.top()]>=v[i])){
                int height=v[st.top()];
                st.pop();
                int width=0;
                if(st.empty()) width=i;
                else width=i-st.top()-1;
                ans=max(ans,height*width);
            }
            st.push(i);
        }
        return ans;
    }
};