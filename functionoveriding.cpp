#include <iostream>
using namespace std;

class A {
public:
    void person() {
        cout << "Good morning" << endl;
    }
};

class B : public A {
public:
    void person() {
        cout << "Good night" << endl;
    }
};

int main() {
    B obj; // Fixed object instantiation
    obj.person(); // Calls the overridden method in class B
    obj.A::person();
    return 0;
}
