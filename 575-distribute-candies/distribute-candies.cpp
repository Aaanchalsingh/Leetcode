class Solution {
public:
    int distributeCandies(vector<int>& v) {
        unordered_set<int> st;
        int n=v.size(),k=0;
        for(int i=0;i<n;i++){
            if(st.count(v[i])==0) k++;
            st.insert(v[i]);
        }
        if((n/2)%(k)==0) return k;
        if((n/2)>k) return k%(n/2);
        return (n/2)%(k);
    }
};