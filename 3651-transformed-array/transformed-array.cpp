class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& v) {
        int n = v.size();
        vector<int> result(n,0);
        for(int i=0;i<n;i++){
            if(v[i]<0){
                result[i]=v[(n+(i+v[i])%n)%n];
            }
            else result[i]=v[(v[i]+i)%n];
        }
        return result;
    }
};