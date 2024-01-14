class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        long long ans=0,mod=1e9+7;
        hFences.push_back(1);
        hFences.push_back(m);
        vFences.push_back(1);
        vFences.push_back(n);
        unordered_set<int> st;
        for(int i=0;i<hFences.size();i++){
            for(int j=0;j<hFences.size();j++){
                st.insert(abs(hFences[i]-hFences[j]));
            }
        }
        for(int i=0;i<vFences.size();i++){
            for(int j=0;j<vFences.size();j++){
                if(st.count(abs(vFences[i]-vFences[j]))){
                    long long diff=abs(vFences[i]-vFences[j]);
                    ans=max(ans,diff);
                }
            }
        }
        return ans>0? (ans*ans)%mod:-1;
    }
};