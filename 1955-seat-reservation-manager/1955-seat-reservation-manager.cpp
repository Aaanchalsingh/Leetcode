class SeatManager {
private:
    std::priority_queue<int, std::vector<int>, std::greater<int>> seats;
public:
    SeatManager(int n) {
        for (int i = 1; i <= n; i++) {
            seats.push(i);
        }
    }
    int reserve() {
        if (!seats.empty()) { 
            int reservedSeat = seats.top();
            seats.pop(); 
            return reservedSeat;
        } else {
            return -1; 
        }
    }
    void unreserve(int seatNumber) {
        seats.push(seatNumber);
    }
};