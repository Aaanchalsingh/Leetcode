class Solution {
public:
    int findDuplicate(vector<int>& v) {
        int slow=v[0],fast=v[0];bool f=false;
        while(slow!=fast||!f){
           f=true;
           slow=v[slow];
           fast=v[v[fast]];
        }
        fast=v[0];
        while(slow!=fast){
           slow=v[slow];
           fast=v[fast];
        }
        return slow;
    }
};