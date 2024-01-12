class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int ans=0;
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        while(pq.size()>1){
            int first = pq.top();
            pq.pop();
            int second= pq.top();
            pq.pop();
            if(first!=0) pq.push(first-1);
            if(second!=0){
                pq.push(second-1); ans++;}
           
        }
        return ans;
    }
};