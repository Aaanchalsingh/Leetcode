class Solution {
public:
    int kItemsWithMaximumSum(int n1, int n0, int n2, int k) {
        int sum=0;
        if(k>n1){
            k=k-n1;//6
            sum+=n1;
            cout<<sum<<endl;
            if(k>n0){
                k=k-n0;//4
                cout<<k<<endl;
                if(k>n2) return -1;
                else return sum-k;
            }
            else return sum;
        }
        return k;
    }
};