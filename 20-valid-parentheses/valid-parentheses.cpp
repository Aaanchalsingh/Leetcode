class Solution {
public:
    bool same(char a,char b){
        if(a=='(' && b==')') return true;
        if(a=='[' && b==']') return true;
        if(a=='{' && b=='}') return true;
        return false;
    }
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{') st.push(s[i]);
            else if(st.size()>0&&same(st.top(),s[i])){
                if(st.size()==0) return false;
                st.pop();
            }
            else return false;
        }
        if(st.empty()) return true;
        return false;
    }
};