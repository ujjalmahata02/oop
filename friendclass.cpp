#include<iostream>
using namespace std;

class B;  // Forward declaration of class B

class A {
    int x, y;

public:
    void enter() {
        cout << "Enter values for x and y: ";
        cin >> x >> y;
    }
    
    // Declare class B as a friend
    friend class B;
};

class B {
public:
    void display(A l) {
        cout << "x = " << l.x << endl;
        cout << "y = " << l.y << endl;
    }
};

int main() {
    A obj1;  // Correct variable names without spaces
    B obj2;

    obj1.enter();  // Get values from user
    obj2.display(obj1);  // Call display method to show values of obj1

    return 0;
}
