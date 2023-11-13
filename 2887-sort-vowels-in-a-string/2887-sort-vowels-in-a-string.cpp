class Solution {
public:
    bool vowel(char a){
        return a=='a'||a=='A'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U';
    }
    string sortVowels(string s) {
        int n=s.size(),k=0;vector<char> v;
        for(int i=0;i<n;i++){
            if(vowel(s[i])){
                v.push_back(s[i]);
                s[i]='?';
            }
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(s[i]=='?'){ 
                s[i]=v[k++];
            }
        }
        return s;
    }
};