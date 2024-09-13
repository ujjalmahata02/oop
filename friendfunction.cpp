#include<iostream>
using namespace std;

class mango;  // Forward declaration

class apple {
    int x;
public:
    void get_data() {
        cout << "Enter the value of x: ";
        cin >> x;
    }
    friend void add(apple a1, mango m1);
};

class mango {
    int y;
public:
    void get_data() {
        cout << "Enter the value of y: ";
        cin >> y;
    }
    friend void add(apple a1, mango m1);
};

void add(apple a1, mango m1) {
    int sum = a1.x + m1.y;
    cout << "Sum = " << sum << endl;
}

int main() {
    apple obj1;
    mango obj2;
    obj1.get_data();
    obj2.get_data();
    add(obj1, obj2);
    
    return 0;
}
