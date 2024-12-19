#include <iostream>
using namespace std;

// Function template with two types
template <typename T1, typename T2>
void display(T1 a, T2 b) {
    cout << "First value: " << a << ", Second value: " << b << endl;
}

int main() {
    display(10, 3.14);         // Integer and double
    display("Hello", 'A');     // String and character
    display(42, "World");      // Integer and string
    return 
