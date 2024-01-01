class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int m=g.size(),n=s.size(),i=0,j=0,c=0;
        while(i<m&&j<n){
            if(s[j]>=g[i]){
                c++;i++;j++;
            }
            else j++;
        }
        return c;
    }
};