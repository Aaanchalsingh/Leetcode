class Solution {
public:
    // int buttonWithLongestTime(vector<vector<int>>& v) {
    //     int n = v.size(),smallind=v[0][0],maxcount=v[0][1];
    //     for(int i=1;i<n;i++){
    //         if(maxcount<v[i][1]-v[i-1][1]){
    //             if(smallind==v[i][0]) maxcount+=v[i][1]-v[i-1][1];
    //             else maxcount=v[i][1]-v[i-1][1];
    //             smallind=v[i][0];
    //         }
    //     }
    //     return smallind;
    // }
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int maxTime = events[0][1];
        int result = events[0][0];

        for (int i = 1; i < events.size(); i++) {
            int pressTime = events[i][1] - events[i - 1][1];
            if (pressTime > maxTime || (pressTime == maxTime && events[i][0] < result)) {
                maxTime = pressTime;
                result = events[i][0];
            }
        }

        return result;
    }
};