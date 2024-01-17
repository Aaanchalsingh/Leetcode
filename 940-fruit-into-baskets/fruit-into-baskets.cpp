class Solution {
public:
    int totalFruit(vector<int>& v) {
        int n=v.size(),count=0,j=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[v[i]]++;
            while(mp.size()>2){
                mp[v[j]]--;
                if(mp[v[j]]==0) mp.erase(v[j]);
                j++;
            }
            count=max(count,i-j+1);
        }

        return count;
    }
};