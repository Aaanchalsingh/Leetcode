class Solution {
public:
    void nextPermutation(vector<int>& v) {
        int n=v.size(),pivot=-1,ind=-1;
        for(int i=n-2;i>=0;i--){
            if(v[i]<v[i+1]){
                pivot=i;
                break;
            }
        }
        if(pivot==-1){
            sort(v.begin(),v.end());
            return ;
        }
        for(int i=n-1;i>=0;i--){
            if(v[pivot]<v[i]){
                ind=i;
                break;
            }
        }
        swap(v[ind],v[pivot]);
        reverse(v.begin()+pivot+1,v.end());
        return ;
    }
};