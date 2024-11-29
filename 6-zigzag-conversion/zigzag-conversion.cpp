class Solution {
public:
    string convert(string s, int n) {
        if(n==1) return s;
        vector<string> v(n+1,"");
        string ans="";
        int i=0,j=0,dir=-1;
        while(j<s.size()){
            if(i==n-1 || i==0) dir*=-1;
            v[i]+=s[j];
            if(dir==-1) i--;
            else i++;
            j++;
        }
        for(int i=0;i<n;i++)
            ans+=v[i];
        return ans;
        
    }
};