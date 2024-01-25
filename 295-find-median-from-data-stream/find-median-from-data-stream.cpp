class MedianFinder {
public:
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;
    double median=0;
    MedianFinder() { median = 0; }
    void addNum(int num) {
        if (max_heap.empty() || num <= max_heap.top()) {
            max_heap.push(num);
        } else {
            min_heap.push(num);
        }
        int maxsize = max_heap.size();
        int minsize = min_heap.size();
        if (abs(maxsize - minsize) > 1) {
            if (maxsize < minsize) {
                int x = min_heap.top();
                min_heap.pop();
                max_heap.push(x);
            } else {
                int x = max_heap.top();
                max_heap.pop();
                min_heap.push(x);
            }
        }
    }
    double findMedian() {
        int maxsize = max_heap.size();
        int minsize = min_heap.size();
        if (maxsize == minsize)
            median = (max_heap.top() + min_heap.top()) / 2.0;
        else if (min_heap.size() > max_heap.size())
            median = min_heap.top();
        else if (min_heap.size() < max_heap.size())
            median = max_heap.top();
        return median;
    }
};