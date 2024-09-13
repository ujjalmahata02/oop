#include<iostream>
using namespace std;

class dept_store {
    static int count;  // static variable to keep track of count
    int id;            // unique ID for each object
    float price;       // price of the item
public:
    // Constructor
    dept_store(float p) {
        price = p;
        id = ++count;  // Increment count and assign it to id
        cout << "Object with id = " << id << " created, price = " << price << endl;
    }

    // Destructor
    ~dept_store() {
        cout << "Object with id = " << id << " destroyed" << endl;
    }
};

// Definition of static member variable
int dept_store::count = 0;

int main() {
    {
        // Creating objects
        dept_store obj1(1.2), obj2(2.7), obj3(10.3), obj4(9.2);
    }  // All objects go out of scope here, and destructors will be called

    return 0;
}
