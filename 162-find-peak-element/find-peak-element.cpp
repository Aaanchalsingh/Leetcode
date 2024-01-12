class Solution {
public:
    int findPeakElement(vector<int>& v) {
        int n=v.size(),beg=0,end=v.size()-1;
        while(beg<end){
            int mid=(beg+end)/2;
            if(v[mid]>v[mid+1])
                end=mid;
            else beg=mid+1;
        }
        return beg;
    }
};