#include <iostream>
using namespace std; 

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << add(5, 3) << endl;
    cout << "Sum of doubles: " << add(5.5, 3.3) << endl;

    return 0;
}
