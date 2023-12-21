class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {
        int n=v.size(),k=n-1,j=1;
        set<vector<int>> st;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(i>0 && (v[i]==v[i-1])) continue;
            j=i+1;k=n-1;
            while(j<k){
                if(v[i]+v[j]+v[k]<0) j++;
                else if(v[i]+v[j]+v[k]>0) k--;
                else{
                    vector<int> ans{v[i],v[j],v[k]};
                    st.insert(ans); 
                    j++;
                    k--;
                    while(j<n&&v[j]==v[j-1]) j++;
                    while(k>=0&&v[k]==v[k+1]) k--;
                }
               
            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};