class Solution {
public:
    int passThePillow(int n, int time) {
        int i=1;bool flag=false;
        while(time--){
            if(i==1) flag=false;
            if(i==n) flag=true;
            if(!flag) i++;
            else i--;
        }
        return i;
    }
};