class Solution {
public:
    void trimWhitespaces(string &s){
        int n= s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ') break;
            s.erase(i,1);
            i--;
        }
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' ') break;
            s.erase(i,1);
        }
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                int j=i+1;
                while(s[j]==' '){
                    s.erase(j,1);
                    cout<<"here";
                }
                i=j;
            }
        }
        cout<<"["<<s<<"]";
    }
    string reverseWords(string s) {
        int n = s.size(),start=0,last=0;
        trimWhitespaces(s);
         reverse(s.begin(),s.end());
        for(int i = 0;i < n;i++){
            if(s[i] == ' '){
                reverse(s.begin()+start,s.begin()+i);
                start=i+1;
            }
        }
        reverse(s.begin()+start,s.end());
        return s;
    }
};