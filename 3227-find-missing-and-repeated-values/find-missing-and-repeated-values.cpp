class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& v) {
        int n=v.size();set<int> st;int a1=-1,a2=0,sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(st.count(v[i][j])>0) a1=v[i][j];
                st.insert(v[i][j]);
                sum+=v[i][j];
            }
        }
        n=st.size()+1;
        int k=(n*(n+1))/2;
        return {a1,k-sum+a1};
    }
};