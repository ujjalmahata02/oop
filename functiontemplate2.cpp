#include <iostream>
#include <string>
using namespace std;

// Generic template function to handle various data types
template <typename T1, typename T2>
void print(T1 x, T2 y) {
    cout << x << " " << y << endl;
}

int main() {
    print(10, 20);            // Two integers
    print(2.4, 4.5);          // Two floating-point numbers
    print("Ujjal", "Mehata"); // Two strings
    return 0;
}
