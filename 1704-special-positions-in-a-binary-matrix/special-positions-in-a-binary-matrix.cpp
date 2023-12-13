class Solution {
public:
    int numSpecial(vector<vector<int>>& v) {
        vector<int> a(v.size(),0);
        vector<int> b(v[0].size(),0);
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[0].size();j++){
                if(v[i][j]==1){
                   a[i]++;
                   b[j]++;
                }
            } 
        } 
        int m=a.size(),n=b.size(),c=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i]==1&&b[j]==1){
                    if(v[i][j]==1)c++;
                }
            }
        }
        return c;
    }
};