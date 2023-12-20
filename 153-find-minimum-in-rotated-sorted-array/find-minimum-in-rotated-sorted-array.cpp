class Solution{
    public: 
        int findMin(vector<int> &v)
        {
            int low = 0,high=v.size()-1;
            while(v[low]>v[high]) low++;
            if(low==0) return v[0];
            return v[low];
        }
};