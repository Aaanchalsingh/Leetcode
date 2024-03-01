class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n = s.size();
        int one = 0,zero=0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') one++;
            else zero++;
        }
        string k="";
        if(one>0){
            k.push_back('1');
            one--;
            while(zero--){
               k.push_back('0'); 
            }
            while(one--){
               k.push_back('1'); 
            }
        }
        reverse(k.begin(),k.end());
        return k;
    }
};





