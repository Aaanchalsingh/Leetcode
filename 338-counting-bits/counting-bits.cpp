class Solution {
public:
    int count(int n){
        int c=0;
        while(n){
            n=n&(n-1);
            c++;
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int> v;
        v.push_back(0);
        for(int i=1;i<=n;i++) v.push_back(count(i));
        return v;
    }
};