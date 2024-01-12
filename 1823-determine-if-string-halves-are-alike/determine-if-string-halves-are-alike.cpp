class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size(),c1=0,c2=0;
        for(int i=0;i<n/2;i++){
            char x=s[i];
            if (x == 'a' || x == 'e' || x == 'i' || x == 'o'|| x == 'u' || x == 'A' || x == 'E' || x == 'I'|| x == 'O' || x == 'U')
        c1++;
        }
        for(int i=n/2;i<n;i++){
            char x=s[i];
            if (x == 'a' || x == 'e' || x == 'i' || x == 'o'|| x == 'u' || x == 'A' || x == 'E' || x == 'I'|| x == 'O' || x == 'U')
        c2++;
        }
        return c1==c2;
    }
};