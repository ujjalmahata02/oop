#include<iostream>
using namespace std;

class animal {
public:
    virtual void sound() = 0; // Pure virtual function
};

class dog : public animal {
public:
    void sound() override { // Properly overriding the virtual function
        cout << "...dog crying...woof...woof.." << endl;
    }
};

int main() {
    dog d;
    d.sound(); // Correct method call
    return 0;
}
