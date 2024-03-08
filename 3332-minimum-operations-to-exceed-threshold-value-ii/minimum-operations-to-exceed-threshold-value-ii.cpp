class Solution {
public:
    int minOperations(vector<int>& v, int k) {
        priority_queue<long long int,vector<long long int>,greater<long long int>> pq;
        long long int steps=0,x=0,y=0;
        for(auto x:v) pq.push(x);
        while(!pq.empty() and pq.top()<k and pq.size()>=2){
            x=pq.top();
            pq.pop();
            y=pq.top();
            pq.pop();
            pq.push(min(x, y) * 2 + max(x, y));
            steps++;
        }
        return steps;
    }
};