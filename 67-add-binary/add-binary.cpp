class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i=a.size()-1,j=b.size()-1,value=0,carry=0;
        while(i>=0 || j>=0 || value){
            if(i>=0){
               value+=a[i]-'0';
               i--;
            }
            if(j>=0){
                value+=b[j]-'0';
                j--;
            }
            ans+=value%2+'0';
            value=value/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};