#include <iostream>
using namespace std;

class A {
    int n; // Member variable for value
public:
    void input() {
        cout << "Enter value: ";
        cin >> n;
    }
    void show() {
        cout << "Value: " << n << endl;
    }
    int getValue() const {
        return n;
    }
};

class B : virtual public A {
public:
    int sum; // Member variable for storing sum
    void calculateSum(int a, int b) {
        sum = a + b;
    }
    void showSum() const {
        cout << "Sum: " << sum << endl;
    }
};

class C : virtual public A {
public:
    int sub; // Member variable for storing subtraction
    void calculateSub(int a, int b) {
        sub = a - b;
    }
    void showSub() const {
        cout << "Subtraction: " << sub << endl;
    }
};

class D : public B, public C {
public:
    int multi; // Member variable for storing multiplication
    void calculateMulti(int a, int b) {
        multi = a * b;
    }
    void showMulti() const {
        cout << "Multiplication: " << multi << endl;
    }
};

int main() {
    D obj;

    // Using variables a and b
    int a = 10, b = 30;

    // Demonstrating functionality
    obj.input(); // Input value (from class A)
    obj.show();  // Show value (from class A)

    obj.calculateSum(a, b);  // Calculate sum (from class B)
    obj.showSum();           // Display sum

    obj.calculateSub(a, b);  // Calculate subtraction (from class C)
    obj.showSub();           // Display subtraction

    obj.calculateMulti(a, b); // Calculate multiplication (from class D)
    obj.showMulti();          // Display multiplication

    return 0;
}
