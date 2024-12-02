#include <iostream>
using namespace std;

// Base class A
class A {
protected:
    int a, b;

public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void add() {
        int c = a + b;
        cout << "Addition: " << c << endl;
    }
};

// Base class B
class B {
protected:
    int a, b; // Add protected members for consistency
public:
    void setValues(int x, int y) {
        a = x;
        b = y;
    }

    void sub() {
        int c = a - b;
        cout << "Subtraction: " << c << endl;
    }
};

// Derived class C inheriting from A and B
class C : public A, public B {
public:
    void mult() {
        int c = a * b;
        cout << "Multiplication: " << c << endl;
    }

    // Synchronize values for B
    void syncValues() {
        setValues(a, b);
    }
};

int main() {
    C obj; // Create an object of derived class C

    obj.input();    // Input two numbers (from class A)
    obj.syncValues(); // Synchronize values with class B
    obj.add();      // Perform addition (from class A)
    obj.sub();      // Perform subtraction (from class B)
    obj.mult();     // Perform multiplication (from class C)

    return 0;
}
