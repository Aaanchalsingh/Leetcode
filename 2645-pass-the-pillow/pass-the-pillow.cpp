class Solution {
public:
    int passThePillow(int n, int time) {
        int i=1,ind=0; bool flag=false;
        int k=0;
        while(k<time){
            if(i==1) flag=false;
            if(i==n) flag=true;
            if(!flag) i++;
            else i--;
            k++;
        }
        return i;
    }
};