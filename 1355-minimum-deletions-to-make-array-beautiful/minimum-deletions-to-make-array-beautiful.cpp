class Solution {
public:
    int minDeletion(vector<int>& v) {
        int n = v.size(), count = 0,i=0;
        if (n == 1)
            return 1;
        while (i < v.size() - 1) {
            if (v[i] == v[i + 1]) {
                count++;
                i++;
            }
            else i+=2;
        }
        if(i==v.size()-1) count++;
        return count;
    }
};