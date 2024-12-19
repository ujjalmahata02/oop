#include <iostream>
using namespace std;

// Class template
template <typename T>
class Box {
private:
    T value;

public:
    Box(T v) : value(v) {}

    void display() {
        cout << "Value: " << value << endl;
    }

    T getValue() {
        return value;
    }
};

int main() {
    Box<int> intBox(42);  // Integer box
    Box<double> doubleBox(3.14);  // Double box
    Box<string> stringBox("Hello, Templates!");  // String box

    intBox.display();
    doubleBox.display();
    stringBox.display();

    return 0;
}
