class Solution {
public:
    int titleToNumber(string alpha) {
        int counter=0;
        for(char c:alpha){
            int d =c-'A'+1;
            counter=counter*26+d;

        }
        return counter;
    }
};