#include <iostream>
using namespace std;

class Box {
public:
    // Constructor
    Box() {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~Box() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    // Dynamically create an array of Box objects
    Box* myBoxArray = new Box[4];

    // Release the memory allocated for the array
    delete[] myBoxArray;

    return 0;
}
