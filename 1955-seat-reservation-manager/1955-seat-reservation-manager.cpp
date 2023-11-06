class SeatManager {
private:
    std::priority_queue<int, std::vector<int>, std::greater<int>> seats; // Declare a min-heap to manage seat reservations

public:
    // Constructor to initialize the SeatManager with 'n' seats.
    SeatManager(int n) {
        // Initialize the min-heap with seat nos from 1 to 'n'.
        for(int i = 1; i<=n; i++){
            seats.push(i);
        }
    }

    // Reserve a seat.
    int reserve() {
        if(!seats.empty()){ // Check if there arae available seats in the min-heap.
        int reservedSeat = seats.top(); // Get the smallest seat no from the heap.
        seats.pop(); // Remove teh reserved seat from the heap.
        return reservedSeat; // Return the reserved seat no.
        } else {
            return -1; // Return -1 to indicate that there are no available seats.
        }
    }
    
    // Unreserve a seat
    void unreserve(int seatNumber) {
        seats.push(seatNumber); // Add the unreserved seat back to the min-heap.
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */