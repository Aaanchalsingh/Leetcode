class Solution {
public:
    int waysToMakeFair(vector<int>& v) {
        int count=0,n=v.size();
        vector<int> even(n+1,0),odd(n+1,0);
        even[0]=v[0];
        for(int i=1;i<n;i++){
            if(i&1){
                odd[i]=odd[i-1]+v[i];
                even[i]=even[i-1];
            }
            else{
                even[i]=even[i-1]+v[i];
                odd[i]=odd[i-1];
            }
        }
        if(n>=1){
            int a=odd[n-1]-odd[0];
            int b=even[n-1]-even[0];
            if(a==b) count++;
        }
        for(int i=1;i<n;i++){
            int evensum=even[i-1]+odd[n-1]-odd[i];
            int oddsum=odd[i-1]+even[n-1]-even[i];
            if(evensum==oddsum) count++;
        }
        return count;
    }
};