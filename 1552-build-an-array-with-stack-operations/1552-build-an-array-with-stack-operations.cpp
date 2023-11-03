class Solution {
public:
    vector<string> buildArray(vector<int>& t, int n) {
        vector<string> v;
        int j=0;
        for(int i=1;i<=n;i++){
            if(t[j]==i) {
                v.push_back("Push");
                j++;
                if(j==t.size()) break;
            }
            else{
                v.push_back("Push");
                v.push_back("Pop");
            }
        }
        return v;
    }
};