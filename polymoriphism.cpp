#include <iostream>
using namespace std;

class A {
    int num1, num2; // Fixed variable names
public:
    void person() {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2; // Corrected input syntax
        int s = num1 + num2; // Declared and used 's'
        cout << "Addition: " << s << endl;
    }

    void person(int a, int b) {
        int m = a * b; // Declared and used 'm'
        cout << "Multiplication: " << m << endl;
    }
};

int main() {
    A obj;           // Fixed object instantiation
    obj.person();    // Call the method for addition
    obj.person(10, 20); // Call the method for multiplication
    return 0;
}
