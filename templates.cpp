#include <iostream>
using namespace std;

// Function template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Integer addition: " << add(5, 10) << endl;
    cout << "Double addition: " << add(3.5, 7.2) << endl;
    cout << "Character addition: " << add('A', 2) << endl; // 'A' (ASCII 65) + 2 = 'C'
    return 0;
}
