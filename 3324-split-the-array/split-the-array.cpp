class Solution {
public:
    bool isPossibleToSplit(vector<int>& v) {
        vector<int> count(101,0);
        for(auto x:v) count[x]++;
        for(auto x:count){
            if(x<0 || x>2) return false;
        }
        return true;
    }
};