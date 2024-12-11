#include <iostream>
using namespace std;

class A {
    int n;
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
    int sum;
    void calculateSum(int a, int b) {
        sum = a + b;
    }
    void showSum() const {
        cout << "Sum: " << sum << endl;
    }
};

class C : virtual public A {
public:
    int sub;
    void calculateSub(int a, int b) {
        sub = a - b;
    }
    void showSub() const {
        cout << "Subtraction: " << sub << endl;
    }
};

class D : public B, public C {
public:
    int multi;
    void calculateMulti(int a, int b) {
        multi = a * b;
    }
    void showMulti() const {
        cout << "Multiplication: " << multi << endl;
    }
};

int main() {
    D obj;

    // Using `D` to demonstrate functionality
    int a = 10, b = 30;

    obj.input(); // From class A
    obj.show();  // From class A

    obj.calculateSum(a, b);  // From class B
    obj.showSum();

    obj.calculateSub(a, b);  // From class C
    obj.showSub();

    obj.calculateMulti(a, b);  // From class D
    obj.showMulti();

    return 0;
}
