class Solution {
public:
    int maximumLength(string s) {
        int ans=0,n=s.size();string temp="";
        unordered_map<string,int> mp;
        for(int i=0;i<n;i++){
            temp="";
            temp+=s[i];
            mp[temp]++;
            for(int j=i+1;j<n;j++){
                if(s[j]==s[i]){
                    temp+=s[j];
                    mp[temp]++;
                }
                else break;
            }
        }
        int size=0;
        for(auto it : mp){
            if(it.second >= 3 ){
                int val = it.first.size();
                size = max(val,size);
            }
        }
        if(size==0) return -1;
        return size;
    }
};