class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string t="",ans="";
        for(int i=0;i<n;i++){
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
                t+=tolower(s[i]);
            }
            else if(s[i]>='0'&&s[i]<='9'){
                t+=s[i];
            }
        }
        ans=t;
        reverse(t.begin(),t.end());
        return ans==t;
    }
};