class Solution {
public:
    bool solve(int i,string s,vector<string>& v,vector<int> &dp){
        if(i>=s.size()) return 1;
        if(dp[i]!=-1) return dp[i];
        string temp="";
        for(int j=i;j<s.size();j++){
            temp+=s[j];
            if(find(v.begin(),v.end(),temp)!=v.end()){
                if(solve(j+1,s,v,dp)) return dp[i]=1;
            }
        }
        return dp[i]=0;
    }
    bool wordBreak(string s,vector<string>& v) {
       vector<int> dp(s.size()+1,-1);
       return solve(0,s,v,dp);
    }
};