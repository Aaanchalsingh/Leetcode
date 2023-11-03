class Solution {
public:
    long long minSum(vector<int>& v1, vector<int>& v2) {
        long long int a=0,b=0,suma=0,sumb=0;
        for(int i=0;i<v1.size();i++){
            suma+=v1[i];
            if(v1[i]==0) a++;
        }
        for(int i=0;i<v2.size();i++){
            sumb+=v2[i];
            if(v2[i]==0) b++;
        }
        if(a==0 && suma<sumb+b) return -1;
        if(b==0 && sumb<suma+a) return -1;
        
        return max(suma+a,sumb+b);
    }
};