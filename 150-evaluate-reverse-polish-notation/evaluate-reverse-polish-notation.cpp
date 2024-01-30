class Solution {
public:
    long solve(int a, int b, char Operator){
        if(Operator == '+') return a + b;
        else if(Operator == '-') return a - b;
        else if(Operator == '*') return (long)a*b;
        return a/b;
    }
    int evalRPN(vector<string>& v) {
        stack<long> st;
        int n = v.size();
        for(int i = 0; i < n; i++){
            if(v[i].size() == 1 and v[i][0] < 48){
                long y = st.top();
                st.pop();
                long x = st.top();
                st.pop();
                
                string Operator = v[i];
                long ans = solve(x, y , Operator[0]);
                st.push(ans);
            }else 
                st.push(stol(v[i]));
        }
        return st.top();
    }
};

