#include <iostream>
#include <string>
using namespace std;

// Generic template class to handle various data types
template <class A, class B>
class Prin {
    A x;
    B y;

public:
    // Constructor to initialize x and y
    Prin(A x, B y) : x(x), y(y) {}

    // Member function to print values
    void print() {
        cout << x << " " << y << endl;
    }
};

int main() {
    // Create an object of the template class with specified types
    Prin<int, string> obj(100, "Hello"); 
    obj.print(); // Call the print function to display values

    return 0;
}
