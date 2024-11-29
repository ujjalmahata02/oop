#include <iostream>
using namespace std;

class A {
    static int count; // Declare a static member variable
public:
    A() {
        cout << "Object " << ++count << " created" << endl;
    }

    ~A() {
        cout << "Object " << count-- << " deallocated" << endl;
    }
};

// Initialize the static member variable
int A::count = 0;

int main() {
    A obj1, obj2,obj4,obj5,obj7; // Corrected object names
    return 0;
}
