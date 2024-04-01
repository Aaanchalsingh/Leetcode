class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0,n=s.size();bool f=false;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                f=true;
                count++;
            }
            else if(f) return count;
        }
        return count;
    }
};