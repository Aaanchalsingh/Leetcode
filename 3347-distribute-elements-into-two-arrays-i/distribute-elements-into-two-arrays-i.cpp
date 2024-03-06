class Solution {
public:
    vector<int> resultArray(vector<int>& v) {
        vector<int> a1,a2;
        a1.push_back(v[0]);
        a2.push_back(v[1]);
        for(int i=2;i<v.size();i++){
            if(a1[a1.size()-1]>a2[a2.size()-1]) a1.push_back(v[i]);
            else a2.push_back(v[i]);
        }
        for(auto x:a2){
            a1.push_back(x);
        }
        return a1;
    }
};