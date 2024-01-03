class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int m=bank.size(),n=bank[0].size(),ans=0,cur=-1,i=0;
        vector<int> v(m+1,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(bank[i][j]=='1'){
                    v[i]++;
                }
            }
        }// 1 1
        while(i<m){
            if(v[i]==0){
                i++;
                continue;
            }
            if(cur==-1){
                cur=1;
                cur*=v[i++];
            }
            else{
                cur*=v[i];
                ans+=cur;
                cur=-1;
            }
        }
        return ans;
    }
};