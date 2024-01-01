class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        reverse(v.begin(),v.end());
        int n=v.size(),carry=0;
        for(int i=0;i<n;i++){
            v[i]+=carry;
            if(i==0) v[i]++;
            if(v[i]==10){
                v[i]=0;
                carry=1; 
            }
            else carry=0;
        }
        if(carry) v.push_back(1);
        reverse(v.begin(),v.end());
        return v;
    }
};