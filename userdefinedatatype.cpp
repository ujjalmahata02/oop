#include <iostream>
using namespace std;

class time {
    int hh, mm, ss;
    
public:
    // Default constructor
    time() : hh(0), mm(0), ss(0) {}

    // Parameterized constructor
    time(int s) {
        hh = s / 3600;
        s %= 3600;
        mm = s / 60;
        ss = s % 60;
    }

    // Function to display time
    void show() const {
        cout << hh << ":" << mm << ":" << ss << endl;
    }
};

int main() {
    // Initialize objects using constructors
    time t1(9200); // t1 gets initialized with 9200 seconds
    time t2(2020); // t2 gets initialized with 2020 seconds

    cout << "time1 = ";
    t1.show();

    cout << "time2 = ";
    t2.show();

    return 0;
}
