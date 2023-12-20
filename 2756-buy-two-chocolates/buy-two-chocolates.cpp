class Solution {
public:
    int buyChoco(vector<int>& v, int money) {
        sort(v.begin(), v.end());
        if(money>=(v[0]+v[1])) 
             return  money-(v[0]+v[1]);
        return money;   
    }
};