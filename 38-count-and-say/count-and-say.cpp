class Solution {
public:
    string count(string s){
        int n=s.size(),c=1;
        string ans="";
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                ans+=to_string(c)+s[i];
                c=1;
            }
            else c++;
        }
        if(s[n-1]!=s[n-2]) ans+=to_string(1)+s[n-1];
        else if(c>1) ans+=to_string(c)+s[n-1];
        return ans;
    }
    string countAndSay(int n) {
        string s="1";
        if(n>=2){
            s="11";
            n--;
        }
        while(--n){
            s=count(s);
        }
        return s;
    }
};