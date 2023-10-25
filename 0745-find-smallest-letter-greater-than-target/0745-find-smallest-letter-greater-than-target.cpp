class Solution {
public:
    char nextGreatestLetter(vector<char>& v, char key) {
        int n=v.size(),low=0,mid=0,high=n-1,pivot=0;
        while(low<=high){
            mid=low+(high-low)/2;
            if(v[mid]==key){
                low=mid+1;
            }
            if(v[mid]>key){
                pivot=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return v[pivot];
    }
};