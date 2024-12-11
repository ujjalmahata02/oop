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
};

class B : virtual public A {
    // No additional implementation needed for now
};

class C : virtual public A {
    // No additional implementation needed for now
};

class D : public B, public C {
    // No additional implementation needed for now
};

int main() {
    A obj;
    B obj1;
    C obj2;
    D obj3;

    obj.input();
    obj.show();


    

    return 0;
}


