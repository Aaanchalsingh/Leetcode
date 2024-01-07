class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& v) {
        double n=v.size(),cur=0,area=-1,k=0,temp=0;
        for(int i=0;i<n;i++){
            temp=sqrt((v[i][0]*v[i][0])+(v[i][1]*v[i][1]));
            if(cur<temp||(cur==temp && v[i][0]*v[i][1] > area)){
                cur=temp;
                k=v[i][0]*v[i][1];
                area=k;
            }
        }
        return area;
    }
};