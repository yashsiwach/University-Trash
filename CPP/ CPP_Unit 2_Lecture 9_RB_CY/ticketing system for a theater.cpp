// Sample test cases :
// Input 1 :

// 5
// 50 40 10 20 30
// 20

// Output 1 :

// Seat is available.

// Input 2 :

// 5
// 50 40 30 10 20
// 80

// Output 2 :

// Seat is not available.


#include <iostream>
#include <vector>

class ArraySearch {
public:
    ArraySearch(int n, std::vector<int>& seats, int search_seat) 
        : n(n), seats(seats), search_seat(search_seat) {}

    bool isSeatAvailable() {
        for (int seat : seats) {
            if (seat == search_seat) {
                return true;
            }
        }
        return false;
    }

private:
    int n;
    std::vector<int> seats;
    int search_seat;
};

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> seats(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> seats[i];
    }

    int search_seat;
    std::cin >> search_seat;

    ArraySearch arraySearch(n, seats, search_seat);

    if (arraySearch.isSeatAvailable()) {
        std::cout << "Seat is available." << std::endl;
    } else {
        std::cout << "Seat is not available." << std::endl;
    }

    return 0;
}
